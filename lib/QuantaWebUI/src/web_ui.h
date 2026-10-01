// GENERATED from ui/index.html by tools/embed_ui.py - edit that file instead.
#pragma once
#include <Arduino.h>
const char INDEX_HTML[] PROGMEM = R"QCUI(<!doctype html><html lang="en"><head><meta charset="utf-8"><meta name="viewport" content="width=device-width,initial-scale=1,viewport-fit=cover"><meta name="theme-color" content="#081017"></head><body><title>Quanta Controller</title>
<style>
:root{
  --ground:#edf1f2; --surface:#fbfcfc; --sunk:#e3e9eb; --ink:#0f1d24; --muted:#5a7079; --line:#d2dcdf;
  --accent:#3f4bd1; --accent-ink:#ffffff; --ok:#1d8457; --warn:#b3661a; --bad:#c23b3b;
  --g0:#4a55d6; --g1:#b98010; --g2:#13877a; --g3:#a83c8a; --g4:#1f7fb8; --g5:#c4611b; --g6:#4e8a2e; --g7:#66757e;
  --tank:#07121a; --r:14px;
  --sans: ui-sans-serif, system-ui, -apple-system, "Segoe UI", Roboto, "Helvetica Neue", sans-serif;
  --mono: ui-monospace, "SF Mono", Menlo, Consolas, monospace;
}
@media (prefers-color-scheme: dark){
  :root:not([data-theme="light"]){
    --ground:#071017; --surface:#0f1b23; --sunk:#16252f; --ink:#e2ebef; --muted:#8ea3ad; --line:#223440;
    --accent:#8f97ff; --accent-ink:#0b1020; --ok:#45c48d; --warn:#f0a456; --bad:#f07a7a;
    --g0:#8f97ff; --g1:#f0c55e; --g2:#4fd1be; --g3:#e98ad0; --g4:#6cc1f0; --g5:#f5a468; --g6:#9bd477; --g7:#a9b6bd;
    --tank:#02070b; color-scheme:dark;
  }
}
:root[data-theme="dark"]{
  --ground:#071017; --surface:#0f1b23; --sunk:#16252f; --ink:#e2ebef; --muted:#8ea3ad; --line:#223440;
  --accent:#8f97ff; --accent-ink:#0b1020; --ok:#45c48d; --warn:#f0a456; --bad:#f07a7a;
  --g0:#8f97ff; --g1:#f0c55e; --g2:#4fd1be; --g3:#e98ad0; --g4:#6cc1f0; --g5:#f5a468; --g6:#9bd477; --g7:#a9b6bd;
  --tank:#02070b; color-scheme:dark;
}
*{box-sizing:border-box}
html,body{background:var(--ground)}
body{color:var(--ink);font-family:var(--sans);font-size:15px;line-height:1.45;margin:0;padding-inline:16px;padding-block:0 calc(150px + env(safe-area-inset-bottom,0px))}
.wrap{max-width:560px;margin:0 auto;display:flex;flex-direction:column;gap:14px}
h1{font-size:17px;margin:0;letter-spacing:-.01em}
header.top h1{white-space:nowrap;overflow:hidden;text-overflow:ellipsis}
.brand{min-width:0}
h2{font-size:12px;text-transform:uppercase;letter-spacing:.09em;color:var(--muted);margin:0;font-weight:650}
h3{font-size:15px;margin:0}
p{margin:0}
.num{font-family:var(--mono);font-variant-numeric:tabular-nums}
.muted{color:var(--muted)} .small{font-size:13px}
.row{display:flex;align-items:center;gap:10px} .between{justify-content:space-between} .wrapr{flex-wrap:wrap}
.stack{display:flex;flex-direction:column;gap:10px}
section.card{background:var(--surface);border:1px solid var(--line);border-radius:var(--r);padding:14px;display:flex;flex-direction:column;gap:12px}

/* header */
header.top{position:sticky;top:env(safe-area-inset-top,0px);z-index:5;background:var(--ground);padding-block:12px 8px;margin-inline:-16px;padding-inline:16px}
header.top .wrap{flex-direction:row;align-items:center;justify-content:space-between;gap:10px}
.brand{display:flex;align-items:center;gap:8px}
.brand i{width:10px;height:10px;border-radius:50%;background:var(--ok);display:inline-block}
.brand i.warn{background:var(--warn)} .brand i.bad{background:var(--bad)}
.chip{font-size:12px;padding:3px 9px;border-radius:99px;border:1px solid var(--line);color:var(--muted);white-space:nowrap;background:var(--surface)}
.chip.auto{border-color:var(--accent);color:var(--accent)} .chip.manual{border-color:var(--warn);color:var(--warn)} .chip.photo{border-color:var(--g3);color:var(--g3)}
.iconbtn{width:34px;height:34px;border-radius:50%;border:1px solid var(--line);background:var(--surface);color:var(--ink);font:inherit;font-weight:700;cursor:pointer}
.banner{border-radius:12px;padding:10px 12px;font-size:14px;display:flex;gap:10px;align-items:flex-start;border:1px solid}
.banner.demo{background:color-mix(in srgb,var(--accent) 10%,var(--surface));border-color:color-mix(in srgb,var(--accent) 30%,transparent)}
.banner.warn{background:color-mix(in srgb,var(--warn) 12%,var(--surface));border-color:color-mix(in srgb,var(--warn) 35%,transparent)}
.banner.bad{background:color-mix(in srgb,var(--bad) 12%,var(--surface));border-color:color-mix(in srgb,var(--bad) 35%,transparent)}
.banner .grow{flex:1}

/* bottom nav */
nav.tabs{position:fixed;left:0;right:0;bottom:0;z-index:6;background:var(--surface);border-top:1px solid var(--line);padding-bottom:env(safe-area-inset-bottom,0px)}
nav.tabs .in{max-width:560px;margin:0 auto;display:grid;grid-template-columns:repeat(5,1fr)}
nav.tabs button{background:none;border:0;color:var(--muted);font:inherit;font-size:11px;padding:8px 0 9px;display:flex;flex-direction:column;align-items:center;gap:3px;cursor:pointer}
nav.tabs button svg{width:22px;height:22px;stroke:currentColor;fill:none;stroke-width:1.8;stroke-linecap:round;stroke-linejoin:round}
nav.tabs button[aria-current="page"]{color:var(--accent);font-weight:650}
.savebar{position:fixed;left:0;right:0;bottom:calc(56px + env(safe-area-inset-bottom,0px));z-index:6;padding-inline:16px;pointer-events:none}
.savebar .in{max-width:560px;margin:0 auto 8px;background:var(--ink);color:var(--surface);border-radius:12px;padding:8px 8px 8px 14px;display:flex;align-items:center;gap:8px;pointer-events:auto;box-shadow:0 6px 24px #0003}
.savebar .grow{flex:1;font-size:14px}
.savebar .btn{background:transparent;color:var(--surface);border-color:#fff4}
.savebar .btn.primary{background:var(--accent);border-color:var(--accent);color:var(--accent-ink)}

/* controls */
.btn{font:inherit;font-size:14px;border:1px solid var(--line);background:var(--surface);color:var(--ink);border-radius:10px;padding:9px 14px;cursor:pointer;white-space:nowrap}
.btn.primary{background:var(--accent);border-color:var(--accent);color:var(--accent-ink);font-weight:650}
.btn.danger{color:var(--bad);border-color:color-mix(in srgb,var(--bad) 40%,transparent)}
.btn.small{padding:5px 10px;font-size:13px}
.btn:disabled{opacity:.45;cursor:default}
.seg{display:grid;grid-auto-flow:column;grid-auto-columns:1fr;border:1px solid var(--line);border-radius:10px;overflow:hidden;background:var(--surface)}
.seg button{border:0;background:transparent;color:var(--muted);padding:9px 6px;font:inherit;font-size:14px;cursor:pointer}
.seg button.sel{background:var(--ink);color:var(--surface);font-weight:650}
input[type=range]{width:100%;accent-color:var(--accent);height:28px;margin:0}
input[type=time],input[type=text],input[type=password],input[type=number],input[type=date],select{font:inherit;font-size:15px;color:var(--ink);background:var(--ground);border:1px solid var(--line);border-radius:9px;padding:7px 9px;min-width:0;width:100%}
label.f{display:flex;flex-direction:column;gap:5px;font-size:13px;color:var(--muted)}
label.f > span.v{color:var(--ink)}
.grid2{display:grid;grid-template-columns:1fr 1fr;gap:10px}
.grid3{display:grid;grid-template-columns:repeat(3,1fr);gap:8px}
button:focus-visible,input:focus-visible,select:focus-visible,summary:focus-visible,[tabindex]:focus-visible{outline:2px solid var(--accent);outline-offset:2px}
.switch{display:flex;align-items:center;justify-content:space-between;gap:12px;cursor:pointer}
.switch input{appearance:none;-webkit-appearance:none;width:44px;height:26px;border-radius:99px;background:var(--line);position:relative;cursor:pointer;flex:none;transition:background .2s}
.switch input::after{content:"";position:absolute;top:3px;left:3px;width:20px;height:20px;border-radius:50%;background:#fff;transition:left .2s;box-shadow:0 1px 3px #0003}
.switch input:checked{background:var(--accent)} .switch input:checked::after{left:21px}
.help{font-size:13px;color:var(--muted)}

/* tank */
.tank{position:relative;border-radius:var(--r);overflow:hidden;background:var(--tank);aspect-ratio:16/8;max-width:100%}
.tank .glow{position:absolute;inset:0;transition:background .8s}
.tank .fx{position:absolute;left:5%;right:5%;top:10px;display:grid;grid-template-columns:repeat(4,1fr);gap:4%}
.tank .fx div{height:7px;border-radius:4px;background:#26323b;transition:background .8s,box-shadow .8s}
.tank .fx div.off{opacity:.25}
.tank .rock{position:absolute;left:0;right:0;bottom:0;height:22%;background:radial-gradient(60% 90% at 30% 100%,#0009,transparent),radial-gradient(40% 70% at 78% 100%,#0008,transparent)}
.tank .read{position:absolute;left:14px;bottom:12px;right:14px;color:#fff;text-shadow:0 1px 3px #000b;display:flex;justify-content:space-between;align-items:flex-end;gap:10px}
.tank .read b{font-size:24px;letter-spacing:-.02em;font-weight:700;white-space:nowrap}
.tank .read .sub{font-size:13px;opacity:.9}

/* group level rows */
.glevel{display:grid;grid-template-columns:auto 1fr auto;gap:10px;align-items:center}
.swatch{width:12px;height:12px;border-radius:4px;flex:none}
.bar{height:8px;border-radius:99px;background:var(--sunk);overflow:hidden}
.bar i{display:block;height:100%;border-radius:99px;transition:width .6s}
.photos{display:grid;grid-template-columns:repeat(auto-fill,minmax(140px,1fr));gap:8px}
.photos button{text-align:left;border:1px solid var(--line);border-radius:12px;background:var(--surface);padding:10px 12px;font:inherit;cursor:pointer;color:var(--ink);display:flex;flex-direction:column;gap:2px}
.photos button.on{border-color:var(--g3);box-shadow:inset 0 0 0 1px var(--g3)}
.photos button small{color:var(--muted);font-size:12px}

/* schedule chart */
.chartbox{position:relative;touch-action:none;user-select:none;-webkit-user-select:none}
svg.chart{width:100%;height:auto;display:block;overflow:visible}
.gchips{display:flex;gap:6px;flex-wrap:wrap}
.gchips button{font:inherit;font-size:13px;border:1px solid var(--line);background:var(--surface);color:var(--ink);border-radius:99px;padding:5px 10px 5px 8px;display:flex;align-items:center;gap:6px;cursor:pointer}
.gchips button.sel{border-color:var(--ink);box-shadow:inset 0 0 0 1px var(--ink)}
.presets{display:grid;grid-template-columns:repeat(3,1fr);gap:8px}
.presets button{font:inherit;text-align:left;border:1px solid var(--line);border-radius:12px;background:var(--surface);color:var(--ink);padding:10px;cursor:pointer;display:flex;flex-direction:column;gap:3px}
.presets button b{font-size:14px} .presets button small{font-size:12px;color:var(--muted);line-height:1.3}
.presets button.sel{border-color:var(--accent);box-shadow:inset 0 0 0 1px var(--accent)}
.ptedit{display:grid;grid-template-columns:1fr 1fr auto;gap:8px;align-items:end;padding:10px;border-radius:10px;background:var(--sunk)}

/* lights */
.jack{display:flex;flex-direction:column;gap:10px;padding-block:12px;border-top:1px solid var(--line)}
.jack:first-of-type{border-top:0;padding-top:0}
.plug{width:34px;height:34px;border-radius:50%;border:2px solid var(--ink);display:grid;place-items:center;font-weight:700;font-size:13px;flex:none}
.pill{font-size:12px;padding:2px 8px;border-radius:99px;white-space:nowrap}
.pill.ok{background:color-mix(in srgb,var(--ok) 15%,transparent);color:var(--ok)}
.pill.warn{background:color-mix(in srgb,var(--warn) 15%,transparent);color:var(--warn)}
.pill.bad{background:color-mix(in srgb,var(--bad) 15%,transparent);color:var(--bad)}
.pill.idle{background:var(--sunk);color:var(--muted)}
.chrow{display:grid;grid-template-columns:minmax(0,1fr) minmax(0,1.2fr);gap:8px;align-items:center}
.expertbox{display:grid;grid-template-columns:repeat(3,1fr);gap:8px}
.stepper{display:flex;align-items:center;border:1px solid var(--line);border-radius:9px;overflow:hidden;width:max-content}
.stepper button{border:0;background:var(--surface);color:var(--ink);width:34px;height:34px;font:inherit;font-size:18px;cursor:pointer}
.stepper span{min-width:28px;text-align:center}

/* stats */
.tiles{display:grid;grid-template-columns:1fr 1fr;gap:10px}
.tile{background:var(--surface);border:1px solid var(--line);border-radius:var(--r);padding:12px;display:flex;flex-direction:column;gap:2px}
.tile b{font-size:20px;letter-spacing:-.02em;white-space:nowrap}
.tile b small{font-size:13px;font-weight:500;color:var(--muted);letter-spacing:0}
.tile span{font-size:12px;color:var(--muted)}
.check{display:grid;grid-template-columns:16px 1fr;gap:10px;padding-block:9px;border-top:1px solid var(--line)}
.check:first-child{border-top:0;padding-top:0}
.check i{width:12px;height:12px;border-radius:50%;margin-top:4px}
.check i.ok{background:var(--ok)} .check i.warn{background:var(--warn)} .check i.bad{background:var(--bad)} .check i.info{background:var(--line)}
.tablewrap{overflow-x:auto;margin-inline:-4px}
table{border-collapse:collapse;width:100%;font-size:13px}
th,td{text-align:left;padding:7px 6px;border-top:1px solid var(--line);white-space:nowrap}
th{color:var(--muted);font-weight:600;font-size:12px;border-top:0}
td.r,th.r{text-align:right}
.log li{padding-block:7px;border-top:1px solid var(--line);display:grid;grid-template-columns:92px 1fr;gap:10px;font-size:13px}
.log{list-style:none;margin:0;padding:0}
.log li:first-child{border-top:0}

/* wizard / sheet */
.overlay{position:fixed;inset:0;z-index:20;background:var(--ground);overflow:auto;padding-inline:16px;padding-block:calc(20px + env(safe-area-inset-top,0px)) 40px}
.sheetbg{position:fixed;inset:0;z-index:15;background:#0007;display:flex;align-items:flex-end;justify-content:center}
.sheet{background:var(--surface);width:100%;max-width:560px;border-radius:18px 18px 0 0;padding:18px 16px calc(20px + env(safe-area-inset-bottom,0px));max-height:85vh;overflow:auto;display:flex;flex-direction:column;gap:12px}
.steps{display:flex;gap:6px}
.steps i{height:4px;flex:1;border-radius:99px;background:var(--line)}
.steps i.on{background:var(--accent)}
.toast{position:fixed;left:50%;bottom:calc(120px + env(safe-area-inset-bottom,0px));transform:translateX(-50%);background:var(--ink);color:var(--surface);padding:9px 14px;border-radius:10px;font-size:14px;opacity:0;transition:opacity .25s;pointer-events:none;z-index:30;max-width:calc(100% - 32px)}
.toast.show{opacity:1}
@media (max-width:420px){ .presets{grid-template-columns:1fr} .presets button{flex-direction:row;align-items:baseline;gap:8px;flex-wrap:wrap} }
/* Preview (demo) mode: the page may be shown in a frame as tall as its content, where
   anything pinned to the bottom of the screen ends up out of sight. Keep navigation in the flow. */
body.embed{padding-block:0 32px}
body.embed nav.tabs{position:static;border:1px solid var(--line);border-radius:14px;overflow:hidden;padding-bottom:0}
body.embed nav.tabs .in{max-width:none}
body.embed .savebar{position:static;padding-inline:0}
body.embed .savebar .in{margin:0;box-shadow:none}
body.embed .overlay{position:absolute;min-height:100%}
body.embed .sheetbg{position:absolute;align-items:flex-start;padding-top:70px}
body.embed .sheet{border-radius:18px}
body.embed .toast{bottom:auto;top:calc(12px + env(safe-area-inset-top,0px))}
/* update screen */
.otabg{position:fixed;inset:0;z-index:40;background:color-mix(in srgb,var(--ground) 88%,transparent);backdrop-filter:blur(3px);display:flex;align-items:center;justify-content:center;padding:16px}
.otacard{background:var(--surface);border:1px solid var(--line);border-radius:18px;padding:24px 20px;width:100%;max-width:380px;display:flex;flex-direction:column;align-items:center;gap:14px;text-align:center;box-shadow:0 20px 60px #0004}
.spin{width:54px;height:54px;border-radius:50%;border:5px solid var(--sunk);border-top-color:var(--accent);animation:sp 0.9s linear infinite}
@keyframes sp{to{transform:rotate(360deg)}}
.otadone{width:54px;height:54px;border-radius:50%;display:grid;place-items:center;font-size:28px;color:#fff}
.otabar{width:100%;height:10px;border-radius:99px;background:var(--sunk);overflow:hidden}
.otabar i{display:block;height:100%;background:var(--accent);border-radius:99px;transition:width .4s}
.otabar.indet i{width:35%!important;animation:ind 1.2s ease-in-out infinite}
@keyframes ind{0%{transform:translateX(-100%)}100%{transform:translateX(290%)}}
@media (prefers-reduced-motion: reduce){ *{transition:none!important} .spin,.otabar.indet i{animation-duration:3s} }
</style>

<header class="top">
  <div class="wrap">
    <div class="brand"><i id="hDot"></i><h1 id="hTitle">Quanta</h1></div>
    <div class="row">
      <span class="chip num" id="hClock">--:--</span>
      <span class="chip auto" id="hMode">Schedule</span>
      <button class="iconbtn" id="helpBtn" aria-label="Help">?</button>
    </div>
  </div>
</header>

<main class="wrap" id="main">
  <div id="banners" class="stack"></div>
  <div id="page"></div>
</main>

<div class="savebar" id="savebar" hidden><div class="in">
  <span class="grow">Unsaved changes</span>
  <button class="btn small" id="discardBtn">Discard</button>
  <button class="btn small primary" id="saveBtn">Save</button>
</div></div>

<nav class="tabs" aria-label="Sections"><div class="in">
  <button data-tab="now"><svg viewBox="0 0 24 24"><circle cx="12" cy="12" r="4"/><path d="M12 2v2M12 20v2M4.9 4.9l1.4 1.4M17.7 17.7l1.4 1.4M2 12h2M20 12h2M4.9 19.1l1.4-1.4M17.7 6.3l1.4-1.4"/></svg>Now</button>
  <button data-tab="schedule"><svg viewBox="0 0 24 24"><path d="M3 19h18"/><path d="M3 17c3 0 4-9 9-9s6 9 9 9"/></svg>Schedule</button>
  <button data-tab="lights"><svg viewBox="0 0 24 24"><rect x="3" y="5" width="18" height="4" rx="2"/><path d="M7 9v3M12 9v5M17 9v3"/><path d="M12 14v2a3 3 0 0 0 3 3h2"/></svg>Lights</button>
  <button data-tab="stats"><svg viewBox="0 0 24 24"><path d="M4 20V10M10 20V4M16 20v-7M22 20H2"/></svg>Stats</button>
  <button data-tab="settings"><svg viewBox="0 0 24 24"><circle cx="12" cy="12" r="3"/><path d="M19.4 15a1.7 1.7 0 0 0 .3 1.8l.1.1a2 2 0 1 1-2.8 2.8l-.1-.1a1.7 1.7 0 0 0-1.8-.3 1.7 1.7 0 0 0-1 1.5V21a2 2 0 1 1-4 0v-.1a1.7 1.7 0 0 0-1.1-1.5 1.7 1.7 0 0 0-1.8.3l-.1.1a2 2 0 1 1-2.8-2.8l.1-.1a1.7 1.7 0 0 0 .3-1.8 1.7 1.7 0 0 0-1.5-1H3a2 2 0 1 1 0-4h.1a1.7 1.7 0 0 0 1.5-1.1 1.7 1.7 0 0 0-.3-1.8l-.1-.1a2 2 0 1 1 2.8-2.8l.1.1a1.7 1.7 0 0 0 1.8.3H9a1.7 1.7 0 0 0 1-1.5V3a2 2 0 1 1 4 0v.1a1.7 1.7 0 0 0 1 1.5 1.7 1.7 0 0 0 1.8-.3l.1-.1a2 2 0 1 1 2.8 2.8l-.1.1a1.7 1.7 0 0 0-.3 1.8V9a1.7 1.7 0 0 0 1.5 1H21a2 2 0 1 1 0 4h-.1a1.7 1.7 0 0 0-1.5 1z"/></svg>Settings</button>
</div></nav>

<div id="overlay"></div>
<div id="otaLayer"></div>
<div class="toast" id="toast" role="status" aria-live="polite"></div>

<script>
(() => {
"use strict";
// =====================================================================================
// Shared model (mirrors firmware/src/core.h)
// =====================================================================================
const JACKS = 4, CHANNELS = 8, MAX_GROUPS = 6, MAX_POINTS = 16, MAX_PHOTO = 6;
const FIXTURES = {
  none:       {label:"Nothing plugged in", two:false},
  altair_100: {label:"Altair 100 W", two:true, light:[110,120,255], light2:[235,238,255], def:[0,1], watts:[50,50]},
  altair_210: {label:"Altair 210 W", two:true, light:[110,120,255], light2:[235,238,255], def:[0,1], watts:[105,105]},
};
const PRESETS = [
  {id:0, name:"Softies & LPS", desc:"Gentler light for soft corals, zoas, mushrooms and LPS.", blue:700, white:450},
  {id:1, name:"Mixed reef", desc:"A bit of everything. The balanced default.", blue:850, white:650},
  {id:2, name:"SPS dominant", desc:"High output for Acropora and other stony corals.", blue:1000, white:850},
];
const NO_CLOCK_LEVEL = 250;
const clamp = (v,a,b) => Math.max(a, Math.min(b, v));
const clone = o => JSON.parse(JSON.stringify(o));

function curveAt(pts, sec){
  if(!pts.length) return 0; if(pts.length===1) return pts[0][1];
  const t = ((sec % 86400) + 86400) % 86400;
  let a = pts.length-1; pts.forEach((p,i)=>{ if(p[0]*60 <= t) a = i; });
  const b = (a+1) % pts.length; let ta = pts[a][0]*60, tb = pts[b][0]*60; if(tb <= ta) tb += 86400;
  const tt = t < ta ? t + 86400 : t; const span = tb - ta; const f = span ? Math.trunc((tt-ta)*1000/span) : 0;
  return Math.trunc(pts[a][1] + (pts[b][1]-pts[a][1]) * f / 1000);
}
function presetCurve(which, preset, on, off){
  const s = PRESETS[preset]; let len = ((off - on) % 1440 + 1440) % 1440; if(len < 240) len = 240;
  const at = m => ((on + m) % 1440 + 1440) % 1440;
  const ramp = len >= 600 ? 120 : Math.trunc(len/5);
  let p;
  if(which===0) p = [[at(0),0],[at(ramp),s.blue],[at(len-ramp),s.blue],[at(len),0]];
  else { const lead = Math.trunc(ramp/2); p = [[at(lead),0],[at(lead+ramp),s.white],[at(len-lead-ramp),s.white],[at(len-lead),0]]; }
  return p.sort((x,y)=>x[0]-y[0]);
}
function acclFactor(c, epoch){
  const a = c.accl; if(!a.on || !a.days) return 1000;
  if(epoch <= a.start) return a.startPct*10;
  const el = epoch - a.start, tot = a.days*86400; if(el >= tot) return 1000;
  return Math.trunc(a.startPct*10 + (1000 - a.startPct*10) * el / tot);
}
function channelInUse(c, ch){ const fx = c.jacks[ch>>1].fixture; if(fx==="none") return false; if((ch&1) && !FIXTURES[fx].two) return false; return true; }
function channelLevel(c, grp, ch){
  if(!channelInUse(c,ch)) return 0; const k = c.jacks[ch>>1].ch[ch&1]; const g = k.group;
  if(g < 0 || g >= c.groups.length) return 0;
  let v = Math.trunc(grp[g] * k.trim / 100); if(!v) return 0; if(v < c.floor*10) v = c.floor*10; return Math.min(1000, v);
}
function setFixture(c, j, fx){
  const J = c.jacks[j]; J.fixture = fx; const F = FIXTURES[fx];
  for(let s=0;s<2;s++){ const g = F.def ? F.def[s] : -1; J.ch[s].group = (g>=0 && g < c.groups.length) ? g : -1; if(!J.watts[s] && F.watts) J.watts[s] = F.watts[s]; }
}
const OUT_FS = 2.048*4.9;
const levelToMv = (lvl, cal) => { if(!lvl) return 0; const code = clamp(Math.round(lvl/1000*10*cal/100/OUT_FS*4095),0,4095); return Math.round(code*OUT_FS*1000/4095); };

// =====================================================================================
// Demo mode: a simulated controller so the GUI works without the hardware
// =====================================================================================
const Sim = (() => {
  const nowE = () => Math.floor(Date.now()/1000);
  const secOfDay = () => { const d = new Date(); return d.getHours()*3600 + d.getMinutes()*60 + d.getSeconds(); };
  const cfg = {
    groups:[{name:"Blue", color:0, points:presetCurve(0,1,600,1260)}, {name:"White", color:1, points:presetCurve(1,1,600,1260)}],
    jacks:[
      {fixture:"altair_210", count:2, name:"Main display", watts:[105,105], ch:[{group:0,trim:100,cal:100},{group:1,trim:100,cal:100}]},
      {fixture:"altair_210", count:1, name:"Right side", watts:[105,105], ch:[{group:0,trim:100,cal:100},{group:1,trim:90,cal:100}]},
      {fixture:"altair_100", count:1, name:"Frag rack", watts:[50,50], ch:[{group:0,trim:100,cal:100},{group:1,trim:100,cal:100}]},
      {fixture:"none", count:1, name:"Output 4", watts:[0,0], ch:[{group:-1,trim:100,cal:100},{group:-1,trim:100,cal:100}]},
    ],
    photos:[{name:"Coral glow", minutes:10, lvl:[1000,80]}, {name:"True color", minutes:10, lvl:[500,1000]}],
    intensity:100, floor:10, rampSec:60, fadeSec:3,
    accl:{on:true, startPct:50, days:30, start:nowE() - 9*86400},
    tz:"CST6CDT,M3.2.0,M11.1.0", expert:false, setupDone:true, costMils:150,
  };
  let ovr = {mode:"auto", until:0, photo:-1, lvl:[0,0,0,0,0,0]};
  const cur = new Array(CHANNELS).fill(0);
  const boot = nowE() - 2*86400 - 4000;
  const events = [
    {t:nowE()-1800, code:4, a:0}, {t:nowE()-2400, code:4, a:2}, {t:nowE()-86400*1.2, code:5},
    {t:boot+40, code:3, a:2}, {t:boot+2, code:1, a:1}, {t:boot, code:2, b:14}, {t:nowE()-86400*9, code:5},
  ];
  function groupLevels(){
    const e = nowE();
    const active = ovr.mode!=="auto" && (ovr.until===0 ? ovr.mode==="manual" : e < ovr.until);
    if(ovr.mode!=="auto" && !active){ ovr = {mode:"auto",until:0,photo:-1,lvl:[0,0,0,0,0,0]}; events.unshift({t:e,code:4,a:0}); }
    if(active) return {mode:ovr.mode, g:cfg.groups.map((_,i)=>ovr.lvl[i]||0)};
    const f = acclFactor(cfg, e);
    return {mode:"auto", g:cfg.groups.map(G => Math.trunc(Math.trunc(curveAt(G.points, secOfDay()) * cfg.intensity/100) * f/1000))};
  }
  let identify = -1, identUntil = 0;
  const simOta = {url:"https://example.web.app/quanta/", auto:true, running:"2.0.0", result:"none", message:"", latest:"", notes:"", checkedAt:0, busy:false};
  function state(){
    const gl = groupLevels();
    const ch = [];
    for(let c=0;c<CHANNELS;c++){
      let t = channelLevel(cfg, gl.g, c);
      if(identify===(c>>1) && Date.now() < identUntil && channelInUse(cfg,c)) t = (Math.floor(Date.now()/500)%2) ? 700 : 0;
      cur[c] = t; const J = cfg.jacks[c>>1], k = J.ch[c&1];
      const mv = levelToMv(t, k.cal), use = channelInUse(cfg,c);
      const ua = use ? 150*J.count : 0; const amp = mv - ua;
      let status = "idle"; if(use){ status = (mv<1000||mv>9000) ? "unknown" : (ua>=40 ? "ok" : "no_load"); }
      ch.push({lvl:t, mv, amp, status, ua});
    }
    const wNow = ch.reduce((s,o,c)=> s + (channelInUse(cfg,c) ? o.lvl/1000*cfg.jacks[c>>1].watts[c&1]*cfg.jacks[c>>1].count : 0), 0);
    return {fw:"2.0.0 (demo)", time:{epoch:nowE(), valid:true, source:"internet", sec:secOfDay(), tz:cfg.tz, lastSync:nowE()-3100, rtcOk:true},
      mode:gl.mode, until:ovr.until, photo:ovr.photo, ramping:false, identify: Date.now()<identUntil ? identify : -1,
      accl:acclFactor(cfg,nowE()), groups:gl.g, ch,
      sys:{uptime:nowE()-boot, heap:171234, boots:23, reset:"power_on", outageStart:boot-14*60, outageEnd:boot, tempC:31.5,
           dacOk:true, adcOk:true, wifi:"connected", ssid:"ReefRoom", rssi:-61, ip:"192.168.1.48", ap:false, apName:"Quanta-3F2A",
           todayWh: wNow*0 + 180 + (secOfDay()/86400)*260, yesterdayWh:612},
      ota:Object.assign({}, simOta)};
  }
  return {
    async get(path){
      if(path==="/api/state") return state();
      if(path==="/api/config") return clone(cfg);
      if(path==="/api/events") return clone(events);
      throw new Error("404");
    },
    async post(path, body){
      if(path==="/api/config"){ Object.assign(cfg, clone(body)); events.unshift({t:nowE(),code:5}); return clone(cfg); }
      if(path==="/api/control"){
        if(body.identify!==undefined){ identify = body.identify; identUntil = Date.now()+6000; }
        if(body.mode==="auto") ovr = {mode:"auto",until:0,photo:-1,lvl:[0,0,0,0,0,0]};
        if(body.mode==="manual"){ const base = groupLevels().g; ovr = {mode:"manual", until: body.minutes ? nowE()+body.minutes*60 : 0, photo:-1, lvl: cfg.groups.map((_,i)=> body.lvl && body.lvl[i]!==undefined ? body.lvl[i] : base[i])}; }
        if(body.mode==="photo"){ const p = cfg.photos[body.index]; ovr = {mode:"photo", until:nowE()+p.minutes*60, photo:body.index, lvl:p.lvl.slice()}; }
        if(body.mode) events.unshift({t:nowE(),code:4,a:{auto:0,manual:1,photo:2}[body.mode]});
        return state();
      }
      if(path==="/api/ota"){
        if(body.url!==undefined) simOta.url = body.url; if(body.auto!==undefined) simOta.auto = body.auto;
        if(body.action){ simOta.checkedAt = nowE(); simOta.latest = "2.0.1"; simOta.notes = "Smoother sunrise ramps.";
          if(body.action==="check"){ simOta.result="available"; simOta.message="Version 2.0.1 is available."; }
          else { simOta.busy = true; simOta.phase = "downloading"; simOta.percent = 0;
            const t = setInterval(()=>{ simOta.percent = Math.min(100, simOta.percent + 9);
              if(simOta.percent>=100){ clearInterval(t); simOta.busy=false; simOta.result="up_to_date"; simOta.message="Demo: the real controller would restart here."; } }, 400); } }
        return state();
      }
      if(path==="/api/wifi") return {ok:true};
      if(path==="/api/factory-reset") return {ok:true};
      throw new Error("404");
    }
  };
})();

// =====================================================================================
// API
// =====================================================================================
let demo = false;
async function get(path){
  if(demo) return Sim.get(path);
  const r = await fetch(path, {cache:"no-store"}); if(!r.ok) throw new Error(r.status); return r.json();
}
async function post(path, body){
  if(demo) return Sim.post(path, body);
  const r = await fetch(path, {method:"POST", headers:{"Content-Type":"application/json"}, body:JSON.stringify(body)});
  const j = await r.json().catch(()=>({})); if(!r.ok) throw new Error(j.error || ("Error " + r.status)); return j;
}

// =====================================================================================
// App state
// =====================================================================================
let S = null;          // live state from the controller
let C = null;          // saved config
let D = null;          // draft config being edited
let tab = "now";
let manualMinutes = 60;
let schedSel = {g:0, p:-1};
let lastPreset = null;
let photoEdit = false;
let confirmReset = false;
let events = [];
let wiz = null;        // setup wizard draft
const $ = id => document.getElementById(id);
const esc = s => String(s ?? "").replace(/[&<>"']/g, c => ({"&":"&amp;","<":"&lt;",">":"&gt;",'"':"&quot;","'":"&#39;"}[c]));
const hhmm = m => { m = ((Math.round(m)%1440)+1440)%1440; return String(Math.floor(m/60)).padStart(2,"0") + ":" + String(m%60).padStart(2,"0"); };
const pct = v => Math.round(v/10) + "%";
const gcol = i => `var(--g${(i%8+8)%8})`;
const dirty = () => D && C && JSON.stringify(D) !== JSON.stringify(C);
const expert = () => !!(D && D.expert);
function fmtDur(s){ s = Math.max(0, Math.round(s)); const d = Math.floor(s/86400), h = Math.floor(s%86400/3600), m = Math.floor(s%3600/60);
  return d ? `${d} d ${h} h` : h ? `${h} h ${m} min` : `${m} min`; }
function fmtWhen(epoch){ if(!epoch) return "unknown time"; const d = new Date(epoch*1000);
  return d.toLocaleString([], {month:"short", day:"numeric", hour:"2-digit", minute:"2-digit"}); }
let tT; function toast(m){ const t=$("toast"); t.textContent=m; t.classList.add("show"); clearTimeout(tT); tT=setTimeout(()=>t.classList.remove("show"), 2600); }

// =====================================================================================
// Derived facts used on several pages
// =====================================================================================
function groupStats(c){
  return c.groups.map(G => {
    let on = 0, sum = 0, peak = 0;
    for(let m=0;m<1440;m+=5){ const v = curveAt(G.points, m*60); if(v>0) on += 5; sum += v*5; peak = Math.max(peak, v); }
    return {onMin:on, fullHours: sum/1000/60, peak};
  });
}
function energyPerDay(c){
  const f = S ? (S.accl||1000)/1000 : 1;
  let wh = 0;
  for(let ch=0; ch<CHANNELS; ch++){
    if(!channelInUse(c,ch)) continue; const J = c.jacks[ch>>1], k = J.ch[ch&1]; if(k.group<0 || k.group>=c.groups.length) continue;
    let s = 0; for(let m=0;m<1440;m+=5) s += channelLevel(c, c.groups.map((G,i)=> i===k.group ? Math.trunc(curveAt(G.points,m*60)*c.intensity/100*f) : 0), ch) * 5;
    wh += s/1000/60 * J.watts[ch&1] * J.count;
  }
  return wh;
}
function nextChange(c, sec){
  let best = null; const nowM = sec/60;
  c.groups.forEach((G,gi) => {
    const P = G.points; if(P.length < 2) return;
    for(let i=0;i<P.length;i++){
      const a = P[i], b = P[(i+1)%P.length]; if(a[1]===b[1]) continue;
      let start = a[0], end = b[0]; if(end <= start) end += 1440;
      let s = start, e = end; let n = nowM; if(n < s) n += 1440;
      let dt;
      if(n >= s && n < e) dt = 0; else { dt = (s - nowM + 1440) % 1440; }
      if(best===null || dt < best.dt) best = {dt, g:gi, to:b[1], end:e%1440, start:s%1440, now:dt===0};
    }
  });
  if(!best) return null;
  const name = esc(c.groups[best.g].name);
  const verb = best.to === 0 ? "fades out" : "ramps to " + pct(best.to);
  return best.now ? `${name} ${verb} by ${hhmm(best.end)}` : `${hhmm(best.start)}: ${name} ${verb} (until ${hhmm(best.end)})`;
}
function outStatusText(st, fx){
  switch(st){
    case "ok": return ["ok","Connected"];
    case "no_load": return ["warn","No light detected"];
    case "short": return ["bad","Cable short"];
    case "unknown": return ["idle","Checked at 10–90%"];
    case "unmonitored": return ["idle","Not monitored"];
    default: return ["idle", fx==="none" ? "Not in use" : "Off"];
  }
}
function healthChecks(){
  const out = []; if(!S || !C) return out;
  const t = S.time, sys = S.sys;
  if(!t.valid) out.push({s:"bad", t:"The clock isn't set", d:"The schedule can't run until the controller knows the time. Lights are held at 25%.", fix:"clock"});
  else if(t.source==="estimated") out.push({s:"warn", t:"Time was estimated after a power cut", d:"The backup battery clock had lost time. Replace the CR2032 coin cell, then set the clock.", fix:"clock"});
  else out.push({s:"ok", t:"Clock is right", d: t.source==="internet" ? `Set from the internet ${fmtDur(t.epoch - t.lastSync)} ago. The battery clock keeps time through power cuts.` : t.source==="phone" ? "Set from a phone. Connect to Wi-Fi with internet for automatic corrections." : "Running from the battery-backed clock."});
  if(!sys.dacOk) out.push({s:"bad", t:"Output chip not responding", d:"The lights can't be dimmed. Unplug the controller for 10 seconds; if this stays, contact Quanta."});
  C.jacks.forEach((J,j) => {
    if(J.fixture==="none") return;
    const sides = FIXTURES[J.fixture].two ? [0,1] : [0];
    sides.forEach(s => {
      const o = S.ch[j*2+s]; const lbl = `OUT ${j+1}` + (sides.length>1 ? (s? " white":" blue") : "");
      if(o.status==="short") out.push({s:"bad", t:`${lbl}: cable short`, d: s===1 ? "The white channel is shorted to ground. A mono (two-contact) cable will do this: use a stereo 3.5 mm cable." : "Unplug the cable and check it for damage. The controller limits the current, so nothing is harmed."});
      else if(o.status==="no_load") out.push({s:"warn", t:`${lbl}: no light detected`, d:"Check the 3.5 mm plug is pushed all the way in at both ends and the light is plugged into the wall."});
      else if(o.status==="ok") out.push({s:"ok", t:`${lbl}: ${esc(J.name)} connected`, d:`${FIXTURES[J.fixture].label}${J.count>1 ? ` × ${J.count}` : ""}.`});
    });
  });
  if(sys.outMode==="pwm") out.push({s:"info", t:"Bench prototype", d:"Running without the controller board, driving PWM-to-0-10 V modules. Cable checks and the no-blink restart need the real board."});
  if(sys.outageEnd) out.push({s:"info", t:"Last power cut", d:`Power was off for about ${fmtDur(sys.outageEnd - sys.outageStart)}, ending ${fmtWhen(sys.outageEnd)}. The lights resumed on schedule.`});
  if(sys.tempC !== undefined && sys.tempC > 55) out.push({s:"warn", t:`Controller is hot (${sys.tempC.toFixed(0)} °C)`, d:"Move it away from the light's power supplies or out of the closed cabinet."});
  if(sys.wifi==="connected" && sys.rssi && sys.rssi < -75) out.push({s:"warn", t:"Weak Wi-Fi signal", d:"The lights are unaffected, but the page may be slow. Move the controller or router closer."});
  const gs = groupStats(C); const longest = Math.max(...gs.map(g=>g.onMin));
  if(gs.every(g => g.peak===0)) out.push({s:"warn", t:"The schedule never turns the lights on", d:"Open Schedule and pick a tank type to start from."});
  else if(longest > 14*60) out.push({s:"warn", t:`Lights are on ${fmtDur(longest*60)} a day`, d:"That's long for a reef. Most keepers run about 8–10 hours of main light plus short ramps."});
  if(C.accl.on && S.accl < 1000) out.push({s:"info", t:"Acclimation in progress", d:`Lights are at ${pct(S.accl)} of the schedule. Full strength in ${Math.max(1, Math.ceil(C.accl.days - (t.epoch - C.accl.start)/86400))} days.`});
  return out;
}

// =====================================================================================
// Header, banners, save bar
// =====================================================================================
function renderChrome(){
  if(!S) return;
  $("hClock").textContent = S.time.valid ? hhmm(S.time.sec/60) + (S.time.source==="estimated" ? "?" : "") : "no clock";
  const m = $("hMode"); m.className = "chip " + S.mode;
  m.textContent = S.mode==="auto" ? "Schedule" : S.mode==="manual" ? "Manual" : "Picture";
  const hc = healthChecks(); const worst = hc.some(h=>h.s==="bad") ? "bad" : hc.some(h=>h.s==="warn") ? "warn" : "";
  $("hDot").className = worst; $("hDot").title = worst ? "Something needs attention. See Stats." : "All good";
  let b = "";
  if(demo) b += `<div class="banner demo"><span class="grow">Demo mode. This page isn't connected to a controller, so it simulates one. On your controller's Wi-Fi, open <b>quanta.local</b>.</span></div>`;
  if(!S.time.valid || S.time.source==="estimated") b += `<div class="banner warn"><span class="grow">${!S.time.valid ? "The controller doesn't know the time yet." : "The time was estimated after a power cut."}</span><button class="btn small" data-act="setclock">Use this phone's time</button></div>`;
  hc.filter(h=>h.s==="bad" && h.fix!=="clock").forEach(h => b += `<div class="banner bad"><span class="grow"><b>${h.t}.</b> ${h.d}</span></div>`);
  if($("banners").dataset.h !== b){ $("banners").innerHTML = b; $("banners").dataset.h = b; }
  $("savebar").hidden = !dirty();
}

// =====================================================================================
// NOW
// =====================================================================================
function tankGlow(){
  let r=0,g=0,b=0,w=0;
  C.jacks.forEach((J,j) => {
    if(J.fixture==="none") return; const F = FIXTURES[J.fixture];
    [0,1].forEach(s => { if(s && !F.two) return; const lv = S.ch[j*2+s].lvl/1000 * J.count; const col = s ? F.light2 : F.light;
      r += col[0]*lv; g += col[1]*lv; b += col[2]*lv; w += lv; });
  });
  if(w <= 0) return "transparent";
  const tot = C.jacks.reduce((s,J)=> s + (J.fixture==="none" ? 0 : J.count * (FIXTURES[J.fixture].two ? 2 : 1)), 0) || 1;
  const k = Math.min(1, w / tot * 1.2);
  const c = `${Math.round(r/w)},${Math.round(g/w)},${Math.round(b/w)}`;
  return `radial-gradient(120% 95% at 50% 0%, rgba(${c},${0.2+0.75*k}) 0%, rgba(${c},${0.3*k}) 55%, transparent 100%)`;
}
function renderNow(){
  const c = C, gl = S.groups;
  const photoOn = S.mode==="photo";
  let h = `
  <div class="tank" aria-label="Tank preview">
    <div class="glow" id="nGlow"></div>
    <div class="fx" id="nFx">${c.jacks.map(()=>`<div></div>`).join("")}</div>
    <div class="rock"></div>
    <div class="read"><div><b id="nBig"></b><div class="sub" id="nSub"></div></div><div class="sub num" id="nNext" style="text-align:right;max-width:55%"></div></div>
  </div>

  <section class="card">
    <div class="seg" role="group" aria-label="Mode">
      <button data-act="mode-auto" class="${S.mode==="auto"?"sel":""}">Schedule</button>
      <button data-act="mode-manual" class="${S.mode==="manual"?"sel":""}">Manual</button>
      <button data-act="mode-photo" class="${photoOn?"sel":""}">Picture</button>
    </div>
    <p class="help" id="nModeNote"></p>
    <div class="stack" id="nGroups">
      ${c.groups.map((G,i)=>`
      <label class="glevel" for="gs${i}">
        <span class="swatch" style="background:${gcol(G.color)}"></span>
        <span class="stack" style="gap:0"><span class="row between small"><span>${esc(G.name)}</span><span class="num" id="gv${i}">${pct(gl[i]||0)}</span></span>
        <input type="range" id="gs${i}" min="0" max="100" value="${Math.round((gl[i]||0)/10)}" aria-label="${esc(G.name)} brightness"></span>
        <span></span>
      </label>`).join("")}
    </div>
    <div class="row wrapr small"><span class="muted">Manual lasts</span>
      <div class="seg" style="flex:1;min-width:230px">${[[60,"1 h"],[180,"3 h"],[0,"Until I resume"]].map(([m,l])=>`<button data-act="mdur" data-m="${m}" class="${manualMinutes===m?"sel":""}">${l}</button>`).join("")}</div>
    </div>
  </section>

  <section class="card">
    <div class="row between"><h2>Picture mode</h2><button class="btn small" data-act="photo-edit">${photoEdit ? "Done" : "Edit"}</button></div>
    ${photoEdit ? renderPhotoEditor() : `
    <div class="photos">${c.photos.map((p,i)=>`<button data-act="photo" data-i="${i}" class="${photoOn && S.photo===i ? "on":""}"><b>${esc(p.name)}</b><small>${c.groups.map((G,g)=>`${esc(G.name)} ${pct(p.lvl[g]||0)}`).join(" · ")} · ${p.minutes} min</small></button>`).join("")}</div>
    <p class="help">Sets the lights for photos, then goes back to the schedule by itself.</p>`}
  </section>
  ${c.accl.on ? `<section class="card"><div class="row between"><h2>Acclimation</h2><span class="num small" id="nAccl"></span></div>
     <div class="bar"><i style="width:${S.accl/10}%;background:var(--accent)" id="nAcclBar"></i></div>
     <p class="help">New lights or new corals: brightness climbs from ${c.accl.startPct}% to the full schedule over ${c.accl.days} days. Change it under Schedule.</p></section>` : ""}`;
  $("page").innerHTML = h;
  c.groups.forEach((G,i) => {
    const el = $("gs"+i);
    el.addEventListener("input", () => { $("gv"+i).textContent = el.value + "%"; sendManualSoon(); });
    el.addEventListener("pointerdown", () => sliding = true);
    el.addEventListener("change", () => setTimeout(()=>sliding=false, 600));
  });
  liveNow();
}
function renderPhotoEditor(){
  return `<div class="stack">${D.photos.map((p,i)=>`
    <div class="stack" style="padding:10px;border-radius:10px;background:var(--sunk)">
      <div class="grid2"><label class="f">Name<input type="text" maxlength="19" value="${esc(p.name)}" data-edit="photo-name" data-i="${i}" id="pn${i}"></label>
      <label class="f">Lasts (minutes)<input type="number" min="1" max="240" value="${p.minutes}" data-edit="photo-min" data-i="${i}" id="pm${i}"></label></div>
      ${D.groups.map((G,g)=>`<label class="glevel" for="pl${i}_${g}"><span class="swatch" style="background:${gcol(G.color)}"></span>
        <input type="range" min="0" max="100" value="${Math.round((p.lvl[g]||0)/10)}" data-edit="photo-lvl" data-i="${i}" data-g="${g}" id="pl${i}_${g}" aria-label="${esc(G.name)}">
        <span class="num small" id="plv${i}_${g}">${pct(p.lvl[g]||0)}</span></label>`).join("")}
      <div class="row between"><button class="btn small" data-act="photo-try" data-i="${i}">Try it</button><button class="btn small danger" data-act="photo-del" data-i="${i}">Delete</button></div>
    </div>`).join("")}
    <button class="btn" data-act="photo-add" ${D.photos.length>=MAX_PHOTO?"disabled":""}>Add a setting from the current light</button>
    <p class="help">Changes are saved with the Save button at the bottom.</p></div>`;
}
let sliding = false, manT = null;
function sendManualSoon(){
  clearTimeout(manT);
  manT = setTimeout(async () => {
    const lvl = C.groups.map((_,i) => Number($("gs"+i).value)*10);
    try { S = await post("/api/control", {mode:"manual", lvl, minutes:manualMinutes}); liveNow(); renderChrome(); } catch(e){ toast(e.message); }
  }, 150);
}
function liveNow(){
  if(tab!=="now" || !$("nFx")) return;
  $("nGlow").style.background = tankGlow();
  [...$("nFx").children].forEach((el,j) => {
    const J = C.jacks[j]; const F = FIXTURES[J.fixture];
    if(J.fixture==="none"){ el.className = "off"; el.style.background=""; el.style.boxShadow=""; return; }
    el.className = ""; const lv = Math.max(S.ch[j*2].lvl, F.two ? S.ch[j*2+1].lvl : 0)/1000;
    const col = (F.two && S.ch[j*2+1].lvl > S.ch[j*2].lvl) ? F.light2 : F.light;
    el.style.background = lv ? `rgba(${col.join(",")},${0.35+0.65*lv})` : "#26323b";
    el.style.boxShadow = lv ? `0 6px 24px 6px rgba(${col.join(",")},${0.5*lv})` : "none";
  });
  const gl = S.groups; const any = gl.some(v=>v>0);
  $("nBig").textContent = any ? C.groups.map((G,i)=>pct(gl[i]||0)).join(" / ") : "Off";
  $("nSub").textContent = any ? C.groups.map(G=>G.name).join(" / ") : (S.mode==="auto" ? "Night" : "All groups at 0%");
  $("nNext").textContent = S.mode==="auto" && S.time.valid ? (nextChange(C, S.time.sec) || "") : "";
  const until = S.until ? Math.max(0, S.until - S.time.epoch) : 0;
  $("nModeNote").innerHTML = S.mode==="auto" ? (S.time.valid ? "Following the schedule. Move a slider to take over for a while." : "No clock yet, so lights are held at 25%.")
    : S.mode==="manual" ? (S.until ? `Manual for ${fmtDur(until)} more, then back to the schedule.` : "Manual until you tap Schedule.")
    : `Picture mode: <b>${esc((C.photos[S.photo]||{}).name||"")}</b>, ${fmtDur(until)} left.`;
  if(!sliding) C.groups.forEach((G,i)=>{ const el=$("gs"+i); if(el && document.activeElement!==el){ el.value = Math.round((gl[i]||0)/10); $("gv"+i).textContent = pct(gl[i]||0); } });
  if($("nAccl")){ const left = Math.max(0, C.accl.days - Math.floor((S.time.epoch - C.accl.start)/86400));
    $("nAccl").textContent = S.accl>=1000 ? "Complete" : `${pct(S.accl)} · ${left} days left`; $("nAcclBar").style.width = S.accl/10 + "%"; }
}

// =====================================================================================
// SCHEDULE
// =====================================================================================
const CH = {W:340, H:190, L:30, R:10, T:10, B:24};
function chartX(m){ return CH.L + m/1440*(CH.W-CH.L-CH.R); }
function chartY(l){ return CH.T + (1 - l/1000)*(CH.H-CH.T-CH.B); }
function drawChart(svg, c, opts){
  const pw = CH.W-CH.L-CH.R;
  let s = `<rect x="${CH.L}" y="${CH.T}" width="${pw}" height="${CH.H-CH.T-CH.B}" fill="var(--sunk)" rx="6"/>`;
  [0,250,500,750,1000].forEach(v => {
    s += `<line x1="${CH.L}" x2="${CH.W-CH.R}" y1="${chartY(v)}" y2="${chartY(v)}" stroke="var(--line)" stroke-width="${v%500?0.6:1}"/>`;
    if(v%500===0) s += `<text x="${CH.L-6}" y="${chartY(v)+3.5}" font-size="10" text-anchor="end" fill="var(--muted)" font-family="var(--mono)">${v/10}%</text>`;
  });
  [0,6,12,18,24].forEach(hh => s += `<text x="${chartX(hh*60)}" y="${CH.H-6}" font-size="10" text-anchor="${hh===0?"start":hh===24?"end":"middle"}" fill="var(--muted)" font-family="var(--mono)">${String(hh).padStart(2,"0")}:00</text>`);
  const scale = (c.intensity/100) * ((S && S.accl) ? S.accl/1000 : 1);
  c.groups.forEach((G,gi) => {
    if(!G.points.length) return;
    const pts = []; for(let m=0;m<=1440;m+=5) pts.push([m, curveAt(G.points, (m%1440)*60)]);
    const sel = opts.editable && gi===opts.sel.g;
    const line = pts.map(([m,v])=>`${chartX(m).toFixed(1)},${chartY(v).toFixed(1)}`).join(" ");
    s += `<polygon points="${chartX(0)},${chartY(0)} ${line} ${chartX(1440)},${chartY(0)}" fill="${gcol(G.color)}" fill-opacity="${sel?0.16:0.08}"/>`;
    if(scale < 0.995) s += `<polyline fill="none" stroke="${gcol(G.color)}" stroke-width="1.2" stroke-dasharray="3 3" points="${pts.map(([m,v])=>`${chartX(m).toFixed(1)},${chartY(v*scale).toFixed(1)}`).join(" ")}"/>`;
    s += `<polyline fill="none" stroke="${gcol(G.color)}" stroke-width="${sel?2.6:1.8}" stroke-linejoin="round" points="${line}"/>`;
  });
  if(opts.editable){
    const G = c.groups[opts.sel.g];
    if(G) G.points.forEach((p,i) => {
      const on = i===opts.sel.p;
      s += `<circle cx="${chartX(p[0])}" cy="${chartY(p[1])}" r="16" fill="transparent" data-pt="${i}" style="cursor:grab"/>`;
      s += `<circle cx="${chartX(p[0])}" cy="${chartY(p[1])}" r="${on?7:5.5}" fill="${on?gcol(G.color):"var(--surface)"}" stroke="${gcol(G.color)}" stroke-width="2.2" pointer-events="none"/>`;
    });
  }
  if(S && S.time.valid){ const x = chartX(S.time.sec/60);
    s += `<line x1="${x}" x2="${x}" y1="${CH.T}" y2="${chartY(0)}" stroke="var(--ink)" stroke-width="1" stroke-dasharray="2 3" opacity=".6"/>`;
    s += `<text x="${Math.min(x+4, CH.W-CH.R-24)}" y="${CH.T+11}" font-size="10" fill="var(--muted)">now</text>`; }
  svg.innerHTML = s;
}
function curOnOff(c){
  const G = c.groups[0]; if(!G || G.points.length < 2) return {on:600, off:1260};
  const nz = G.points.map((p,i)=>({p,i})); const first = nz.find(o=>o.p[1]===0 && G.points[(o.i+1)%G.points.length][1]>0);
  const last = nz.find(o=>o.p[1]===0 && G.points[(o.i-1+G.points.length)%G.points.length][1]>0);
  return {on: first ? first.p[0] : 600, off: last ? last.p[0] : 1260};
}
function renderSchedule(){
  const c = D, ex = expert(); const oo = curOnOff(c);
  const gs = groupStats(c);
  const today = new Date(); const isoDate = e => { const d = new Date(e*1000); return d.getFullYear()+"-"+String(d.getMonth()+1).padStart(2,"0")+"-"+String(d.getDate()).padStart(2,"0"); };
  $("page").innerHTML = `
  <section class="card">
    <h2>Tank type</h2>
    <div class="presets">${PRESETS.map(p=>`<button data-act="preset" data-i="${p.id}" class="${lastPreset===p.id?"sel":""}"><b>${p.name}</b><small>${p.desc}</small></button>`).join("")}</div>
    <div class="grid2">
      <label class="f">Lights on<input type="time" id="sOn" value="${hhmm(oo.on)}"></label>
      <label class="f">Lights off<input type="time" id="sOff" value="${hhmm(oo.off)}"></label>
    </div>
    <p class="help">Picking a tank type draws a new ${c.groups.length>2 ? "Blue and White " : ""}schedule between these times. Blues come on first and go off last, like dawn and dusk.</p>
  </section>

  <section class="card">
    <div class="row between"><h2>Daily schedule</h2><span class="help">${gs.map((g,i)=>`${esc(c.groups[i].name)} ${fmtDur(g.onMin*60)}`).join(" · ")}</span></div>
    ${ex ? `<div class="gchips">${c.groups.map((G,i)=>`<button data-act="selg" data-i="${i}" class="${schedSel.g===i?"sel":""}"><span class="swatch" style="background:${gcol(G.color)}"></span>${esc(G.name)}</button>`).join("")}</div>` : ""}
    <div class="chartbox"><svg class="chart" id="chart" viewBox="0 0 ${CH.W} ${CH.H}" role="img" aria-label="Brightness of each group over 24 hours"></svg></div>
    ${ex ? `<div id="ptEdit"></div><p class="help">Drag a point to change it. Tap an empty spot on the chart to add a point to the selected group.</p>` : `<div class="row wrapr" style="gap:14px">${c.groups.map(G=>`<span class="row small" style="gap:6px"><span class="swatch" style="background:${gcol(G.color)}"></span>${esc(G.name)}</span>`).join("")}</div>
    <p class="help">Switch to Expert in Settings to drag points and shape each curve yourself.</p>`}
    <label class="f" for="sInt"><span class="row between"><span>Overall intensity</span><span class="num v" id="sIntV">${c.intensity}%</span></span>
      <input type="range" id="sInt" min="10" max="100" value="${c.intensity}"></label>
    <p class="help">Scales the whole schedule. The dashed line shows what the lights will actually do${c.accl.on ? ", including acclimation" : ""}.</p>
  </section>

  <section class="card">
    <label class="switch"><span class="stack" style="gap:2px"><h3>Acclimation</h3><span class="help">For new lights or new corals. Starts dimmer and climbs to the full schedule.</span></span><input type="checkbox" id="aOn" ${c.accl.on?"checked":""}></label>
    <div class="grid3" ${c.accl.on?"":"hidden"}>
      <label class="f">Start at %<input type="number" id="aPct" min="10" max="100" value="${c.accl.startPct}"></label>
      <label class="f">Over days<input type="number" id="aDays" min="1" max="120" value="${c.accl.days}"></label>
      <label class="f">From<input type="date" id="aStart" value="${isoDate(c.accl.start || today/1000)}"></label>
    </div>
  </section>`;
  drawSched();
  $("sInt").addEventListener("input", e => { D.intensity = Number(e.target.value); $("sIntV").textContent = D.intensity+"%"; drawSched(); renderChrome(); });
  const applyTimes = () => { if(lastPreset!==null) applyPreset(lastPreset, true); };
  $("sOn").addEventListener("change", applyTimes); $("sOff").addEventListener("change", applyTimes);
  $("aOn").addEventListener("change", e => { D.accl.on = e.target.checked; if(D.accl.on && !D.accl.start) D.accl.start = Math.floor(Date.now()/1000); renderSchedule(); renderChrome(); });
  const acc = () => { D.accl.startPct = clamp(Number($("aPct").value)||50,10,100); D.accl.days = clamp(Number($("aDays").value)||30,1,120);
    const d = $("aStart").value; if(d){ const [y,m,dd] = d.split("-").map(Number); D.accl.start = Math.floor(new Date(y,m-1,dd).getTime()/1000); } drawSched(); renderChrome(); };
  ["aPct","aDays","aStart"].forEach(id => $(id).addEventListener("change", acc));
  if(ex) bindChartDrag();
}
function drawSched(){
  if(!$("chart")) return;
  drawChart($("chart"), D, {editable: expert(), sel: schedSel});
  if(expert()) renderPtEdit();
}
function renderPtEdit(){
  const box = $("ptEdit"); if(!box) return; const G = D.groups[schedSel.g]; const p = G && G.points[schedSel.p];
  if(!p){ box.innerHTML = `<div class="row between small"><span class="muted">${G ? G.points.length : 0} points on ${esc(G?G.name:"")}. Tap one to edit it.</span></div>`; return; }
  if(box.contains(document.activeElement)) return;
  box.innerHTML = `<div class="ptedit"><label class="f">Time<input type="time" id="peT" value="${hhmm(p[0])}"></label>
    <label class="f">Brightness %<input type="number" id="peL" min="0" max="100" value="${Math.round(p[1]/10)}"></label>
    <button class="btn danger small" data-act="pt-del" ${G.points.length<=1?"disabled":""}>Remove</button></div>`;
  $("peT").addEventListener("change", e => { const [h,m] = e.target.value.split(":").map(Number); if(!isNaN(h)){ p[0] = h*60+m; resortSel(); drawSched(); renderChrome(); } });
  $("peL").addEventListener("change", e => { p[1] = clamp(Math.round(Number(e.target.value)*10)||0,0,1000); drawSched(); renderChrome(); });
}
function resortSel(){ const G = D.groups[schedSel.g]; const p = G.points[schedSel.p]; G.points.sort((a,b)=>a[0]-b[0]); schedSel.p = G.points.indexOf(p); }
function bindChartDrag(){
  const svg = $("chart"); let drag = null, moved = false;
  const toVB = ev => { const pt = svg.createSVGPoint(); pt.x = ev.clientX; pt.y = ev.clientY; const r = pt.matrixTransform(svg.getScreenCTM().inverse());
    return {m: clamp(Math.round((r.x - CH.L)/(CH.W-CH.L-CH.R)*1440/5)*5, 0, 1435), l: clamp(Math.round((1-(r.y-CH.T)/(CH.H-CH.T-CH.B))*100)*10, 0, 1000)}; };
  svg.addEventListener("pointerdown", ev => {
    const G = D.groups[schedSel.g]; if(!G) return;
    const t = ev.target.closest("[data-pt]");
    if(t){ schedSel.p = Number(t.dataset.pt); drag = G.points[schedSel.p]; moved = false; svg.setPointerCapture(ev.pointerId); drawSched(); ev.preventDefault(); return; }
    if(G.points.length >= MAX_POINTS){ toast(`A curve can have up to ${MAX_POINTS} points`); return; }
    const v = toVB(ev); const np = [v.m, v.l]; G.points.push(np); G.points.sort((a,b)=>a[0]-b[0]); schedSel.p = G.points.indexOf(np);
    drag = np; moved = true; svg.setPointerCapture(ev.pointerId); drawSched(); renderChrome();
  });
  svg.addEventListener("pointermove", ev => { if(!drag) return; const v = toVB(ev); drag[0] = v.m; drag[1] = v.l; moved = true; resortSel(); drawSched(); });
  const end = () => { if(drag && moved) renderChrome(); drag = null; };
  svg.addEventListener("pointerup", end); svg.addEventListener("pointercancel", end);
}
function applyPreset(i, quiet){
  const on = toMin($("sOn").value, 600), off = toMin($("sOff").value, 1260);
  if(D.groups[0]) D.groups[0].points = presetCurve(0, i, on, off);
  if(D.groups[1]) D.groups[1].points = presetCurve(1, i, on, off);
  lastPreset = i; schedSel.p = -1;
  renderSchedule(); renderChrome();
  if(!quiet) toast(`${PRESETS[i].name} schedule drawn. Tap Save to use it, or Discard to undo.`);
}
function toMin(v, d){ const [h,m] = String(v).split(":").map(Number); return isNaN(h) ? d : h*60 + (m||0); }

// =====================================================================================
// LIGHTS
// =====================================================================================
function chLabel(fx, s){
  if(fx==="altair_100" || fx==="altair_210") return s ? "White channel (ring)" : "Blue channel (tip)";
  return "Follows";
}
function groupSelect(id, val){
  return `<select id="${id}">${D.groups.map((G,i)=>`<option value="${i}" ${val===i?"selected":""}>${esc(G.name)}</option>`).join("")}<option value="-1" ${val===-1?"selected":""}>Off (not used)</option></select>`;
}
function renderLights(){
  const ex = expert();
  $("page").innerHTML = `
  <section class="card">
    <div class="row between"><h2>Outputs</h2><span class="help">Label on the box: OUT 1–4</span></div>
    ${D.jacks.map((J,j)=>{
      const F = FIXTURES[J.fixture]; const sides = J.fixture==="none" ? [] : F.two ? [0,1] : [0];
      return `<div class="jack">
        <div class="row between">
          <div class="row"><span class="plug">${j+1}</span><div class="stack" style="gap:0"><b>${esc(J.name)}</b><span class="help">${F.label}${J.count>1?` × ${J.count}`:""}</span></div></div>
          <span id="js${j}"></span>
        </div>
        <div class="grid2">
          <label class="f">What's plugged in<select id="jf${j}">${Object.entries(FIXTURES).map(([k,v])=>`<option value="${k}" ${k===J.fixture?"selected":""}>${v.label}</option>`).join("")}</select></label>
          <label class="f">Name<input type="text" id="jn${j}" maxlength="19" value="${esc(J.name)}"></label>
        </div>
        ${J.fixture==="none" ? "" : `
        <div class="row between wrapr">
          <div class="row small"><span class="muted">Lights on this cable</span>
            <div class="stepper" role="group" aria-label="Number of piggybacked lights"><button data-act="cnt" data-j="${j}" data-d="-1" aria-label="Fewer">−</button><span class="num">${J.count}</span><button data-act="cnt" data-j="${j}" data-d="1" aria-label="More">+</button></div></div>
          <button class="btn small" data-act="ident" data-j="${j}">Flash this light</button>
        </div>
        ${sides.map(s=>{ const k = J.ch[s]; return `
          <div class="chrow"><span class="small">${chLabel(J.fixture, s)}</span>${groupSelect(`jg${j}_${s}`, k.group)}</div>
          ${ex ? `<div class="expertbox">
            <label class="f">Max %<input type="number" min="0" max="100" id="jt${j}_${s}" value="${k.trim}"></label>
            <label class="f">Calibration %<input type="number" min="80" max="120" id="jc${j}_${s}" value="${k.cal}"></label>
            <label class="f">Watts each<input type="number" min="0" max="1000" id="jw${j}_${s}" value="${J.watts[s]}"></label></div>` : ""}`; }).join("")}
        ${J.count>1 ? `<p class="help">Piggybacked lights share this output and always dim together.</p>` : ""}`}
      </div>`; }).join("")}
  </section>

  <section class="card">
    <div class="row between"><h2>Groups</h2>${ex ? `<button class="btn small" data-act="g-add" ${D.groups.length>=MAX_GROUPS?"disabled":""}>Add group</button>` : ""}</div>
    <p class="help">Each group has its own curve on the schedule. Every output above follows one group.</p>
    ${D.groups.map((G,i)=>{ const used = D.jacks.reduce((n,J)=> n + J.ch.filter((k,s)=> k.group===i && channelInUse(D, D.jacks.indexOf(J)*2+s)).length, 0);
      return `<div class="row" style="gap:8px">
        <button class="swatch" data-act="g-color" data-i="${i}" style="background:${gcol(G.color)};width:26px;height:26px;border:0;cursor:pointer" aria-label="Change color"></button>
        ${ex ? `<input type="text" id="gn${i}" maxlength="19" value="${esc(G.name)}" aria-label="Group name">` : `<b style="flex:1">${esc(G.name)}</b>`}
        <span class="help" style="white-space:nowrap">${used} output${used===1?"":"s"}</span>
        ${ex && D.groups.length>1 ? `<button class="btn small danger" data-act="g-del" data-i="${i}" aria-label="Delete group">✕</button>` : ""}
      </div>`; }).join("")}
  </section>`;
  D.jacks.forEach((J,j) => {
    $("jf"+j).addEventListener("change", e => { setFixture(D, j, e.target.value); if(J.fixture!=="none" && /^Output \d$/.test(J.name)) J.name = FIXTURES[J.fixture].label.split(" · ").pop(); renderLights(); renderChrome(); });
    $("jn"+j).addEventListener("input", e => { J.name = e.target.value.slice(0,19); renderChrome(); });
    [0,1].forEach(s => {
      const gsel = $(`jg${j}_${s}`); if(gsel) gsel.addEventListener("change", e => { J.ch[s].group = Number(e.target.value); renderChrome(); });
      const t = $(`jt${j}_${s}`); if(t) t.addEventListener("change", e => { J.ch[s].trim = clamp(Number(e.target.value)||0,0,100); e.target.value = J.ch[s].trim; renderChrome(); });
      const c = $(`jc${j}_${s}`); if(c) c.addEventListener("change", e => { J.ch[s].cal = clamp(Number(e.target.value)||100,80,120); e.target.value = J.ch[s].cal; renderChrome(); });
      const w = $(`jw${j}_${s}`); if(w) w.addEventListener("change", e => { J.watts[s] = clamp(Number(e.target.value)||0,0,1000); renderChrome(); });
    });
  });
  D.groups.forEach((G,i) => { const n = $("gn"+i); if(n) n.addEventListener("input", e => { G.name = e.target.value.slice(0,19) || "Group"; renderChrome(); }); });
  liveLights();
}
function liveLights(){
  if(tab!=="lights") return;
  C.jacks.forEach((J,j) => {
    const el = $("js"+j); if(!el) return; const sides = FIXTURES[J.fixture].two ? [0,1] : [0];
    const st = sides.map(s => S.ch[j*2+s].status); const worst = st.includes("short") ? "short" : st.includes("no_load") ? "no_load" : st.includes("ok") ? "ok" : st[0];
    const [cls, txt] = outStatusText(worst, J.fixture);
    const lv = sides.map(s => pct(S.ch[j*2+s].lvl)).join(" / ");
    el.innerHTML = `<span class="pill ${cls}">${J.fixture==="none" ? txt : `${lv} · ${txt}`}</span>`;
  });
}

// =====================================================================================
// STATS (KPIs)
// =====================================================================================
function renderStats(){
  const sys = S.sys, gs = groupStats(C);
  const wNow = S.ch.reduce((s,o,c)=> s + (channelInUse(C,c) ? o.lvl/1000*C.jacks[c>>1].watts[c&1]*C.jacks[c>>1].count : 0), 0);
  const whDay = energyPerDay(C); const cost = whDay/1000*30*C.costMils/1000;
  const hc = healthChecks(); const issues = hc.filter(h=>h.s==="bad"||h.s==="warn").length;
  const longest = Math.max(0, ...gs.map(g=>g.onMin));
  $("page").innerHTML = `
  <div class="tiles">
    <div class="tile"><span>Health</span><b style="color:${issues? "var(--warn)" : "var(--ok)"}">${issues ? issues + " to check" : "All good"}</b><span>${hc.length} checks</span></div>
    <div class="tile"><span>Light today</span><b class="num">${fmtDur(longest*60)}</b><span>${C.groups.map((G,i)=>`${esc(G.name)} peak ${pct(Math.round(gs[i].peak*C.intensity/100))}`).join(" · ")}</span></div>
    <div class="tile"><span>Power now</span><b class="num" id="kW">${Math.round(wNow)} <small>W</small></b><span>estimate from light wattage</span></div>
    <div class="tile"><span>Energy</span><b class="num">${(whDay/1000).toFixed(2)} <small>kWh/day</small></b><span>about $${cost.toFixed(2)} a month</span></div>
  </div>

  <section class="card"><h2>Health check</h2><div>
    ${hc.map(h=>`<div class="check"><i class="${h.s}"></i><div><b>${h.t}</b><p class="help">${h.d}</p>${h.fix==="clock" ? `<button class="btn small" style="margin-top:6px" data-act="setclock">Use this phone's time</button>` : ""}</div></div>`).join("")}
  </div></section>

  <section class="card"><h2>Outputs right now</h2>
    <div class="tablewrap"><table><thead><tr><th>Output</th><th>Group</th><th class="r">Level</th><th class="r">Volts</th><th class="r">Sense</th><th>Status</th></tr></thead>
    <tbody id="kOut"></tbody></table></div>
    <p class="help">Sense is the current the lights' dimming inputs push back, in µA. Each connected light adds roughly 100–200 µA.</p>
  </section>

  <section class="card"><h2>Schedule</h2>
    <div class="tablewrap"><table><thead><tr><th>Group</th><th class="r">Lights on</th><th class="r">Peak</th><th class="r">Full-power hours</th></tr></thead><tbody>
    ${C.groups.map((G,i)=>`<tr><td><span class="row" style="gap:6px"><span class="swatch" style="background:${gcol(G.color)}"></span>${esc(G.name)}</span></td><td class="r num">${fmtDur(gs[i].onMin*60)}</td><td class="r num">${pct(gs[i].peak)}</td><td class="r num">${gs[i].fullHours.toFixed(1)} h</td></tr>`).join("")}
    </tbody></table></div>
    <p class="help">Full-power hours is the day's total light, counted as hours at 100%. Before intensity${C.accl.on?" and acclimation":""} scaling.</p>
  </section>

  <section class="card"><h2>Controller</h2>
    <div class="tablewrap"><table><tbody id="kSys"></tbody></table></div>
  </section>

  <section class="card"><div class="row between"><h2>Recent events</h2></div><ul class="log" id="kLog"></ul></section>`;
  liveStats();
  get("/api/events").then(ev => { events = ev; renderLog(); }).catch(()=>{});
}
function liveStats(){
  if(tab!=="stats" || !$("kOut")) return;
  let rows = "";
  for(let c=0;c<CHANNELS;c++){
    const J = C.jacks[c>>1]; if(!channelInUse(C,c)) continue; const o = S.ch[c]; const k = J.ch[c&1];
    const [cls, txt] = outStatusText(o.status, J.fixture);
    rows += `<tr><td>OUT ${(c>>1)+1} ${c&1?"white":"blue"}</td><td>${k.group>=0 ? esc(C.groups[k.group].name) : "—"}</td><td class="r num">${pct(o.lvl)}</td><td class="r num">${(o.mv/1000).toFixed(2)}</td><td class="r num">${o.ua}</td><td><span class="pill ${cls}">${txt}</span></td></tr>`;
  }
  $("kOut").innerHTML = rows || `<tr><td colspan="6" class="muted">No outputs set up yet. Go to Lights.</td></tr>`;
  const s = S.sys, t = S.time;
  const srcTxt = {internet:"Internet", phone:"Phone", rtc:"Battery clock", estimated:"Estimated", none:"Not set"}[t.source];
  $("kSys").innerHTML = [
    ["Time", `${t.valid ? hhmm(t.sec/60) : "—"} (${srcTxt})`],
    ["Energy used", `${(s.todayWh/1000).toFixed(2)} kWh today · ${(s.yesterdayWh/1000).toFixed(2)} yesterday`],
    ["Running for", fmtDur(s.uptime)],
    ["Last start", {power_on:"Power on", restart:"Restart", crash:"Recovered from a crash", watchdog:"Recovered by the watchdog", brownout:"Low power supply voltage", other:"Other"}[s.reset] || s.reset],
    ["Starts total", s.boots],
    ["Outputs", s.outMode==="pwm" ? "Bench prototype (PWM modules)" : "Controller board"],
    ["Wi-Fi", s.wifi==="connected" ? `${esc(s.ssid)} · ${s.rssi} dBm` : s.ap ? `Hotspot ${esc(s.apName)}` : "Not connected"],
    ["Address", s.ip],
    ["Box temperature", s.tempC!==undefined ? s.tempC.toFixed(1)+" °C" : "—"],
    ["Firmware", esc(S.fw)],
    ["Free memory", Math.round(s.heap/1024) + " KB"],
  ].map(([a,b])=>`<tr><th>${a}</th><td class="r">${b}</td></tr>`).join("");
}
const EVTXT = {
  1:e=>`Started (${({1:"power on",3:"restart",4:"after a crash",5:"watchdog",6:"watchdog",7:"watchdog",9:"low supply voltage"})[e.a]||"restart"})`,
  2:e=>`Power was off for about ${e.b} min`, 3:e=>`Clock set from ${["","battery clock","the internet","a phone"][e.a]||"?"}`,
  4:e=>`Switched to ${["schedule","manual","picture mode"][e.a]||"?"}`, 5:()=>"Settings saved", 6:()=>"A damaged settings copy was skipped; the backup copy was used",
  7:e=>`Cable short on OUT ${(e.a>>1)+1} ${e.a&1?"white":"blue"}`, 8:e=>`OUT ${(e.a>>1)+1} back to normal`, 9:()=>"Firmware updated",
  10:e=> e.a===2 ? "Wi-Fi settings cleared with the button" : "Joined Wi-Fi", 11:()=>"Battery clock had lost time; time estimated", 12:()=>"Hardware check found a chip not responding",
};
function renderLog(){
  if(!$("kLog")) return;
  $("kLog").innerHTML = events.slice(0,25).map(e=>`<li><span class="muted num">${e.t ? new Date(e.t*1000).toLocaleString([], {month:"short",day:"numeric",hour:"2-digit",minute:"2-digit"}) : "—"}</span><span>${(EVTXT[e.code]||(()=>"Event "+e.code))(e)}</span></li>`).join("") || `<li><span></span><span class="muted">Nothing yet</span></li>`;
}

// =====================================================================================
// SETTINGS
// =====================================================================================
const TZS = [["EST5EDT,M3.2.0,M11.1.0","US Eastern"],["CST6CDT,M3.2.0,M11.1.0","US Central"],["MST7MDT,M3.2.0,M11.1.0","US Mountain"],["MST7","Arizona"],
  ["PST8PDT,M3.2.0,M11.1.0","US Pacific"],["AKST9AKDT,M3.2.0,M11.1.0","Alaska"],["HST10","Hawaii"],["GMT0BST,M3.5.0/1,M10.5.0","UK"],
  ["CET-1CEST,M3.5.0,M10.5.0/3","Central Europe"],["AEST-10AEDT,M10.1.0,M4.1.0/3","Sydney"],["UTC0","UTC"]];
function otaHtml(){
  const o = S.ota || {url:"", auto:true, result:"none", message:"", latest:"", running:S.fw, checkedAt:0, busy:false};
  const when = o.checkedAt ? ` · checked ${fmtWhen(o.checkedAt)}` : "";
  const cls = {up_to_date:"ok", available:"warn", installed:"ok", failed:"bad", blocked:"bad"}[o.result] || "idle";
  return `
    <label class="f">Update server (the quanta folder)<input type="text" id="otaUrl" placeholder="https://your-project.web.app/quanta/" value="${esc(o.url)}" autocomplete="off"></label>
    <label class="switch"><span class="stack" style="gap:2px"><span>Install updates automatically</span><span class="help">Checks every 6 hours while on home Wi-Fi.</span></span><input type="checkbox" id="otaAuto" ${o.auto?"checked":""}></label>
    ${o.busy || otaWatch ? `<div class="row small"><span class="spin" style="width:20px;height:20px;border-width:3px"></span><span>${o.phase==="downloading" ? `Downloading… ${o.percent||0}%` : o.phase==="restarting" ? "Restarting…" : "Checking…"}</span></div>` : `
    <div class="row wrapr">
      <button class="btn" data-act="ota-check">Check for update</button>
      ${o.result==="available" ? `<button class="btn primary" data-act="ota-install">Install version ${esc(o.latest)}</button>` : ""}
    </div>`}
    ${o.message ? `<p class="small"><span class="pill ${cls}">${esc(o.message)}</span><span class="help">${when}</span></p>` : ""}
    ${o.notes && o.result==="available" ? `<p class="help">What's new: ${esc(o.notes)}</p>` : ""}`;
}
function renderSettings(){
  const s = S.sys;
  $("page").innerHTML = `
  <section class="card">
    <h2>Interface</h2>
    <div class="seg"><button data-act="lvl-simple" class="${expert()?"":"sel"}">Simple</button><button data-act="lvl-expert" class="${expert()?"sel":""}">Expert</button></div>
    <p class="help">Simple shows tank-type presets and the basics. Expert adds curve editing, custom groups, per-output limits, calibration and wattage.</p>
    <button class="btn" data-act="wizard">Run the setup assistant again</button>
  </section>

  <section class="card">
    <h2>Wi-Fi</h2>
    <p class="small">${s.wifi==="connected" ? `Connected to <b>${esc(s.ssid)}</b>. Open <b>quanta.local</b> or <b class="num">${s.ip}</b>.` : s.ap ? `The controller's own hotspot <b>${esc(s.apName)}</b> is on.` : "Not connected."}</p>
    <div class="grid2"><label class="f">Network name<input type="text" id="wS" autocomplete="off" value="${esc(s.ssid||"")}"></label><label class="f">Password<input type="password" id="wP"></label></div>
    <div class="row wrapr"><button class="btn" data-act="wifi">Join network</button>${demo ? "" : `<a class="btn" href="/wifi">Choose from nearby networks</a>`}</div>
    <p class="help">The controller restarts to join. The lights stay exactly as they are during the restart.</p>
  </section>

  <section class="card">
    <h2>Clock</h2>
    <p class="small">It's <b class="num">${S.time.valid ? hhmm(S.time.sec/60) : "unknown"}</b> on the controller. ${({internet:"Set automatically from the internet.", phone:"Set from a phone.", rtc:"Kept by the battery clock.", estimated:"Estimated after a power cut.", none:""})[S.time.source]}</p>
    <label class="f">Time zone<select id="tz">${TZS.map(([v,l])=>`<option value="${v}" ${v===D.tz?"selected":""}>${l}</option>`).join("")}${TZS.some(t=>t[0]===D.tz)?"":`<option selected value="${esc(D.tz)}">${esc(D.tz)}</option>`}</select></label>
    <button class="btn" data-act="setclock">Use this phone's time</button>
  </section>

  <section class="card">
    <h2>Light behavior</h2>
    <label class="f" for="bRamp"><span class="row between"><span>Soft start after a power cut</span><span class="num v" id="bRampV">${D.rampSec} s</span></span><input type="range" id="bRamp" min="0" max="600" step="10" value="${D.rampSec}"></label>
    <label class="f" for="bFade"><span class="row between"><span>Fade when changing modes</span><span class="num v" id="bFadeV">${D.fadeSec} s</span></span><input type="range" id="bFade" min="0" max="30" value="${D.fadeSec}"></label>
    ${expert() ? `<label class="f" for="bFloor"><span class="row between"><span>Lowest dim level</span><span class="num v" id="bFloorV">${D.floor}%</span></span><input type="range" id="bFloor" min="0" max="40" value="${D.floor}">
      <span class="help">Some drivers flicker when dimmed very low. Anything between 0 and this is raised to it; 0% is still off.</span></label>` : ""}
  </section>

  <section class="card">
    <h2>Energy</h2>
    <label class="f">Electricity price per kWh ($)<input type="number" id="eCost" min="0" max="5" step="0.01" value="${(D.costMils/1000).toFixed(2)}"></label>
  </section>

  <section class="card">
    <h2>Backup</h2>
    <div class="row wrapr">${demo ? `<button class="btn" disabled>Download settings</button>` : `<a class="btn" href="/api/backup" download="quanta-settings.json">Download settings</a>`}
      <label class="btn">Restore from file<input type="file" id="restore" accept=".json,application/json" hidden></label></div>
    <p class="help">Keeps your schedule, groups and picture settings. Restore shows the changes first; nothing is used until you tap Save.</p>
  </section>

  <section class="card">
    <h2>Firmware</h2>
    <p class="small">Version <b class="num">${esc(S.fw)}</b></p>
    ${otaHtml()}
    ${demo ? "" : `
    <details><summary class="small">Install a .bin file from this device</summary>
    <form id="fwForm" class="row wrapr" style="margin-top:8px"><input type="file" id="fwFile" accept=".bin" aria-label="Firmware file"><button class="btn" type="submit">Install</button></form></details>`}
    <p class="help">Lights keep running during an update. If a new version doesn't start cleanly, the controller goes back to the previous one by itself.</p>
  </section>

  <section class="card">
    <h2>Reset</h2>
    ${confirmReset ? `<p class="small">This erases your schedule, groups and picture settings. Wi-Fi is kept. Continue?</p>
      <div class="row"><button class="btn" data-act="reset-no">Keep my settings</button><button class="btn danger" data-act="reset-yes">Erase settings</button></div>`
     : `<button class="btn danger" data-act="reset">Erase all settings…</button>`}
  </section>`;
  $("tz").addEventListener("change", e => { D.tz = e.target.value; renderChrome(); });
  $("otaUrl").addEventListener("change", async e => { try { S = await post("/api/ota", {url:e.target.value.trim()}); toast("Update server saved"); } catch(err){ toast(err.message); } });
  $("otaAuto").addEventListener("change", async e => { try { S = await post("/api/ota", {auto:e.target.checked}); toast(e.target.checked ? "Automatic updates on" : "Automatic updates off"); } catch(err){ toast(err.message); } });
  const rng = (id, key, unit) => $(id).addEventListener("input", e => { D[key] = Number(e.target.value); $(id+"V").textContent = D[key] + unit; renderChrome(); });
  rng("bRamp","rampSec"," s"); rng("bFade","fadeSec"," s"); if($("bFloor")) rng("bFloor","floor","%");
  $("eCost").addEventListener("change", e => { D.costMils = clamp(Math.round(Number(e.target.value)*1000)||0,0,5000); renderChrome(); });
  $("restore").addEventListener("change", async e => {
    const f = e.target.files[0]; if(!f) return;
    try { const j = JSON.parse(await f.text()); if(!j.groups || !j.jacks) throw new Error();
      D = Object.assign(clone(D), j); toast("Backup loaded. Review it, then tap Save."); render(); }
    catch { toast("That file isn't a Quanta settings backup."); }
    e.target.value = "";
  });
  const fw = $("fwForm");
  if(fw) fw.addEventListener("submit", async e => {
    e.preventDefault(); const f = $("fwFile").files[0]; if(!f){ toast("Choose a firmware .bin file first"); return; }
    const fd = new FormData(); fd.append("file", f, f.name); toast("Installing… keep this page open");
    try { const r = await fetch("/update", {method:"POST", body:fd}); toast(await r.text()); } catch { toast("Upload failed. Check you're still connected and try again."); }
  });
}

// =====================================================================================
// Setup assistant (first run)
// =====================================================================================
function openWizard(){
  const base = clone(D); if(demo) window.scrollTo(0,0);
  wiz = {step:0, c:base, preset: 1, on:600, off:1260, accl: !base.setupDone};
  renderWizard();
}
function renderWizard(){
  const o = $("overlay"); if(!wiz){ o.innerHTML = ""; return; }
  const w = wiz, c = w.c; const N = 4;
  let body = "";
  if(w.step===0) body = `
    <h1 style="font-size:24px">Let's set up your lights</h1>
    <p class="muted">Four quick questions. You can change everything later.</p>
    <div class="stack small">
      <p>1. Plug each Altair into an output on the controller with a 3.5 mm audio cable.</p>
      <p>2. To run two Altairs from one output, plug the second into the first one's spare socket. They'll dim together.</p>
      <p>3. Use stereo (three-contact) cables. A mono cable only carries the blue channel.</p>
    </div>`;
  if(w.step===1) body = `
    <h1 style="font-size:22px">Which Altair is on each output?</h1>
    <p class="muted small">Not sure which is which? Tap Flash and watch the tank.</p>
    ${c.jacks.map((J,j)=>`<div class="stack" style="gap:6px;padding-block:8px;border-top:1px solid var(--line)">
      <div class="row between"><div class="row"><span class="plug">${j+1}</span><b>OUT ${j+1}</b></div>
      ${J.fixture!=="none" ? `<button class="btn small" data-act="wz-ident" data-j="${j}">Flash</button>` : ""}</div>
      <select id="wf${j}" aria-label="Light on OUT ${j+1}">${Object.entries(FIXTURES).map(([k,v])=>`<option value="${k}" ${k===J.fixture?"selected":""}>${v.label}</option>`).join("")}</select>
      ${J.fixture==="none" ? "" : `<div class="row between small"><span class="muted">Lights on this cable (piggybacked)</span><div class="stepper"><button data-act="wz-cnt" data-j="${j}" data-d="-1" aria-label="Fewer">−</button><span class="num">${J.count}</span><button data-act="wz-cnt" data-j="${j}" data-d="1" aria-label="More">+</button></div></div>`}
    </div>`).join("")}`;
  if(w.step===2) body = `
    <h1 style="font-size:22px">What's in your tank?</h1>
    <div class="presets" style="grid-template-columns:1fr">${PRESETS.map(p=>`<button data-act="wz-preset" data-i="${p.id}" class="${w.preset===p.id?"sel":""}"><b>${p.name}</b><small>${p.desc}</small></button>`).join("")}</div>`;
  if(w.step===3) body = `
    <h1 style="font-size:22px">When should the lights be on?</h1>
    <div class="grid2"><label class="f">Lights on<input type="time" id="wOn" value="${hhmm(w.on)}"></label><label class="f">Lights off<input type="time" id="wOff" value="${hhmm(w.off)}"></label></div>
    <p class="help">Blues come on first and go off last. Most reefs do well with 10 to 11 hours including the ramps.</p>
    <label class="switch" style="margin-top:8px"><span class="stack" style="gap:2px"><b>Start gently</b><span class="help">Recommended when these lights are new to the tank. Starts at 50% and reaches full strength over 30 days.</span></span><input type="checkbox" id="wAccl" ${w.accl?"checked":""}></label>`;
  if(w.step===4){
    const used = c.jacks.filter(J=>J.fixture!=="none");
    body = `<h1 style="font-size:22px">All set</h1>
    <div class="stack small">
      <p><b>Lights:</b> ${used.length ? used.map((J,i)=>`${FIXTURES[J.fixture].label}${J.count>1?` × ${J.count}`:""}`).join(", ") : "none yet"}</p>
      <p><b>Tank:</b> ${PRESETS[w.preset].name}, ${hhmm(w.on)} to ${hhmm(w.off)}</p>
      <p><b>Acclimation:</b> ${w.accl ? "on, 50% rising to 100% over 30 days" : "off"}</p>
    </div>
    <svg class="chart" id="wChart" viewBox="0 0 ${CH.W} ${CH.H}" role="img" aria-label="Your new schedule"></svg>`;
  }
  o.innerHTML = `<div class="overlay"><div class="wrap">
    <div class="steps">${Array.from({length:N+1},(_,i)=>`<i class="${i<=w.step?"on":""}"></i>`).join("")}</div>
    ${body}
    <div class="row between" style="margin-top:8px">
      ${w.step===0 ? (C.setupDone ? `<button class="btn" data-act="wz-close">Cancel</button>` : "<span></span>") : `<button class="btn" data-act="wz-back">Back</button>`}
      ${w.step<N ? `<button class="btn primary" data-act="wz-next">${w.step===0?"Start":"Next"}</button>` : `<button class="btn primary" data-act="wz-finish">Start my schedule</button>`}
    </div></div></div>`;
  if(w.step===1) c.jacks.forEach((J,j)=> $("wf"+j).addEventListener("change", e => { setFixture(c, j, e.target.value); renderWizard(); }));
  if(w.step===3){ $("wOn").addEventListener("change", e => w.on = toMin(e.target.value, 600)); $("wOff").addEventListener("change", e => w.off = toMin(e.target.value, 1260)); $("wAccl").addEventListener("change", e => w.accl = e.target.checked); }
  if(w.step===4){ wizBuild(); drawChart($("wChart"), wiz.c, {editable:false, sel:{g:0,p:-1}}); }
}
function wizBuild(){
  const w = wiz, c = w.c;
  if(c.groups.length < 2){ c.groups = [{name:"Blue",color:0,points:[]},{name:"White",color:1,points:[]}]; }
  c.groups[0].points = presetCurve(0, w.preset, w.on, w.off);
  c.groups[1].points = presetCurve(1, w.preset, w.on, w.off);
  c.accl = {on:w.accl, startPct:50, days:30, start: w.accl ? Math.floor(Date.now()/1000) : c.accl.start};
  c.setupDone = true;
}

// =====================================================================================
// Actions
// =====================================================================================
// ---------- update progress screen ----------
let otaWatch = null;          // null | "check" | {from, started, down}
let otaTimer = null;
function otaStart(){
  otaWatch = {from:S.fw, target:(S.ota&&S.ota.latest)||"", started:Date.now(), down:false};
  otaShow("checking", 0); otaPollSoon(800);
}
function otaShow(phase, pct){
  const w = otaWatch || {};
  const title = phase==="downloading" ? `Downloading ${w.target ? "version "+esc(w.target) : "update"}`
    : phase==="installing" ? "Installing…" : phase==="restarting" ? "Restarting the controller…" : "Getting the update…";
  const bar = phase==="downloading" ? `<div class="otabar"><i style="width:${pct}%"></i></div><p class="num" style="margin:0">${pct}%</p>`
    : `<div class="otabar indet"><i></i></div>`;
  $("otaLayer").innerHTML = `<div class="otabg" role="dialog" aria-live="polite" aria-label="Updating firmware"><div class="otacard">
    <div class="spin"></div><h3>${title}</h3>${bar}
    <p class="help">Don't unplug the controller. The lights keep running, and the page comes back by itself after the restart (about a minute).</p>
  </div></div>`;
}
function otaMsg(kind, title, text){
  const icon = kind==="ok" ? `<div class="otadone" style="background:var(--ok)">✓</div>` : `<div class="otadone" style="background:var(--bad)">!</div>`;
  $("otaLayer").innerHTML = `<div class="otabg" role="dialog" aria-live="polite"><div class="otacard">${icon}<h3>${esc(title)}</h3>
    <p class="help">${esc(text||"")}</p><button class="btn primary" data-act="ota-close">OK</button></div></div>`;
  otaWatch = null; clearTimeout(otaTimer);
}
function otaPollSoon(ms){ clearTimeout(otaTimer); otaTimer = setTimeout(otaPoll, ms); }
async function otaPoll(){
  if(!otaWatch) return;
  let st = null;
  try { st = await get("/api/state"); } catch(e){ st = null; }
  if(otaWatch === "check"){                     // just a check: update the Settings card when done
    if(st){ S = st; if(!st.ota || !st.ota.busy){ otaWatch = null; render(); return; } render(); }
    otaPollSoon(1000); return;
  }
  const w = otaWatch;
  if(!st){                                     // controller restarting (or briefly busy)
    w.down = true; otaShow("restarting", 100);
  } else {
    S = st; const o = st.ota || {};
    if(st.fw !== w.from){ otaMsg("ok", `Updated to version ${st.fw}`, "The controller is running the new firmware."); render(); return; }
    if(o.busy){ if(o.latest) w.target = o.latest; otaShow(o.phase || "checking", o.percent || 0); }
    else if(w.down || Date.now() - w.started > 5000){
      if(o.result==="failed" || o.result==="blocked" || o.result==="up_to_date"){ otaMsg(o.result==="up_to_date" ? "ok" : "bad", o.result==="up_to_date" ? "Already up to date" : "Update didn't install", o.message); render(); return; }
      if(w.down){ otaMsg("bad", "Update didn't take", "The controller restarted on the previous version. Check the update files and try again."); render(); return; }
    }
  }
  if(Date.now() - w.started > 5*60000){ otaMsg("bad", "This is taking too long", "Check the controller is still powered and on Wi-Fi, then reload this page."); return; }
  otaPollSoon(w.down ? 2500 : 700);
}

async function control(body, msg){
  try { S = await post("/api/control", body); if(msg) toast(msg); render(); } catch(e){ toast(e.message || "Couldn't reach the controller"); }
}
async function saveConfig(){
  try { C = await post("/api/config", D); D = clone(C); toast("Saved. The controller is using it now."); render(); }
  catch(e){ toast("Not saved: " + (e.message || "couldn't reach the controller")); }
}
document.addEventListener("click", async ev => {
  const b = ev.target.closest("[data-act]"); if(!b) return;
  const a = b.dataset.act, i = Number(b.dataset.i), j = Number(b.dataset.j);
  switch(a){
    case "mode-auto": control({mode:"auto"}, "Back on the schedule"); break;
    case "mode-manual": control({mode:"manual", minutes:manualMinutes}, "Manual control"); break;
    case "mode-photo": if(C.photos.length) control({mode:"photo", index:0}, `Picture mode: ${C.photos[0].name}`); break;
    case "mdur": manualMinutes = Number(b.dataset.m); if(S.mode==="manual") control({mode:"manual", lvl:S.groups, minutes:manualMinutes}); else render(); break;
    case "photo": control({mode:"photo", index:i}, `Picture mode: ${C.photos[i].name}`); break;
    case "photo-edit": photoEdit = !photoEdit; render(); break;
    case "photo-try": control({mode:"manual", lvl:D.photos[i].lvl.slice(0, D.groups.length), minutes:10}, "Showing it for 10 minutes"); break;
    case "photo-del": D.photos.splice(i,1); render(); break;
    case "photo-add": D.photos.push({name:"Picture " + (D.photos.length+1), minutes:10, lvl:S.groups.slice()}); render(); break;
    case "setclock": control({time:Math.floor(Date.now()/1000)}, "Clock set from this phone"); break;
    case "preset": applyPreset(i); break;
    case "selg": schedSel = {g:i, p:-1}; renderSchedule(); break;
    case "pt-del": { const G = D.groups[schedSel.g]; if(G.points.length>1){ G.points.splice(schedSel.p,1); schedSel.p=-1; drawSched(); renderChrome(); } break; }
    case "cnt": { const J = D.jacks[j]; J.count = clamp(J.count + Number(b.dataset.d), 1, 8); renderLights(); renderChrome(); break; }
    case "ident": case "wz-ident": control({identify:j}, `Flashing OUT ${j+1} for 6 seconds`); break;
    case "g-add": { const n = D.groups.length; D.groups.push({name:"Group " + (n+1), color:n%8, points: clone(D.groups[D.groups.length-1].points)}); D.photos.forEach(p=>p.lvl.push(0)); renderLights(); renderChrome(); break; }
    case "g-del": { D.groups.splice(i,1); D.jacks.forEach(J=>J.ch.forEach(k=>{ if(k.group===i) k.group=-1; else if(k.group>i) k.group--; })); D.photos.forEach(p=>p.lvl.splice(i,1)); if(schedSel.g>=D.groups.length) schedSel={g:0,p:-1}; renderLights(); renderChrome(); break; }
    case "g-color": D.groups[i].color = (D.groups[i].color+1)%8; renderLights(); renderChrome(); break;
    case "lvl-simple": D.expert = false; render(); break;
    case "lvl-expert": D.expert = true; render(); break;
    case "wizard": openWizard(); break;
    case "wifi": { const ssid = $("wS").value.trim(); if(!ssid){ toast("Enter your Wi-Fi network name"); break; }
      try { await post("/api/wifi", {ssid, pass:$("wP").value}); toast(demo ? "Demo: nothing to join" : `Joining ${ssid}. Reconnect your phone to that network, then open quanta.local.`); } catch(e){ toast(e.message); } break; }
    case "ota-check": case "ota-install": {
      const url = $("otaUrl") ? $("otaUrl").value.trim() : "";
      if(!url){ toast("Enter the update server address first"); break; }
      if(a==="ota-install"){ otaStart(); }
      try {
        S = await post("/api/ota", {url, action: a==="ota-check" ? "check" : "install"});
        if(a==="ota-check"){ otaWatch = "check"; render(); otaPollSoon(500); }
      } catch(e){ if(a==="ota-install") otaMsg("bad", "Couldn't start the update", e.message); else toast(e.message); }
      break; }
    case "ota-close": otaWatch = null; $("otaLayer").innerHTML = ""; render(); break;
    case "reset": confirmReset = true; render(); break;
    case "reset-no": confirmReset = false; render(); break;
    case "reset-yes": try { await post("/api/factory-reset", {}); toast(demo ? "Demo: nothing erased" : "Erased. The controller is restarting."); } catch(e){ toast(e.message); } confirmReset = false; render(); break;
    case "wz-next": if(wiz.step===3){ wiz.on = toMin($("wOn").value,600); wiz.off = toMin($("wOff").value,1260); } wiz.step++; renderWizard(); break;
    case "wz-back": wiz.step--; renderWizard(); break;
    case "wz-close": wiz = null; renderWizard(); break;
    case "wz-cnt": { const J = wiz.c.jacks[j]; J.count = clamp(J.count + Number(b.dataset.d), 1, 8); renderWizard(); break; }
    case "wz-preset": wiz.preset = i; renderWizard(); break;
    case "wz-finish": wizBuild(); D = clone(wiz.c); wiz = null; renderWizard(); lastPreset = null; await saveConfig(); tab = "now"; render(); break;
  }
});
document.addEventListener("input", ev => {
  const el = ev.target, k = el.dataset && el.dataset.edit; if(!k) return; const i = Number(el.dataset.i);
  if(k==="photo-name") D.photos[i].name = el.value.slice(0,19) || "Picture";
  if(k==="photo-min") D.photos[i].minutes = clamp(Number(el.value)||10,1,240);
  if(k==="photo-lvl"){ const g = Number(el.dataset.g); D.photos[i].lvl[g] = Number(el.value)*10; $(`plv${i}_${g}`).textContent = el.value + "%"; }
  renderChrome();
});
$("saveBtn").addEventListener("click", saveConfig);
$("discardBtn").addEventListener("click", () => { D = clone(C); lastPreset = null; render(); toast("Changes discarded"); });
document.querySelectorAll("nav.tabs button").forEach(b => b.addEventListener("click", () => { tab = b.dataset.tab; confirmReset = false; render(); window.scrollTo(0,0); }));

const HELP = {
  now:`<p><b>Schedule</b> runs your daily light curve. <b>Manual</b> lets you set each group by hand for 1 hour, 3 hours, or until you switch back. <b>Picture</b> applies one of your saved photo settings and returns to the schedule by itself.</p><p>Moving any slider switches to Manual.</p>`,
  schedule:`<p>Pick your tank type and on/off times to draw a proven starting schedule. Then use <b>Overall intensity</b> to turn everything up or down together.</p><p>In Expert mode, drag the points on the chart. Tap empty space to add a point, or tap a point and choose Remove.</p><p><b>Acclimation</b> starts the lights dimmer and brings them up to the full schedule over the days you choose, which helps avoid bleaching when lights or corals are new.</p>`,
  lights:`<p>Tell the controller which Altair is on each of the four outputs. Two Altairs on one output (piggybacked through the light's spare socket) always dim together.</p><p>Every Altair has a blue and a white channel. Each channel follows a <b>group</b> on the schedule, normally Blue and White. Make more groups in Expert mode to run, say, the left and right side differently.</p><p>Tap <b>Flash this light</b> to find out which light is on which output.</p>`,
  stats:`<p><b>Health check</b> looks at the clock, every cable, power cuts, temperature and Wi-Fi, and says what to do if something's off.</p><p>If an output says <b>No light detected</b>, push the 3.5 mm plug fully in at both ends. A <b>cable short</b> on the white channel usually means a mono cable; use a stereo one.</p>`,
  settings:`<p>The controller runs the lights by itself. Wi-Fi and this page are only for changing settings; if Wi-Fi goes down, the lights carry on.</p><p>Hold the button on the controller for 5 seconds to turn on its setup hotspot. Hold 20 seconds to forget the Wi-Fi network.</p>`,
};
$("helpBtn").addEventListener("click", () => {
  if(demo) window.scrollTo(0,0);
  $("overlay").innerHTML = `<div class="sheetbg" id="sheetbg"><div class="sheet" role="dialog" aria-label="Help"><div class="row between"><h3>Help</h3><button class="btn small" id="helpClose">Close</button></div>
    <div class="stack small">${HELP[tab]}</div>
    <p class="help">Still stuck? The Stats page's health check usually points at the fix.</p></div></div>`;
  const close = () => { $("overlay").innerHTML = ""; if(wiz) renderWizard(); };
  $("helpClose").addEventListener("click", close);
  $("sheetbg").addEventListener("click", e => { if(e.target.id==="sheetbg") close(); });
});

// =====================================================================================
// Render + polling
// =====================================================================================
function render(){
  if(!S || !C) return;
  document.querySelectorAll("nav.tabs button").forEach(b => b.setAttribute("aria-current", b.dataset.tab===tab ? "page" : "false"));
  ({now:renderNow, schedule:renderSchedule, lights:renderLights, stats:renderStats, settings:renderSettings})[tab]();
  renderChrome();
}
async function poll(){
  try {
    S = await get("/api/state");
    renderChrome();
    if(tab==="now") liveNow(); else if(tab==="lights") liveLights(); else if(tab==="stats") liveStats(); else if(tab==="schedule" && !document.querySelector(".chartbox:active")) drawSched();
  } catch(e){ /* keep last state; next poll retries */ }
  setTimeout(poll, 2000);
}
(async () => {
  try { S = await get("/api/state"); C = await get("/api/config"); }
  catch(e){ demo = true; S = await get("/api/state"); C = await get("/api/config"); }
  let framed = false; try { framed = window.self !== window.top; } catch(e){ framed = true; }
  if(/[?&]phone\b/.test(location.search)) framed = false;   // shown inside a fixed-size phone frame: use the real phone layout
  if(demo && framed){ document.body.classList.add("embed"); const m = $("main"); m.insertBefore(document.querySelector("nav.tabs"), m.firstChild); m.insertBefore($("savebar"), $("page")); }
  D = clone(C);
  if(!demo && (!S.time.valid || S.time.source==="estimated")) { try { S = await post("/api/control", {time:Math.floor(Date.now()/1000)}); } catch(e){} }
  render();
  if(!C.setupDone) openWizard();
  setTimeout(poll, 2000);
})();
})();
</script>
</body></html>)QCUI";
