"""Patch source/pthr.c — fixní pinning MTGS (core 1) + VU1 (core 2).

Hypotéza #1 z VU-GS-OPTIMALIZACE.md: MTGS a VU1 se v round-robinu střídají
na jádrech 1–2 → cache thrashing + sync overhead. Fixní pinning oddělí
MTGS (GS/Vulkan) na core 1 a VU1 (MTVU) na core 2.

Marker /switch/nethersx2/ci-nopin.enabled vypne pinování úplně (z pthr_diag.py).
"""
import sys

path = sys.argv[1]
text = open(path, encoding="utf-8", errors="surrogateescape").read()

# Kontrola, jestli už patchnuté
if "NSX_FIXED_PINNING" in text:
    print("pthr.c: fixed pinning už patchnuto")
    sys.exit(0)

done = 0

# Hledáme assign_work_core funkci a měníme round-robin na fixní přiřazení
# Originální: work_rr++ % work_count
# Nové: MTGS (i=0) -> core 1, VU1 (i=1) -> core 2, workers -> zbytek

edits = [
    # 1. Přidej konstanty pro fixní pinning před assign_work_core
    ('static int assign_work_core(void) {',
     '''/* NSX_FIXED_PINNING: MTGS -> core 1, VU1 -> core 2, workers -> round-robin zbytek.
 * Respektuje ci-nopin.enabled marker (nsx_nopin()).
 * Work pool: work_list[0] = MTGS, work_list[1] = VU1, [2+] = workers.
 */
static int assign_work_core(void) {'''),

    # 2. Nahraď round-robin logikou s fixním pinningem
    ('  const int core = work_list[work_rr++ % (unsigned)work_count]; const unsigned m = work_mask;\n'
     '  mutexUnlock(&core_lock);\n'
     '  if (!nsx_nopin()) svcSetThreadCoreMask(CUR_THREAD_HANDLE, core, m);\n'
     '  return core;\n'
     '}',
     '''  int core;
  /* NSX_FIXED_PINNING:
   * work_rr = 0 -> MTGS -> work_list[0] (core 1)
   * work_rr = 1 -> VU1  -> work_list[1] (core 2)
   * work_rr >= 2 -> workers -> round-robin z work_list[2+]
   */
  if (work_rr == 0) {
    core = work_list[0];          /* MTGS -> core 1 */
  } else if (work_rr == 1 && work_count > 1) {
    core = work_list[1];          /* VU1 -> core 2 */
  } else {
    /* Workers: round-robin přes work_list[2...] */
    unsigned worker_idx = (work_rr >= 2) ? (work_rr - 2) : 0;
    unsigned worker_count = (work_count > 2) ? (work_count - 2) : 1;
    core = work_list[2 + (worker_idx % worker_count)];
  }
  work_rr++;
  const unsigned m = work_mask;
  mutexUnlock(&core_lock);
  if (!nsx_nopin()) svcSetThreadCoreMask(CUR_THREAD_HANDLE, core, m);
  return core;
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
print("pthr.c: fixed pinning %d/%d" % (done, len(edits)))
sys.exit(0 if done == len(edits) else 1)