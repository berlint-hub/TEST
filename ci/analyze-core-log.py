#!/usr/bin/env python3
"""Analýza nethersx2-core.log z karty → FPS, takty, rozložení threadů.

Použití:
    python3 ci/analyze-core-log.py nethersx2-core.log [--full]

Co vypíše:
  * souhrn za každou session (ISO, počet FPS oken, medián/min/max FPS),
  * FPS podle kombinace taktů (cpu/gpu/emc) — tj. jak moc hra stojí na taktech,
  * okna se stutterem (nejdelší frame),
  * rozložení emulačních threadů na jádra + kolik jader proces dostal,
  * load (busy% per jádro z [CI] load: — build 87+; >=90 % = kandidát na
    bottleneck), v --full i propojení s FPS okny,
  * kolik řádků logu spolkl dedup (a jaké vzory).

Proč to je v repu: v CI i na kartě se pořád dokola potřebuje totéž a ruční
parsování regexem je přesně to, kde se dělají chyby (navíc 'boost=' se
v různých buildech liší, takže se čte tolerantně).
"""
import argparse
import re
import statistics
import sys
from collections import defaultdict

FPS_RE = re.compile(
    r"FPS ([\d.]+) \| ([\d.]+) ms/frame \| min ([\d.]+) max ([\d.]+) ms \| (\d+) framu"
    r"(?: \| lsfg=(\d))?(?: boost=(\d))? \| cpu=(\d+) gpu=(\d+) emc=(\d+) MHz")
ISO_RE = re.compile(r"isoFile open ok: (.+?)\.iso", re.M)
CORES_RE = re.compile(r"\[CI\] cores: mask=0x([0-9a-f]+) -> hot=0x([0-9a-f]+) ee=(\d+) work=([\d,]*) bg=(\d+)", re.M)
THREAD_RE = re.compile(r"\[CI\] thread (?:#(\d+) \(work: ([^)]+)\)|(EE/VM|bg[^)]*)) -> core=(\d+)", re.M)
DEDUP_RE = re.compile(r"\[CI\] \.\.\. vzor se opakoval (\d+)x.*?: (.*)$", re.M)
# Build 87+: "[CI] load: c0=..% c1=..% c2=..% c3=..%" (InfoType_IdleTickCount,
# busy% per jádro). Role->jádro viz "[CI] thread #N -> core=" podle pinningu.
LOAD_RE = re.compile(r"\[CI\] load:((?:\s+c\d+=\d+%)+)", re.M)
LOAD_TOKEN_RE = re.compile(r"c(\d)=(\d+)%")


def sessions(lines):
    cur, out = [], []
    for l in lines:
        if "[CI] log capture ON" in l:
            if cur:
                out.append(cur)
            cur = []
        cur.append(l)
    if cur:
        out.append(cur)
    return out


def pct(vals, p):
    vals = sorted(vals)
    if not vals:
        return 0.0
    k = max(0, min(len(vals) - 1, int(round((len(vals) - 1) * p))))
    return vals[k]


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("log")
    ap.add_argument("--full", action="store_true", help="i rozpad na jednotlivá okna")
    args = ap.parse_args()

    lines = open(args.log, encoding="utf-8", errors="replace").read().splitlines()
    sess = sessions(lines)
    print(f"soubor: {args.log} ({len(lines)} řádků, {len(sess)} sessions)\n")

    all_rows = []
    for i, s in enumerate(sess, 1):
        txt = "\n".join(s)
        iso = ISO_RE.search(txt)
        rows = FPS_RE.findall(txt)
        name = iso.group(1).split("/")[-1][:50] if iso else "(bez ISO)"
        print(f"=== session {i}: {name} ({len(s)} řádků, {len(rows)} FPS oken)")
        cores = CORES_RE.search(txt)
        if cores:
            print(f"    jádra: mask=0x{cores.group(1)} hot=0x{cores.group(2)} "
                  f"ee={cores.group(3)} work={cores.group(4)} bg={cores.group(5)}")
        for m in THREAD_RE.finditer(txt):
            if m.group(1):
                print(f"    thread #{m.group(1)} ({m.group(2)}) -> core {m.group(4)}")
            else:
                print(f"    thread {m.group(3)} -> core {m.group(4)}")
        if rows:
            fps = [float(r[0]) for r in rows]
            ms = [float(r[1]) for r in rows]
            worst = max(rows, key=lambda r: float(r[3]))
            print(f"    FPS: medián {statistics.median(fps):.1f} | p10 {pct(fps,0.10):.1f} "
                  f"| p90 {pct(fps,0.90):.1f} | min {min(fps):.1f} max {max(fps):.1f}")
            print(f"    ms/frame: medián {statistics.median(ms):.2f} | nejdelší frame "
                  f"{worst[3]} ms (okno {worst[0]} FPS)")
            print(f"    lsfg: {'zapnuto' if any(r[5] == '1' for r in rows) else 'vypnuto'}")
            all_rows += rows
        # load: busy% per jádro (build 87+, čte se z load counteru jader)
        bycore = defaultdict(list)
        for m in LOAD_RE.finditer(txt):
            for c, p in LOAD_TOKEN_RE.findall(m.group(1)):
                bycore[int(c)].append(int(p))
        if bycore:
            view = " ".join(f"c{k}=med{statistics.median(v):.0f} "
                            f"(p10 {pct(v,0.10):.0f}/max {max(v)})"
                            for k, v in sorted(bycore.items()))
            print(f"    load (busy%): {view}")
            # Kolik % času je jádro nad 90 % = podezření na bottleneck v daném
            # vlákně (EE na core0, MTGS/worker + VU1 na core1/2, audio na core3).
            for k, v in sorted(bycore.items()):
                hot = sum(1 for x in v if x >= 90) * 100.0 / len(v)
                if hot >= 10:
                    print(f"      -> jádro c{k} je >=90 % busy v {hot:.0f} % času "
                          f"(zde hledej bottleneck)")
        # --full: propojení FPS oken s load řádkami (každé ~1/s, jdou za sebou)
        if args.full and rows and bycore:
            print("    -- full: FPS | busy% per core (c0..c3)")
            samples = list(zip(*bycore.values()))
            for n, (r, sample) in enumerate(zip(rows, samples), 1):
                load = " ".join(f"c{k}={p}%" for k, p in zip(sorted(bycore), sample))
                print(f"      okno {n:>4}: {r[0]:>5} FPS | {load}")
        # dedup
        dd = DEDUP_RE.findall(txt)
        if dd:
            tot = sum(int(n) for n, _ in dd)
            pats = sorted({p.strip() for _, p in dd})
            print(f"    dedup: potlačeno {tot} řádků v {len(dd)} souhrnech; vzory: "
                  + "; ".join(p[:60] for p in pats[:5]))
        print()

    if all_rows:
        print("=== FPS podle taktů (všechny sessions) ===")
        by = defaultdict(list)
        for r in all_rows:
            by[(r[7], r[8], r[9])].append(float(r[0]))
        print(f"{'cpu/gpu/emc MHz':<24} {'oken':>5} {'FPS medián':>11} {'p10':>7} {'max':>7}")
        for k, v in sorted(by.items(), key=lambda x: -len(x[1])):
            print(f"{k[0]+'/'+k[1]+'/'+k[2]:<24} {len(v):>5} {statistics.median(v):>11.1f} "
                  f"{pct(v,0.10):>7.1f} {max(v):>7.1f}")

        if args.full:
            print("\n=== jednotlivá okna ===")
            for r in all_rows:
                print(f"  {r[0]:>5} FPS | {r[1]:>7} ms | min {r[2]:>6} max {r[3]:>7} | "
                      f"{r[4]:>3} framů | cpu={r[7]} gpu={r[8]} emc={r[9]}")
    return 0


if __name__ == "__main__":
    sys.exit(main())
