"""Patch source/pthr.c — governor v2: exkluzivni jadra pro MTGS a VU1.

Historie:
  v1 (build 92 a driv): fixni preferred core pro prvni dva workery
     (work_rr==0 -> work_list[0], ==1 -> work_list[1]), ale maska zustavala
     cely work pool — Horizon mohl obe nejteplejsi vlakna presunout na jedno
     jadro (equal-priority thready se navzajem nepreemptuji -> co-located
     GS+VU1 = latency spike).
  v2 (tento patch): prvni dva workery dostanou EXKLUSIVNI masku (1 jadro).
     Poradi vytvoreni MTGS/VU1 neni zkoumano — dvojice je symetricka (oba
     hot vlakna), kazde dostane vlastni jadro. Ostatni workery (CDVD,
     savestate zip, DEV9, SW-GS pool) zustavaji na RR poolu.

Zasahuje az PO pthr_diag.py (poradi v build-switch.sh):
  - potrebuje nsx_nopin() z NSX_CORE_DIAG a `static int assign_work_core`.
  - Marker /switch/nethersx2/ci-nopin.enabled  = vsechny piny vypnout.
  - Marker /switch/nethersx2/ci-rrpin.enabled  = v2 vypnout (pool maska jako
    upstream, preferred core zustava) — A/B test na karte bez rebuildu.

Pouziti: python3 ci/patches/pthr_pin_fixed.py <cesta k pthr.c>
"""
import sys

path = sys.argv[1]
text = open(path, encoding="utf-8", errors="surrogateescape").read()

if "NSX_EXCLUSIVE_PIN" in text:
    print("pthr.c: governor v2 uz patchnuto")
    sys.exit(0)

done = 0

edits = [
    # 1) oznaceni funkce (kotva odpovida stavu PO pthr_diag.py)
    ('static int assign_work_core(void) {',
     '''/* NSX_EXCLUSIVE_PIN (governor v2): MTGS a VU1 (prvni dva workery) na
 * exkluzivnich jadrech — Horizon nepreemptuje equal-priority thready, takze
 * sdilena maska umoznovala slozit obe nejteplejsi vlakna na jedno jadro.
 * ci-rrpin.enabled = vratit pool masku (A/B), ci-nopin.enabled = vse vypnout. */
static int assign_work_core(void) {'''),

    # 2) telo: exkluzivni maska pro idx 0..1, zbytek pool
    ('''  const int core = work_list[work_rr++ % (unsigned)work_count]; const unsigned m = work_mask;
  mutexUnlock(&core_lock);
  if (!nsx_nopin()) svcSetThreadCoreMask(CUR_THREAD_HANDLE, core, m);
  return core;
}''',
     '''  static int nsx_rrpin = -1;
  if (nsx_rrpin < 0) {
    struct stat nsx_st;
    nsx_rrpin = (stat("/switch/nethersx2/ci-rrpin.enabled", &nsx_st) == 0);
  }
  const unsigned nsx_idx = work_rr++;
  int core;
  unsigned m;
  if (nsx_idx < 2 && work_count >= 2 && !nsx_rrpin) {
    /* nejteplejsi dvojice: kazdy na svem jadre, bez migraci */
    core = work_list[nsx_idx];
    m = 1u << core;
  } else {
    core = work_list[nsx_idx % (unsigned)work_count];
    m = work_mask;
  }
  mutexUnlock(&core_lock);
  if (!nsx_nopin()) svcSetThreadCoreMask(CUR_THREAD_HANDLE, core, m);
  fprintf(stdout, "[CI] gov2: worker#%u -> core=%d %s%s\\n", nsx_idx, core,
          (nsx_idx < 2 && work_count >= 2 && !nsx_rrpin) ? "EXKLUSIVNI" : "pool",
          nsx_nopin() ? " (pin vypnut markerem)" : "");
  fflush(stdout);
  return core;
}'''),
]

for find, repl in edits:
    if repl in text:
        done += 1          # uz patchnuto
    elif find in text:
        text = text.replace(find, repl, 1)
        done += 1
    else:
        print("pthr.c: kotva nenalezena: %r" % find[:60])
open(path, "w", encoding="utf-8", errors="surrogateescape").write(text)
print("pthr.c: governor v2 %d/%d" % (done, len(edits)))
sys.exit(0 if done == len(edits) else 1)
