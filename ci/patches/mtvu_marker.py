"""Patch source/prefs.c — marker ci-mtvu.conf pro A/B test MTVU bez rebuildu.

Čte /switch/nethersx2/ci-mtvu.conf:
  0 = MTVU VYPNUTO (EmuCore/Speedhacks/vuThread vrátí false)
  1 = MTVU ZAPNUTO (vrátí true)
  soubor neexistuje / nečitelný = bez zásahu (hodnota z launcheru/INI)

Historie: původní patch cílil na tvorbu vu1_thread v pthr.c; upstream ji
odsud přesunul (MTVU řídí čistě nastavení EmuCore/Speedhacks/vuThread, které
si core čte přes prefs_get_bool). Tahle verze proto přepisuje hodnotu klíče
až v getteru — funguje nezávisle na tom, jak si port/core nastavení skládají.

Uživatel mění soubor na SD, restartuje hru → okamžitý A/B test.
"""
import sys

path = sys.argv[1]
text = open(path, encoding="utf-8", errors="surrogateescape").read()

if "NSX_MTVU_MARKER" in text:
    print("prefs.c: MTVU marker už patchnuto")
    sys.exit(0)

done = 0

edits = [
    # 1. helper: režim z markeru (-1 = bez zásahu), vložený těsně před getter
    ('bool prefs_get_bool(const char *key, bool def) {',
     '''/* NSX_MTVU_MARKER: ci-mtvu.conf — 0=OFF, 1=ON, bez souboru = bez zásahu.
 * A/B test MTVU bez rebuildu: uživatel změní soubor na SD, restart hry.
 */
static int nsx_mtvu_mode(void) {
  static int v = -2;
  if (v == -2) {
    v = -1;  /* default: bez zásahu */
    FILE *f = fopen("/switch/nethersx2/ci-mtvu.conf", "r");
    if (f) {
      int val;
      if (fscanf(f, " %d", &val) == 1 && (val == 0 || val == 1))
        v = val;
      fclose(f);
    }
  }
  return v;
}

bool prefs_get_bool(const char *key, bool def) {
  /* NSX_MTVU_MARKER: přepis jen pro vuThread, ostatní klíče netknou. */
  if (strcmp(key, "EmuCore/Speedhacks/vuThread") == 0) {
    int o = nsx_mtvu_mode();
    if (o >= 0)
      return o != 0;
  }'''),
]

for find, repl in edits:
    if repl in text:
        done += 1
    elif find in text:
        text = text.replace(find, repl, 1)
        done += 1
    else:
        print("prefs.c: kotva nenalezena: %r" % find[:80])

open(path, "w", encoding="utf-8", errors="surrogateescape").write(text)
print("prefs.c: MTVU marker %d/%d" % (done, len(edits)))
sys.exit(0 if done == len(edits) else 1)
