// core.h — hardware-independent logic for the Quanta Controller.
// One box, 4 x 3.5 mm TRS jacks, one Altair (or a piggybacked chain of Altairs) per jack:
//   Tip  = blue channel
//   Ring = white channel
//   Sleeve = ground
// Scope: Altair 100 W and 210 W only. The fixture table is kept so other lights can be added later.
// No Arduino includes, so this is unit-tested on a PC (test/test_core.cpp).
#pragma once
#include <stdint.h>
#include <string.h>

namespace qc {

// ------------------------------------------------------------------ sizes
constexpr uint8_t  JACKS        = 4;
constexpr uint8_t  CHANNELS     = JACKS * 2;   // ch = jack*2 + (0 tip, 1 ring)
constexpr uint8_t  MAX_GROUPS   = 6;
constexpr uint8_t  MAX_POINTS   = 16;
constexpr uint8_t  MAX_PHOTO    = 6;
constexpr uint8_t  NAME_LEN     = 20;
constexpr uint16_t LEVEL_MAX    = 1000;        // levels are permille
constexpr uint16_t DAC_MAX      = 4095;
constexpr uint16_t NO_CLOCK_LEVEL = 250;       // brand-new box with no clock: 25 % so the user sees it works
constexpr uint32_t DAY          = 86400;

inline int clampi(int v, int lo, int hi) { return v < lo ? lo : v > hi ? hi : v; }
inline void copyName(char *dst, const char *src) {
  if (!src) src = "";
  strncpy(dst, src, NAME_LEN - 1); dst[NAME_LEN - 1] = 0;
}

// ------------------------------------------------------------------ fixtures
enum Fixture : uint8_t {
  FX_NONE = 0, FX_ALTAIR_100, FX_ALTAIR_210, FX_COUNT
};
inline bool twoChannel(uint8_t fx) { return fx == FX_ALTAIR_100 || fx == FX_ALTAIR_210; }

// Ids used in the JSON API / GUI.
inline const char *fixtureId(uint8_t fx) {
  static const char *ids[FX_COUNT] = {"none", "altair_100", "altair_210"};
  return fx < FX_COUNT ? ids[fx] : "none";
}
inline uint8_t fixtureFromId(const char *s) {
  if (!s) return FX_NONE;
  for (uint8_t i = 0; i < FX_COUNT; i++) if (!strcmp(s, fixtureId(i))) return i;
  return FX_NONE;
}

// ------------------------------------------------------------------ config
struct Point   { uint16_t min; uint16_t lvl; };             // minute of day, permille
struct Group   { char name[NAME_LEN]; uint8_t color; uint8_t n; Point p[MAX_POINTS]; };
struct Jack    { uint8_t fixture; uint8_t count; char name[NAME_LEN]; uint16_t watts[2]; };  // watts per fixture per channel
struct Channel { int8_t group; uint8_t trim; uint8_t cal; };  // group -1 = unassigned; trim 0..100 %; cal 80..120 %
struct Photo   { char name[NAME_LEN]; uint16_t minutes; uint16_t lvl[MAX_GROUPS]; };

struct Config {
  uint8_t  nGroups;
  Group    group[MAX_GROUPS];
  Jack     jack[JACKS];
  Channel  ch[CHANNELS];
  uint8_t  nPhoto;
  Photo    photo[MAX_PHOTO];
  uint8_t  intensity;      // schedule scale, 10..100 %
  uint8_t  floorPct;       // lowest non-zero level (Mean Well drivers flicker when very low)
  uint16_t rampSec;        // soft start after a power cut
  uint16_t fadeSec;        // how long a full-range change takes (mode switches, slider moves)
  bool     acclOn;
  uint8_t  acclStartPct;   // acclimation starts at this % of the schedule...
  uint16_t acclDays;       // ...and reaches 100 % after this many days
  uint32_t acclStart;      // epoch seconds (UTC)
  char     tz[48];         // POSIX TZ string
  bool     expert;
  bool     setupDone;
  uint16_t costMils;       // electricity price, 1/1000 $ per kWh (150 = $0.150)
};

// Default channel -> group for a fixture: group 0 = Blue, group 1 = White.
inline int8_t defaultGroup(uint8_t fx, uint8_t side) {
  switch (fx) {
    case FX_ALTAIR_100:
    case FX_ALTAIR_210:
                        return side == 0 ? 0 : 1;     // tip = blue, ring = white
    default:            return -1;
  }
}
inline uint16_t defaultWatts(uint8_t fx, uint8_t side) {
  // Altair per-channel split is a guess until Quanta supplies real numbers; users can edit.
  if (fx == FX_ALTAIR_100) return side == 0 ? 50 : 50;
  if (fx == FX_ALTAIR_210) return side == 0 ? 105 : 105;
  return 0;
}

inline void sortPoints(Group &g) {
  for (uint8_t i = 1; i < g.n; i++) {
    Point k = g.p[i]; int j = i - 1;
    while (j >= 0 && g.p[j].min > k.min) { g.p[j + 1] = g.p[j]; j--; }
    g.p[j + 1] = k;
  }
}

// ------------------------------------------------------------------ presets
// Two curves (Blue, White). Blues lead the sunrise and trail the sunset.
enum Preset : uint8_t { PRESET_SOFTIE_LPS = 0, PRESET_MIXED = 1, PRESET_SPS = 2 };
struct PresetShape { uint16_t bluePeak, whitePeak; };
inline PresetShape presetShape(uint8_t p) {
  switch (p) {
    case PRESET_SOFTIE_LPS: return {700, 450};
    case PRESET_SPS:        return {1000, 850};
    default:                return {850, 650};
  }
}
// on/off in minutes of day; off may wrap past midnight.
inline void presetCurve(Group &g, uint8_t which /*0 blue 1 white*/, uint8_t preset, uint16_t on, uint16_t off) {
  PresetShape s = presetShape(preset);
  int len = ((int)off - (int)on + 1440) % 1440;
  if (len < 240) len = 240;                        // at least 4 h
  auto at = [&](int m) { return (uint16_t)(((int)on + m + 1440) % 1440); };
  int ramp = len >= 600 ? 120 : len / 5;           // 2 h ramps on a 10 h day
  g.n = 4;
  if (which == 0) {
    g.p[0] = {at(0), 0};           g.p[1] = {at(ramp), s.bluePeak};
    g.p[2] = {at(len - ramp), s.bluePeak}; g.p[3] = {at(len), 0};
  } else {
    int lead = ramp / 2;           // whites start later, stop earlier
    g.p[0] = {at(lead), 0};        g.p[1] = {at(lead + ramp), s.whitePeak};
    g.p[2] = {at(len - lead - ramp), s.whitePeak}; g.p[3] = {at(len - lead), 0};
  }
  sortPoints(g);
}

// ------------------------------------------------------------------ curves

// Linear interpolation between points, wrapping at midnight. Seconds for smooth ramps.
inline uint16_t curveAt(const Group &g, uint32_t secOfDay) {
  if (g.n == 0) return 0;
  if (g.n == 1) return g.p[0].lvl;
  int32_t t = (int32_t)(secOfDay % DAY);
  int8_t a = g.n - 1;
  for (uint8_t i = 0; i < g.n; i++) if ((int32_t)g.p[i].min * 60 <= t) a = i;
  uint8_t b = (a + 1) % g.n;
  int32_t ta = g.p[a].min * 60, tb = g.p[b].min * 60;
  if (tb <= ta) tb += DAY;
  int32_t tt = t < ta ? t + (int32_t)DAY : t;
  int32_t span = tb - ta;
  int64_t f = span ? (int64_t)(tt - ta) * 1000 / span : 0;
  return (uint16_t)(g.p[a].lvl + ((int32_t)g.p[b].lvl - (int32_t)g.p[a].lvl) * f / 1000);
}

// Acclimation factor in permille for a given time.
inline uint16_t acclFactor(const Config &c, uint32_t epoch) {
  if (!c.acclOn || c.acclDays == 0) return 1000;
  if (epoch <= c.acclStart) return c.acclStartPct * 10;
  uint32_t el = epoch - c.acclStart, tot = (uint32_t)c.acclDays * DAY;
  if (el >= tot) return 1000;
  return (uint16_t)(c.acclStartPct * 10 + (uint64_t)(1000 - c.acclStartPct * 10) * el / tot);
}

// ------------------------------------------------------------------ modes
enum Mode : uint8_t { MODE_AUTO = 0, MODE_MANUAL = 1, MODE_PHOTO = 2 };
struct Override {
  uint8_t  mode = MODE_AUTO;
  uint32_t until = 0;              // epoch; 0 = until the user resumes (manual only)
  int8_t   photo = -1;             // which picture setting is showing
  uint16_t lvl[MAX_GROUPS] = {0};
};

// Is the override still in force? Picture mode always has an end time.
inline bool overrideActive(const Override &o, bool timeValid, uint32_t epoch) {
  if (o.mode == MODE_AUTO) return false;
  if (o.until == 0) return o.mode == MODE_MANUAL;
  if (!timeValid) return true;                   // can't tell time: keep what the user chose
  return epoch < o.until;
}

// Levels (permille) for every group right now. Returns the mode in force.
inline uint8_t groupLevels(const Config &c, const Override &o, bool timeValid, uint32_t epoch,
                           uint32_t secOfDay, uint16_t out[MAX_GROUPS]) {
  if (overrideActive(o, timeValid, epoch)) {
    for (uint8_t g = 0; g < MAX_GROUPS; g++) out[g] = o.lvl[g] > LEVEL_MAX ? LEVEL_MAX : o.lvl[g];
    return o.mode;
  }
  for (uint8_t g = 0; g < MAX_GROUPS; g++) {
    if (g >= c.nGroups) { out[g] = 0; continue; }
    if (!timeValid) { out[g] = NO_CLOCK_LEVEL; continue; }
    uint32_t v = curveAt(c.group[g], secOfDay);
    v = v * c.intensity / 100;
    v = v * acclFactor(c, epoch) / 1000;
    out[g] = (uint16_t)(v > LEVEL_MAX ? LEVEL_MAX : v);
  }
  return MODE_AUTO;
}

inline bool channelInUse(const Config &c, uint8_t ch) {
  if (ch >= CHANNELS) return false;
  uint8_t fx = c.jack[ch / 2].fixture;
  if (fx == FX_NONE) return false;
  if ((ch & 1) && !twoChannel(fx)) return false;     // kept for future 1-channel fixtures: ring held at 0 V
  return true;
}

// Final level of one output in permille, after trim and the minimum-dim floor.
inline uint16_t channelLevel(const Config &c, const uint16_t grp[MAX_GROUPS], uint8_t ch) {
  if (!channelInUse(c, ch)) return 0;
  int8_t g = c.ch[ch].group;
  if (g < 0 || g >= c.nGroups) return 0;
  uint32_t v = (uint32_t)grp[g] * c.ch[ch].trim / 100;
  if (v == 0) return 0;
  uint32_t fl = (uint32_t)c.floorPct * 10;
  if (v < fl) v = fl;
  return (uint16_t)(v > LEVEL_MAX ? LEVEL_MAX : v);
}

// Output hardware: DAC 0..2.048 V (12-bit, internal ref, gain 1) -> op-amp gain 4.9 -> 0..10.03 V.
// cal (80..120 %) trims each output so 100 % reads exactly 10.00 V on a meter.
constexpr float DAC_FS_V = 2.048f, AMP_GAIN = 4.9f;           // 39k / 10k + 1
constexpr float OUT_FS_V = DAC_FS_V * AMP_GAIN;                  // 10.035 V at code 4095
inline uint16_t levelToCode(uint16_t lvl, uint8_t cal) {
  if (lvl == 0) return 0;
  float v = lvl / 1000.0f * 10.0f * cal / 100.0f;                // wanted volts
  int code = (int)(v / OUT_FS_V * DAC_MAX + 0.5f);
  return (uint16_t)clampi(code, 0, DAC_MAX);
}
inline uint16_t codeToMilliVolts(uint16_t code) { return (uint16_t)(code * OUT_FS_V * 1000.0f / DAC_MAX + 0.5f); }

// Move `cur` toward `tgt` by at most fullRange/fadeMs per ms. Levels are permille.
inline uint16_t slew(uint16_t cur, uint16_t tgt, uint32_t dtMs, uint32_t fadeMs) {
  if (fadeMs == 0 || cur == tgt) return tgt;
  uint32_t step = (uint32_t)LEVEL_MAX * dtMs / fadeMs;
  if (step == 0) step = 1;
  if (tgt > cur) return (uint16_t)((uint32_t)(tgt - cur) <= step ? tgt : cur + step);
  return (uint16_t)((uint32_t)(cur - tgt) <= step ? tgt : cur - step);
}

// ------------------------------------------------------------------ output monitoring
// Each output has a 1k resistor between the op-amp and the jack; the op-amp's feedback comes from
// the jack side, so the jack voltage is correct regardless of load. Measuring the op-amp side tells
// us the current the fixtures push back into the controller (Mean Well dim inputs source ~0.1-0.2 mA)
// and whether the jack is shorted (the op-amp runs to its rail trying to raise a dead-short jack).
enum OutStatus : uint8_t { OUT_IDLE = 0, OUT_OK = 1, OUT_NO_LOAD = 2, OUT_SHORT = 3, OUT_UNKNOWN = 4 };
constexpr uint16_t SERIES_OHMS = 1000;
struct OutReading { uint8_t status; int16_t microAmps; };
inline OutReading classifyOutput(uint16_t setMv, uint16_t ampMv, bool inUse) {
  OutReading r{OUT_IDLE, 0};
  int32_t ua = ((int32_t)setMv - (int32_t)ampMv) * 1000 / SERIES_OHMS;   // + = fixture sourcing
  r.microAmps = (int16_t)clampi(ua, -32000, 32000);
  if (!inUse) return r;
  if (ampMv > setMv + 1500 && setMv >= 500) { r.status = OUT_SHORT; return r; }
  if (setMv < 1000 || setMv > 9000) { r.status = OUT_UNKNOWN; return r; } // drivers only measurable mid-range
  r.status = ua >= 40 ? OUT_OK : OUT_NO_LOAD;
  return r;
}

// ------------------------------------------------------------------ defaults & validation
inline void defaultConfig(Config &c) {
  memset(&c, 0, sizeof(c));
  c.nGroups = 2;
  copyName(c.group[0].name, "Blue");  c.group[0].color = 0;
  copyName(c.group[1].name, "White"); c.group[1].color = 1;
  presetCurve(c.group[0], 0, PRESET_MIXED, 10 * 60, 21 * 60);
  presetCurve(c.group[1], 1, PRESET_MIXED, 10 * 60, 21 * 60);
  for (uint8_t j = 0; j < JACKS; j++) {
    c.jack[j].fixture = FX_NONE; c.jack[j].count = 1;
    char n[NAME_LEN] = "Output 1"; n[7] = (char)('1' + j); copyName(c.jack[j].name, n);
  }
  for (uint8_t i = 0; i < CHANNELS; i++) c.ch[i] = {-1, 100, 100};
  for (uint8_t p = 0; p < MAX_PHOTO; p++) c.photo[p].minutes = 10;
  c.nPhoto = 2;
  copyName(c.photo[0].name, "Coral glow"); c.photo[0].minutes = 10; c.photo[0].lvl[0] = 1000; c.photo[0].lvl[1] = 80;
  copyName(c.photo[1].name, "True color"); c.photo[1].minutes = 10; c.photo[1].lvl[0] = 500; c.photo[1].lvl[1] = 1000;
  c.intensity = 100; c.floorPct = 10; c.rampSec = 60; c.fadeSec = 3;
  c.acclOn = false; c.acclStartPct = 50; c.acclDays = 30; c.acclStart = 0;
  strcpy(c.tz, "CST6CDT,M3.2.0,M11.1.0");
  c.expert = false; c.setupDone = false; c.costMils = 150;
}

// Apply a fixture to a jack with its default channel-to-group mapping.
inline void setFixture(Config &c, uint8_t j, uint8_t fx) {
  if (j >= JACKS) return;
  c.jack[j].fixture = fx < FX_COUNT ? fx : (uint8_t)FX_NONE;
  for (uint8_t s = 0; s < 2; s++) {
    int8_t g = defaultGroup(c.jack[j].fixture, s);
    c.ch[j * 2 + s].group = (g >= 0 && g < c.nGroups) ? g : -1;
    if (!c.jack[j].watts[s]) c.jack[j].watts[s] = defaultWatts(c.jack[j].fixture, s);
  }
}

// Make any config safe to run: clamp everything, fix references, sort curves.
// Returns the number of fields it had to correct (0 = config was already clean).
inline int sanitize(Config &c) {
  int fixes = 0;
  auto fix = [&](bool bad) { if (bad) fixes++; return bad; };
  if (fix(c.nGroups < 1 || c.nGroups > MAX_GROUPS)) c.nGroups = c.nGroups < 1 ? 1 : MAX_GROUPS;
  for (uint8_t g = 0; g < MAX_GROUPS; g++) {
    Group &G = c.group[g];
    G.name[NAME_LEN - 1] = 0;
    if (fix(G.n > MAX_POINTS)) G.n = MAX_POINTS;
    for (uint8_t i = 0; i < G.n; i++) {
      if (fix(G.p[i].min > 1439)) G.p[i].min = 1439;
      if (fix(G.p[i].lvl > LEVEL_MAX)) G.p[i].lvl = LEVEL_MAX;
    }
    sortPoints(G);
    if (fix(G.color > 7)) G.color = 0;
  }
  for (uint8_t j = 0; j < JACKS; j++) {
    c.jack[j].name[NAME_LEN - 1] = 0;
    if (fix(c.jack[j].fixture >= FX_COUNT)) c.jack[j].fixture = FX_NONE;
    if (fix(c.jack[j].count < 1 || c.jack[j].count > 8)) c.jack[j].count = c.jack[j].count < 1 ? 1 : 8;
    for (uint8_t s = 0; s < 2; s++) if (fix(c.jack[j].watts[s] > 1000)) c.jack[j].watts[s] = 1000;
  }
  for (uint8_t i = 0; i < CHANNELS; i++) {
    if (fix(c.ch[i].group >= (int8_t)c.nGroups || c.ch[i].group < -1)) c.ch[i].group = -1;
    if (fix(c.ch[i].trim > 100)) c.ch[i].trim = 100;
    if (fix(c.ch[i].cal < 80 || c.ch[i].cal > 120)) c.ch[i].cal = (uint8_t)clampi(c.ch[i].cal, 80, 120);
  }
  if (fix(c.nPhoto > MAX_PHOTO)) c.nPhoto = MAX_PHOTO;
  for (uint8_t p = 0; p < MAX_PHOTO; p++) {
    c.photo[p].name[NAME_LEN - 1] = 0;
    if (fix(c.photo[p].minutes < 1 || c.photo[p].minutes > 240)) c.photo[p].minutes = (uint16_t)clampi(c.photo[p].minutes, 1, 240);
    for (uint8_t g = 0; g < MAX_GROUPS; g++) if (fix(c.photo[p].lvl[g] > LEVEL_MAX)) c.photo[p].lvl[g] = LEVEL_MAX;
  }
  if (fix(c.intensity < 10 || c.intensity > 100)) c.intensity = (uint8_t)clampi(c.intensity, 10, 100);
  if (fix(c.floorPct > 40)) c.floorPct = 40;
  if (fix(c.rampSec > 1800)) c.rampSec = 1800;
  if (fix(c.fadeSec > 60)) c.fadeSec = 60;
  if (fix(c.acclStartPct < 10 || c.acclStartPct > 100)) c.acclStartPct = (uint8_t)clampi(c.acclStartPct, 10, 100);
  if (fix(c.acclDays < 1 || c.acclDays > 120)) c.acclDays = (uint16_t)clampi(c.acclDays, 1, 120);
  c.tz[sizeof(c.tz) - 1] = 0;
  if (fix(c.tz[0] == 0)) strcpy(c.tz, "UTC0");
  return fixes;
}

// ------------------------------------------------------------------ misc
inline uint32_t crc32(const uint8_t *d, uint32_t n, uint32_t crc = 0) {
  crc = ~crc;
  while (n--) { crc ^= *d++; for (int k = 0; k < 8; k++) crc = (crc >> 1) ^ (0xEDB88320u & (0u - (crc & 1))); }
  return ~crc;
}

}  // namespace qc
