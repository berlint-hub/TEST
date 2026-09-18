"""Patch source/util.c ve zdrojích portu (NetherSX2_nx) — vypne CPU boost.

Upstream tam má:

    void cpu_boost(int on) {
      appletSetCpuBoostMode(on ? ApmCpuBoostMode_FastLoad : ApmCpuBoostMode_Normal);
    }

a port tuhle funkci volá na startu (main.c ~1881) a po 60 framech (~2055).
`ApmCpuBoostMode_FastLoad` ale podle libnx znamená „Boost CPU. Additionally,
throttle GPU to minimum“ — tedy CPU 1785 MHz a GPU 76 MHz. Uživatel na kartě
viděl právě „GPU na minimu“ a hru to zpomalilo (GT3 29,1 vs 31,6 FPS), navíc
se to pere se sysmoduly, které řídí takty (sys-clk, Ultrahand governor)
a uživateli to shazovalo systém.

Tohle je jediné místo v celém portu, kde se takty nastavují (ověřeno
i přes GitHub code search: `CpuBoostMode` je jen v util.c) — patch proto
nechává funkci jako prázdnou a takty neřeší vůbec. Čteme je jen na čtení
(NSX_CLK v ci/patches/ci_core_log.c).

Použití: python3 ci/patches/util_no_boost.py <cesta k util.c>
"""
import sys

PATH = sys.argv[1]
text = open(PATH, encoding="utf-8", errors="surrogateescape").read()

if "NSX_NO_BOOST" in text:
    print("util.c: bez boostu už patchnuto")
    sys.exit(0)

anchor = ("void cpu_boost(int on) {\n"
          "  appletSetCpuBoostMode(on ? ApmCpuBoostMode_FastLoad : "
          "ApmCpuBoostMode_Normal);\n"
          "}\n")
patch = """void cpu_boost(int on) {
  /* NSX_NO_BOOST: tady stálo
   *   appletSetCpuBoostMode(on ? ApmCpuBoostMode_FastLoad : ApmCpuBoostMode_Normal);
   * FastLoad sráží GPU na minimum (76 MHz) a na Switchi, kde takty řídí
   * sysmodul (Ultrahand governor / sys-clk), se s ním pere — shazovalo to
   * systém. Taktům proto necháváme volnou ruku a boost neřešíme; NSX_CLK
   * je jen čte (a zapisuje jedině když na kartě existuje ci-clk.conf). */
  (void)on;
}
"""

if anchor not in text:
    print("util.c: kotva cpu_boost() nenalezena — patch neaplikuji")
    sys.exit(1)

text = text.replace(anchor, patch, 1)
open(PATH, "w", encoding="utf-8", errors="surrogateescape").write(text)
print("util.c: cpu boost vypnut (NSX_NO_BOOST)")
sys.exit(0)
