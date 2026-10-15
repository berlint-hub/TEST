"""Patch source/hooks/vk.c ve zdrojích portu (NetherSX2_nx).

CÍL: rychlejší prezentace snímků.

Z logu z karty:
  [VK] vkQueuePresentKHR ... lsfg=0    (LSFG vypnuté)
  a přesto vkQueuePresentKHR_shim volá lsfg_observe_source_present(), která
  jede lsfg_monotonic_ns() = clock_gettime(CLOCK_MONOTONIC) — na Horizonu
  SVC ~50–60× za sekundu, úplně zbytečně, když LSFG neběží.

Dvě dílčí vylepšení:

  1. lsfg_monotonic_ns() čte architektonický čítač přímo (mrs cntpct_el0 /
     cntfrq_el0) místo clock_gettime(). Stejný zdroj jako libnx
     armGetSystemTick, ale bez SVC na každý present. Slouží i FPS měřidlu
     (NSX_VK_FPS), takže zrychlujeme oba per-frame timing pointy.

  2. source-rate klasifikace se měří, jen když je LSFG zapnuté
     (requested != 0). Při vypnutém LSFG se time-read úplně vynechá.

Idempotentní (marker NSX_FASTPRESENT). Použití:
  python3 ci/patches/vk_fast_present.py <cesta k hooks/vk.c>
"""
import sys

PATH = sys.argv[1]
text = open(PATH, encoding="utf-8", errors="surrogateescape").read()

if "NSX_FASTPRESENT" in text:
    print("vk.c: fast present už patchnuto")
    sys.exit(0)

done = 0

# ------------------------------------------------- 1) CNTPCT bez clock_gettime
mono_anchor = (
    'static uint64_t lsfg_monotonic_ns(void) {\n'
    '  struct timespec value;\n'
    '  if (clock_gettime(CLOCK_MONOTONIC, &value) != 0) return 0;\n'
    '  return (uint64_t)value.tv_sec * UINT64_C(1000000000) + (uint64_t)value.tv_nsec;\n'
    '}\n'
)
mono_patch = (
    'static uint64_t lsfg_monotonic_ns(void) {\n'
    '  /* NSX_FASTPRESENT: přímý čítač z architektury (mrs cntpct_el0) místo\n'
    '   * clock_gettime() — stejnej zdroj jako libnx armGetSystemTick, ale bez\n'
    '   * SVC na každej present (~50–60× za sekundu). */\n'
    '  uint64_t nsx_ticks, nsx_freq;\n'
    '  __asm__ __volatile__("mrs %0, cntpct_el0" : "=r"(nsx_ticks));\n'
    '  __asm__ __volatile__("mrs %0, cntfrq_el0" : "=r"(nsx_freq));\n'
    '  if (!nsx_freq)\n'
    '    return 0;\n'
    '  return (nsx_ticks / nsx_freq) * UINT64_C(1000000000) +\n'
    '         (nsx_ticks % nsx_freq) * UINT64_C(1000000000) / nsx_freq;\n'
    '}\n'
)
if mono_anchor in text:
    text = text.replace(mono_anchor, mono_patch, 1)
    done += 1
else:
    print("ANCHOR MISSING: lsfg_monotonic_ns")

# -------------------------------- 2) měř jen při zapnutém LSFG
obs_anchor = (
    '  if (!requested || lsfg_rate_decision != 0)\n'
    '    source_interval = lsfg_observe_source_present();\n'
)
obs_patch = (
    '  /* NSX_FASTPRESENT: při vypnutém LSFG nemá source-rate klasifikace\n'
    '   * smysl — netrať každej frame čtením času. */\n'
    '  if (requested && lsfg_rate_decision != 0)\n'
    '    source_interval = lsfg_observe_source_present();\n'
)
if obs_anchor in text:
    text = text.replace(obs_anchor, obs_patch, 1)
    done += 1
else:
    print("ANCHOR MISSING: lsfg_observe_source_present call")

open(PATH, "w", encoding="utf-8", errors="surrogateescape").write(text)
print("vk.c: fast present patch %d/2" % done)
sys.exit(0 if done == 2 else 1)
