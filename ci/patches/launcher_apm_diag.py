"""Build 58: launcher vypíše aktivní tabulku taktů těsně před spuštěním hry.

Proč: na „takty mi klesají“ jsme dosud neměli z čeho usuzovat — emulátor je
od buildu 56 nečte a launcher je nečetl nikdy. Tohle je **čtení**, ne zápis:
`appletGetCurrentPerformanceConfiguration` je command 91 na
`ICommonStateGetter` a vrací ID tabulky, která právě řídí CPU/GPU/EMC.

Čte se na dvou místech:

  * `main()` — hned za místem, kde dřív stálo `appletSetCpuBoostMode(Normal)`
    po extrakci jader z romfs. Tohle je konfigurace, kterou emulátor
    **zdědí**, protože launcher ho spouští vzápětí (a `appletSetCpuBoostMode`
    je globální — command 66 na applet, ne na proces).
  * `executePaste()` — za místem, kde dřív FastLoad přepínal kopírování
    souborů v UI. Kdyby tam něco tabulku měnilo, je to tu vidět.

`0x92220007/08` = běžný stav, `0x92220009/0A/0B/0C` = tabulky FastLoad
(libnx `apm.h:21`: „Boost CPU. Additionally, throttle GPU to minimum“).
V buildu 57 už FastLoad nikde není, takže očekáváme 07/08 — a pokud přesto
GPU klesá, problém je jinde než v APM tabulce (governor/IDLE), což je přesně
ta informace, kterou bez tohohle řádku nezjistíme.

Použití: python3 ci/patches/launcher_apm_diag.py <launcher/source/main.cpp>
"""
import sys

if len(sys.argv) < 2:
    print("použití: launcher_apm_diag.py <launcher/source/main.cpp>")
    sys.exit(2)

MARK = "NSX_APM_LAUNCHER_DIAG"

# Statická funkce na úrovni souboru, NE lambda v main(): první pokus (run
# 35373639821) měl lambdu v main() a volání v executePaste() →
# „'nsxApmNow' was not declared in this scope“.
FUNC_ANCHOR = "static bool executePaste(const std::string &folder) {\n"
FUNC_DEF = r"""/* NSX_APM_LAUNCHER_DIAG (build 58): cteni, ne zapis. Ktera tabulka taktu
 * prave plati (0x92220007/08 = bezny stav, 0x92220009/0A/0B/0C = FastLoad =
 * GPU na minimum podle libnx apm.h:21). */
static void nsxApmNow(const char *when){
  u32 cfg=0;
  const Result rc=appletGetCurrentPerformanceConfiguration(&cfg);
  ApmPerformanceMode mode=ApmPerformanceMode_Invalid;
  const Result rm=apmGetPerformanceMode(&mode);
  printf("[LAUNCH] apm(%s): konfigurace=0x%x (rc=0x%x) rezim=%s (rc=0x%x)\n",
         when,(unsigned)cfg,(unsigned)rc,
         R_SUCCEEDED(rm)?((int)mode==1?"Console":"Handheld"):"?",
         (unsigned)rm);
  fflush(stdout);
}

"""

# main(): těsně před spuštěním hry — emulátor tuhle konfiguraci zdědí.
# Kotva je dvouřádková, protože `// appletSetCpuBoostMode(…Normal);` je 3×.
ANCHOR_MAIN = """    // appletSetCpuBoostMode(ApmCpuBoostMode_Normal);
    if(haveCore){
"""
NEW_MAIN = """    // appletSetCpuBoostMode(ApmCpuBoostMode_Normal);
    nsxApmNow("pred spustenim hry");   // NSX_APM_LAUNCHER_DIAG
    if(haveCore){
"""

# executePaste(): za kopírováním souborů v UI
ANCHOR_PASTE = """  // appletSetCpuBoostMode(ApmCpuBoostMode_Normal);
  if(!ok&&S_ISDIR(sourceStat.st_mode)) removeTreeInternal(destination);
"""
NEW_PASTE = """  // appletSetCpuBoostMode(ApmCpuBoostMode_Normal);
  nsxApmNow("po paste");   // NSX_APM_LAUNCHER_DIAG
  if(!ok&&S_ISDIR(sourceStat.st_mode)) removeTreeInternal(destination);
"""

def main():
    path = sys.argv[1]
    text = open(path, encoding="utf-8", errors="surrogateescape").read()
    if MARK in text:
        print("launcher apm diag: už patchnuto")
        return 0

    # Záleží na pořadí: launcher_no_boost.py musí běžet PŘED tímto patchem,
    # protože kotvy jsou jeho zakomentované řádky.
    if "NSX_NO_BOOST" not in text:
        print("launcher apm diag: chybi NSX_NO_BOOST — spusť dřív "
              "launcher_no_boost.py")
        return 1
    if text.count(ANCHOR_MAIN) != 1:
        print("launcher apm diag: kotva main() není jednoznačná (%dx)"
              % text.count(ANCHOR_MAIN))
        return 1
    if text.count(FUNC_ANCHOR) != 1:
        print("launcher apm diag: kotva executePaste() definice neni jednoznacna (%dx)"
              % text.count(FUNC_ANCHOR))
        return 1
    if text.count(ANCHOR_PASTE) != 1:
        print("launcher apm diag: kotva executePaste() není jednoznačná (%dx)"
              % text.count(ANCHOR_PASTE))
        return 1

    text = text.replace(FUNC_ANCHOR, FUNC_DEF + FUNC_ANCHOR, 1)
    text = text.replace(ANCHOR_MAIN, NEW_MAIN, 1)
    text = text.replace(ANCHOR_PASTE, NEW_PASTE, 1)
    open(path, "w", encoding="utf-8", errors="surrogateescape").write(text)
    print("launcher apm diag: ok (main + executePaste)")
    return 0


sys.exit(main())
