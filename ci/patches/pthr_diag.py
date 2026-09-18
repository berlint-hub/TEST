"""Patch source/pthr.c ve zdrojích portu (NetherSX2_nx).

Co přidává:
  1. NSX_CORE_DIAG — rozložení emulačních threadů na jádra do logu
      ("[CI] cores: mask=… ee=… work=… bg=…" + řádek za každý thread).
  2. NSX_CORE_PINOFF (build 52) — marker /switch/nethersx2/ci-nopin.enabled
      vypne všechna svcSetThreadCoreMask: thready dědí masku procesu, nic se
      nepinuje. Izolace podezření, že pinování (audio thread na nejvyšším
      jádře = core 3, kde žijou sysmoduly) přispívá k pádu systému při
      přehazování her GT3<->Fallout. Pinování je upstream chování; tenhle
      marker jen umí vypnout test bez rebuildu.
  3. NSX_CORE_4WAY — marker /switch/nethersx2/ci-4core.enabled přepne
      work pool z round-robin na stabilní čtyřjádrový rozpis:
      EE/VU0 = core 0, VU1 = core 1, MTGS = core 2, audio = core 3.
      To je bezpečný první pokus, který nezapíná takty ani neřeší dlouhé
      stuttery v GS, ale snižuje contention mezi VU1 a GS na 4jádrovém masku.

Dřív byl tenhle patch heredocem uvnitř ci/build-switch.sh; od buildu 52 je
souborem (stejně jako ci_core_log.c / vk_diag.py / util_no_boost.py), ať se
dá spouštět i lokálně proti fakesource a testovat idempotence.

Použití: python3 ci/patches/pthr_diag.py <cesta k pthr.c>
"""
import sys

path = sys.argv[1]
text = open(path, encoding="utf-8", errors="surrogateescape").read()
if "NSX_CORE_DIAG" in text and "NSX_CORE_4WAY" in text:
    print("pthr.c: core diag + 4-core split už patchnuto")
    sys.exit(0)

done = 0
edits = [
    ('#include "pthr.h"',
     '/* NSX_CORE_DIAG: rozložení emulačních threadů do logu. */\n'
     '#include <stdio.h>\n'
     '#include <sys/stat.h>\n'
     '#include "pthr.h"\n'
     '/* NSX_CORE_PINOFF: marker /switch/nethersx2/ci-nopin.enabled vypne\n'
     ' * svcSetThreadCoreMask — thready pak dědí masku procesu a nic se\n'
     ' * nepinuje. Test bez rebuildu, jestli pinování na jádra (audio na\n'
     ' * nejvyšším, kde žijou sysmoduly) přispívá k pádu systému při\n'
     ' * přehazování her. */\n'
     '/* NSX_CORE_4WAY: marker /switch/nethersx2/ci-4core.enabled přepne\n'
     ' * work pool z round-robin na stabilní 4-core rozpis:\n'
     ' *   EE/VU0 = core 0, VU1 = core 1, MTGS = core 2, audio = core 3.\n'
     ' * Zajišťuje méně contention mezi VU1 a GS bez zásahu do taktů. */\n'
     'static int nsx_nopin(void) {\n'
     '  static int v = -1;\n'
     '  if (v < 0) {\n'
     '    struct stat st;\n'
     '    v = (stat("/switch/nethersx2/ci-nopin.enabled", &st) == 0) ? 1 : 0;\n'
     '  }\n'
     '  return v;\n'
     '}\n'
     'static int nsx_4core_enabled(void) {\n'
     '  static int v = -1;\n'
     '  if (v < 0) {\n'
     '    struct stat st;\n'
     '    v = (stat("/switch/nethersx2/ci-4core.enabled", &st) == 0) ? 1 : 0;\n'
     '  }\n'
     '  return v;\n'
     '}'),
    ('  work_mask = (hot_count >= 2) ? (hot_mask & ~(1u << ee_core)) : hot_mask;',
     '  work_mask = (hot_count >= 2) ? (hot_mask & ~(1u << ee_core)) : hot_mask;\n'
     '\n'
     '  /* NSX_CORE_DIAG: kolik jader proces dostal a jak se o ně thready podělí.\n'
     '   * hbmenu dává 3 jádra (čtvrté si drží systém), zástupce v HOME menu 4. */\n'
     '  fprintf(stdout, "[CI] cores: mask=0x%llx -> hot=0x%x ee=%d work=",\n'
     '          (unsigned long long)mask, hot_mask, ee_core);\n'
     '  for (unsigned nsx_i = 0; nsx_i < work_count; nsx_i++)\n'
     '    fprintf(stdout, "%d%s", work_list[nsx_i], (nsx_i + 1 < work_count) ? "," : "");\n'
     '  fprintf(stdout, " bg=%d%s\\n", bg_core,\n'
     '          (bg_core < 0) ? " (jen 3 jadra -> audio se vejde do work poolu)" : "");\n'
     '  fprintf(stdout, "[CI] pin: %s\\n", nsx_nopin()\n'
     '          ? "VYPNUTO markerem ci-nopin.enabled (thready drzi masku procesu)"\n'
     '          : "zapnuty (default; ci-nopin.enabled ho vypne)");\n'
     '  fprintf(stdout, "[CI] work-mode: %s\\n", nsx_4core_enabled()\n'
     '          ? "4-core split (VU1=core 1, MTGS=core 2)"\n'
     '          : "round-robin");\n'
     '  fflush(stdout);'),
    ('static void assign_work_core(void) {',
     'static int assign_work_core(void) {'),
    ('  const int core = work_list[work_rr++ % (unsigned)work_count]; const unsigned m = work_mask;\n'
     '  mutexUnlock(&core_lock);\n'
     '  svcSetThreadCoreMask(CUR_THREAD_HANDLE, core, m);\n'
     '}',
     '  if (nsx_4core_enabled() && work_count >= 2) {\n'
     '    static unsigned nsx_4seq = 0;\n'
     '    const int pick = (nsx_4seq++ & 1);\n'
     '    int core = work_list[pick % work_count];\n'
     '    if (core == ee_core || (bg_core >= 0 && core == bg_core))\n'
     '      core = work_list[(pick ^ 1) % work_count];\n'
     '    const unsigned m = 1u << core;\n'
     '    mutexUnlock(&core_lock);\n'
     '    if (!nsx_nopin()) svcSetThreadCoreMask(CUR_THREAD_HANDLE, core, m);\n'
     '    return core;\n'
     '  }\n'
     '  const int core = work_list[work_rr++ % (unsigned)work_count]; const unsigned m = work_mask;\n'
     '  mutexUnlock(&core_lock);\n'
     '  if (!nsx_nopin()) svcSetThreadCoreMask(CUR_THREAD_HANDLE, core, m);\n'
     '  return core;\n'
     '}'),
    ('  // Keep emulator workers off the EE and audio cores.\n'
      '  assign_work_core();',
     '  // Keep emulator workers off the EE and audio cores.\n'
     '  {\n'
     '    /* NSX_CORE_DIAG: MTGS/VU1/worker thread — na kterém jádře skončil. */\n'
     '    const int nsx_core = assign_work_core();\n'
     '    static int nsx_seq = 0;\n'
     '    fprintf(stdout, "[CI] thread #%d (work: MTGS/VU1/worker) -> core=%d%s%s\\n",\n'
     '            ++nsx_seq, nsx_core,\n'
     '            nsx_4core_enabled() ? " (4-core split)" : "",\n'
     '            nsx_nopin() ? " (pin vypnut markerem)" : "");\n'
     '    fflush(stdout);\n'
     '  }'),
    ('  const int core = ee_core; const unsigned m = 1u << ee_core;\n'
      '  mutexUnlock(&core_lock);\n'
      '  svcSetThreadCoreMask(CUR_THREAD_HANDLE, core, m);',
     '  const int core = ee_core; const unsigned m = 1u << ee_core;\n'
     '  mutexUnlock(&core_lock);\n'
     '  if (!nsx_nopin()) svcSetThreadCoreMask(CUR_THREAD_HANDLE, core, m);\n'
     '  /* NSX_CORE_DIAG */\n'
     '  fprintf(stdout, "[CI] thread EE/VM -> core=%d (vyhrazene)%s\\n", core,\n'
     '          nsx_nopin() ? " (pin vypnut markerem)" : "");\n'
     '  fflush(stdout);'),
    ('  if (bg_core >= 0) { core = bg_core; m = 1u << bg_core; }\n'
      '  else { core = work_list[bg_rr++ % (unsigned)work_count]; m = work_mask; }\n'
      '  mutexUnlock(&core_lock);\n'
      '  svcSetThreadCoreMask(CUR_THREAD_HANDLE, core, m);',
     '  if (bg_core >= 0) { core = bg_core; m = 1u << bg_core; }\n'
     '  else { core = work_list[bg_rr++ % (unsigned)work_count]; m = work_mask; }\n'
     '  mutexUnlock(&core_lock);\n'
     '  if (!nsx_nopin()) svcSetThreadCoreMask(CUR_THREAD_HANDLE, core, m);\n'
     '  /* NSX_CORE_DIAG (audio a spol.) */\n'
     '  fprintf(stdout, "[CI] thread bg (audio/...) -> core=%d%s\\n", core,\n'
     '          nsx_nopin() ? " (pin vypnut markerem)"\n'
     '                      : ((bg_core < 0) ? " (sdileny work pool)" : ""));\n'
     '  fflush(stdout);'),
]
for find, repl in edits:
    if repl in text:
        done += 1
    elif find in text:
        text = text.replace(find, repl, 1)
        done += 1
    else:
        print("pthr.c: kotva nenalezena: %r" % find[:60])
open(path, "w", encoding="utf-8", errors="surrogateescape").write(text)
print("pthr.c: core diag + 4-core split %d/%d" % (done, len(edits)))
sys.exit(0 if done == len(edits) else 1)
