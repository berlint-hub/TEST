"""Patch source/pthr.c — marker ci-mtvu.conf pro A/B test MTVU bez rebuildu.

Čte /switch/nethersx2/ci-mtvu.conf:
  0 = MTVU VYPNUTO (VU1 thread se nevytváří)
  1 = MTVU ZAPNUTO (default, VU1 thread se vytváří)

Uživatel mění soubor na SD, restartuje hru → okamžitý A/B test.
"""
import sys

path = sys.argv[1]
text = open(path, encoding="utf-8", errors="surrogateescape").read()

if "NSX_MTVU_MARKER" in text:
    print("pthr.c: MTVU marker už patchnuto")
    sys.exit(0)

done = 0

edits = [
    # 1. Přidej čtení markeru po nsx_nopin() funkci
    ('  return v;\n'
     '}',
     '''  return v;
}

/* NSX_MTVU_MARKER: ci-mtvu.conf — 0=OFF, 1=ON (default 1).
 * A/B test MTVU bez rebuildu: uživatel změní soubor na SD, restart hry.
 */
static int nsx_mtvu_enabled(void) {
  static int v = -1;
  if (v < 0) {
    FILE *f = fopen("/switch/nethersx2/ci-mtvu.conf", "r");
    if (f) {
      int val;
      if (fscanf(f, "%d", &val) == 1) {
        v = (val != 0) ? 1 : 0;
      }
      fclose(f);
    }
    if (v < 0) v = 1;  /* default ON */
  }
  return v;
}'''),

    # 2. Podmíněné vytváření VU1 threadu (hledáme kde se vu1_thread vytváří)
    ('  vu1_thread = thread_create(vu1_main, NULL, 0x8000, 0x20);',
     '''  if (nsx_mtvu_enabled()) {
    vu1_thread = thread_create(vu1_main, NULL, 0x8000, 0x20);
  } else {
    vu1_thread = 0;
  }'''),
]

for find, repl in edits:
    if repl in text:
        done += 1
    elif find in text:
        text = text.replace(find, repl, 1)
        done += 1
    else:
        print("pthr.c: kotva nenalezena: %r" % find[:80])

open(path, "w", encoding="utf-8", errors="surrogateescape").write(text)
print("pthr.c: MTVU marker %d/%d" % (done, len(edits)))
sys.exit(0 if done == len(edits) else 1)