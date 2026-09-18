"""Build 58: čtení aktivní performance konfigurace (APM) do logu.

Proč: uživatel hlásí, že mu „pořád klesají takty“ i v buildu 57, kde už
`appletSetCpuBoostMode` není nikde (ani v emulátoru, ani v launcheru).
Bez měření se o tom dá jen hádat — a hádání už jednou stálo build (46:
`clkrst` vrátil nuly, protože `PcvModule_CpuBus` ≠ `PcvModuleId_CpuBus`).

Co se čte:

  * `appletGetCurrentPerformanceConfiguration()` (command 91 na
    `ICommonStateGetter`) — **která tabulka taktů právě platí**. Tohle je
    přesně to číslo, které potřebujeme: `0x92220007/08` je běžný stav,
    `0x92220009/0A/0B/0C` jsou tabulky, do kterých strká FastLoad
    (viz libnx `apm.h:21`: „Boost CPU. Additionally, throttle GPU to
    minimum“).
  * `apmGetPerformanceMode()` — Handheld(0) / Console(1).
  * `apmGetPerformanceConfiguration(mode)` — nakonfigurovaná tabulka pro
    Normal(0) a Boost(1).

**Žádný zápis.** Build 50 spadl na tom, že emulátor držel tři `clkrst`
session a pere se s governorem taktů (`pcv` Result 2011-0102 User Break,
`hoc:clk` 2345-0048). Tahle tři volání jsou čistě čtecí a neotevírají žádnou
`clkrst`/`pcv` session — `applet` i `apm` už má inicializované samotný port.

Vypisuje se Result kód u každého volání, takže kdyby služba v applet režimu
nebyla dostupná, je to v logu vidět a nedá se to splést s „takty jsou
v pořádku“.

Použití: python3 ci/patches/apm_diag.py <source/hooks/ci_core_log.c>
"""
import sys

if len(sys.argv) < 2:
    print("použití: apm_diag.py <source/hooks/ci_core_log.c>")
    sys.exit(2)

MARK = "NSX_APM_DIAG"

FUNC = r'''
/* NSX_APM_DIAG (build 58): která tabulka taktů právě platí?
 *
 * Uživatel hlásí klesající takty i v buildu, kde appletSetCpuBoostMode není
 * nikde. Bez tohohle řádku je to neověřitelné. Čistě ČTENÍ: žádné clkrst,
 * žádné pcv, žádná session — build 50 spadl právě na souboji clkrst session
 * s governorem taktů (pcv Result 2011-0102, hoc:clk 2345-0048).
 *
 * appletGetCurrentPerformanceConfiguration = command 91 na
 * ICommonStateGetter (libnx applet.c) a vrací právě tu tabulku, která teď
 * řídí CPU/GPU/EMC. 0x92220007/08 = běžný stav; 0x92220009/0A/0B/0C =
 * tabulky FastLoad, které podle apm.h:21 „throttle GPU to minimum“.
 */
#if CI_SWITCH
static void ci_apm_diag(const char *when) {
  u32 cur = 0;
  const Result rc = appletGetCurrentPerformanceConfiguration(&cur);
  ApmPerformanceMode mode = ApmPerformanceMode_Invalid;
  const Result rm = apmGetPerformanceMode(&mode);
  u32 cfg[2] = { 0, 0 };
  Result ra[2];
  int i;

  for (i = 0; i < 2; ++i) {
    const ApmPerformanceMode m = (i == 0) ? ApmPerformanceMode_Normal
                                          : ApmPerformanceMode_Boost;
    ra[i] = apmGetPerformanceConfiguration(m, &cfg[i]);
  }

  fprintf(stdout,
          "[CI] apm(%s): aktivni konfigurace=0x%x (rc=0x%x) | "
          "rezim=%s (rc=0x%x) | nastaveno Normal=0x%x (rc=0x%x) "
          "Boost=0x%x (rc=0x%x)\n",
          when, (unsigned)cur, (unsigned)rc,
          R_SUCCEEDED(rm) ? ((int)mode == 1 ? "Console" : "Handheld") : "?",
          (unsigned)rm,
          (unsigned)cfg[0], (unsigned)ra[0],
          (unsigned)cfg[1], (unsigned)ra[1]);
  fflush(stdout);
}
#else
#define ci_apm_diag(when) ((void)0)
#endif
'''

CALL_ANCHOR = """        /* Build 56: žádná hláška o taktech — emulátor je nečte ani
         * nezapisuje, takty drží Ultrahand governor uživatele. */
"""
CALL_NEW = CALL_ANCHOR + """        /* NSX_APM_DIAG (build 58): jen ČTE aktivní tabulku taktů, aby se
         * dalo ověřit, jestli takty opravdu klesají (a kdo je drží dole). */
        ci_apm_diag("start");
"""


def main():
    path = sys.argv[1]
    text = open(path, encoding="utf-8", errors="surrogateescape").read()
    if MARK in text:
        print("apm diag: už patchnuto")
        return 0

    ok = True
    if text.count(CALL_ANCHOR) != 1:
        print("apm diag: kotva pro volání nenalezena (%dx)"
              % text.count(CALL_ANCHOR))
        ok = False
    anchor = "static int ci_enabled = -1;\n"
    if text.count(anchor) != 1:
        print("apm diag: kotva pro funkci nenalezena (%dx)"
              % text.count(anchor))
        ok = False
    if not ok:
        return 1

    text = text.replace(anchor, anchor + FUNC, 1)
    text = text.replace(CALL_ANCHOR, CALL_NEW, 1)
    open(path, "w", encoding="utf-8", errors="surrogateescape").write(text)
    print("apm diag: ok")
    return 0


sys.exit(main())
