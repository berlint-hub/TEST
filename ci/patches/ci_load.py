"""Patch source/pthr.c — CPU% po JADRACH (NSX_CORE_LOAD).

Build 86 použil InfoType_ThreadTickCount + Handle registrovaných threadů
(registry trackujici kazdy emulacni thread). Na hardware to selhalo: v
nethersx2-core.log byly jen "load: EE=0%@mf" a "BG=0%@mf" (9x resp 765x,
vzdy 0%, vzdy @m = vsechny svcGetInfo s cizim handle vracely chybu).

Tohle je jiny zpusob, odolny vuci tem nezdarum citeni cizich handle:
  * bez registry threadu, bez tagi,
  * 4 sampler thready — kazdy se svcSetThreadCoreMask pripne na SVOJI jadro
    a cte jen SVOJE InfoType_IdleTickCount (10),
  * reporter (1x/s) pise  "[CI] load: c0=..% c1=..% c2=..% c3=..%"
    (0..100 busy, 100 - idle/dt).
Role->jadro se vezme z pthr_diag radku "[CI] thread #N (work: ..) -> core=K"
na zacatku logu (na hlavni vetvi: ee=0, work je na 1,2, bg=3).

Pouziti: python3 ci/patches/ci_load.py <cesta k pthr.c>
(aplikovat PO pthr_diag.py — kotvy jsou ale nezavisle na nem).
"""
import sys

path = sys.argv[1]
text = open(path, encoding="utf-8", errors="surrogateescape").read()
if "NSX_CORE_LOAD" in text:
    print("pthr.c: ci_load uz patchnuto")
    sys.exit(0)

head = (
    '#include "util.h"\n'
    '\n'
    '/* NSX_CORE_LOAD: per-core CPU%% z InfoType_IdleTickCount. Definice na konci. */\n'
    'static void nsx_core_probe_start(void);\n'
)

tramp_old = '  void *ret = s.start(s.arg);\n'

tramp_new = (
    '  /* NSX_CORE_LOAD: z prvniho emulatecniho threadu nastartuj samplery. */\n'
    '  nsx_core_probe_start();\n'
    '  void *ret = s.start(s.arg);\n'
)

tail_anchor = (
    'int pthread_attr_setstacksize_soloader(pthread_attr_t_bionic *attr, size_t stacksize) {\n'
    '  if (!attr) return -1;\n'
    '  attr_static_init(attr);\n'
    '  return pthread_attr_setstacksize(attr->real_ptr, stacksize);\n'
    '}\n'
)

tail = tail_anchor + (
    '\n'
    '/* ------------------------------------------------------------------ */\n'
    '/* NSX_CORE_LOAD: CPU%% na jadre pres InfoType_IdleTickCount.           */\n'
    '/* ------------------------------------------------------------------ */\n'
    '#define NSX_CORE_SAMPLERS 4\n'
    '\n'
    'static volatile unsigned nsx_core_pct[NSX_CORE_SAMPLERS]; /* 0..100 busy */\n'
    'static volatile int      nsx_core_started;\n'
    'static volatile int      nsx_core_query_fail;\n'
    '\n'
    '/* Na jadro `core` se pripne a kazdou sekundu precete jeho idle ticky.\n'
    ' * IdleTickCount jde cist jen z aktualniho (vlastniho) jadra threadu —\n'
    ' * proto jich bezi 4, kazdy na svem. */\n'
    'static void *nsx_core_sampler(void *arg) {\n'
    '  const int core = (int)(uintptr_t)arg;\n'
    '  u64 prev = 0, last = svcGetSystemTick();\n'
    '  if (core >= 0 && core < NSX_CORE_SAMPLERS)\n'
    '    svcSetThreadCoreMask(CUR_THREAD_HANDLE, core, 1u << core);\n'
    '  for (;;) {\n'
    '    svcSleepThread(1000000000ULL);\n'
    '    const u64 now = svcGetSystemTick();\n'
    '    const u64 dt  = now - last;\n'
    '    last = now;\n'
    '    u64 idle = 0;\n'
    '    if (dt && R_SUCCEEDED(svcGetInfo(&idle, InfoType_IdleTickCount,\n'
    '                                     CUR_PROCESS_HANDLE,\n'
    '                                     (u64)core))) {   /* Core0..Core3 = 0..3 */\n'
    '      const u64 d = (idle >= prev) ? (idle - prev) : 0;\n'
    '      prev = idle;\n'
    '      nsx_core_pct[core] =\n'
    '        (d >= dt) ? 0u : (unsigned)(100u - (100ull * d) / dt);\n'
    '    } else {\n'
    '      nsx_core_query_fail = 1;   /* FW < 13.0, nebo chyba subsystemu */\n'
    '    }\n'
    '  }\n'
    '  return NULL;\n'
    '}\n'
    '\n'
    'static void *nsx_core_report(void *unused) {\n'
    '  (void)unused;\n'
    '  unsigned last[NSX_CORE_SAMPLERS] = { 0, 0, 0, 0 };\n'
    '  int silent = 0;\n'
    '  for (;;) {\n'
    '    svcSleepThread(1000000000ULL);\n'
    '    if (nsx_core_query_fail && !silent) {\n'
    '      fprintf(stdout, "[CI] load: IdleTickCount nedostupne (FW 13.0+?) — bez per-core %%\\n");\n'
    '      fflush(stdout);\n'
    '      silent = 1;\n'
    '      continue;\n'
    '    }\n'
    '    if (!silent && (!last[0] && !last[1] && !last[2] && !last[3]))\n'
    '      fprintf(stdout, "[CI] load: per-core busy%% (InfoType_IdleTickCount); role->core viz radky thread #N\\n");\n'
    '    char buf[96];\n'
    '    int off = snprintf(buf, sizeof(buf), "[CI] load:");\n'
    '    for (int i = 0; i < NSX_CORE_SAMPLERS && off < (int)sizeof(buf) - 24; i++)\n'
    '      off += snprintf(buf + off, sizeof(buf) - (size_t)off,\n'
    '                      " c%d=%u%%", i, nsx_core_pct[i]);\n'
    '    memcpy(last, (unsigned[]){ nsx_core_pct[0], nsx_core_pct[1],\n'
    '                                nsx_core_pct[2], nsx_core_pct[3] },\n'
    '           sizeof(last));\n'
    '    fprintf(stdout, "%s\\n", buf);\n'
    '    fflush(stdout);\n'
    '  }\n'
    '  return NULL;\n'
    '}\n'
    '\n'
    '/* Startuje jednou: 4 samplery (kazdy na svem jadre) + 1 reporter. */\n'
    'static void nsx_core_probe_start(void) {\n'
    '  if (__sync_bool_compare_and_swap(&nsx_core_started, 0, 1)) {\n'
    '    pthread_t t;\n'
    '    for (int i = 0; i < NSX_CORE_SAMPLERS; i++)\n'
    '      if (pthread_create(&t, NULL, nsx_core_sampler,\n'
    '                         (void *)(uintptr_t)i) == 0)\n'
    '        pthread_detach(t);\n'
    '    if (pthread_create(&t, NULL, nsx_core_report, NULL) == 0)\n'
    '      pthread_detach(t);\n'
    '  }\n'
    '}\n'
)

edits = [
    ('#include "util.h"\n', head),
    (tramp_old, tramp_new),
    (tail_anchor, tail),
]

missing = []
for old, new in edits:
    if old not in text:
        missing.append(old.splitlines()[0][:72])
    text = text.replace(old, new, 1)

if missing:
    print("ci_load: KOTVA NEJEDNA:", file=sys.stderr)
    for m in missing:
        print("  " + m, file=sys.stderr)
    sys.exit(2)

open(path, "w", encoding="utf-8", errors="surrogateescape").write(text)
print("ci_load: ok, %d editu" % len(edits))
sys.exit(0)