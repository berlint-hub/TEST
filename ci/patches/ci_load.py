"""Patch source/pthr.c — per-thread CPU load (EE/MTGS/VU1/workers/audio).

Co přidává (NSX_CORE_LOAD):
  1. registry threadů: kazdy thread prochazejici thread_trampoline se zaeviduje
     se sekvenci #N (stejne cislo, jakym ho ocisluje pthr_diag "[CI] thread #N").
     EE/BG thready si dropnou tag pres pthr_pin_ee_core / pthr_pin_bg_core.
  2. monitor thread (spawnuty lenive z prvni registrace): kazdou sekundu precete
     InfoType_ThreadTickCount (25, FW 13.0+) na kazdem zaregistrovanem threadu
     a vypise  "[CI] load: <label>=<pct>% @m<h>"  do stdout.

pct = podil system ticku (svcGetSystemTick) stravenych na threadu v okne 1 s —
0..100, zola bez zavislosti na pinningu/afinitach. Na FW < 13.0 vypise jeden
radku a skonci.

Použití: python3 ci/patches/ci_load.py <cesta k pthr.c>
(aplikovat PO pthr_diag.py — kotvy jsou ale nezávislé, snesou i opacne poradi)
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
    '/* NSX_CORE_LOAD: per-thread CPU%% (InfoType_ThreadTickCount, FW 13.0+).\n'
    ' * Definice jsou na konci souboru. */\n'
    'static void nsx_load_reg(void);\n'
    'static void nsx_load_tag(const char *tag);\n'
)

tramp_old = '  void *ret = s.start(s.arg);\n'

tramp_new = (
    '  /* NSX_CORE_LOAD: zaeviduj se (cislo sedi s pthr_diag "[CI] thread #N"). */\n'
    '  nsx_load_reg();\n'
    '  void *ret = s.start(s.arg);\n'
)

eanchor = ('void pthr_pin_ee_core(void) {\n',
           'void pthr_pin_ee_core(void) {\n  nsx_load_tag("EE");\n')
bganchor = ('void pthr_pin_bg_core(void) {\n',
            'void pthr_pin_bg_core(void) {\n  nsx_load_tag("BG");\n')

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
    '/* NSX_CORE_LOAD: vychej CPU%% na kazdym emulacnim threadu.            */\n'
    '/* ------------------------------------------------------------------ */\n'
    '#define NSX_LOAD_MAX 16\n'
    '\n'
    'typedef struct {\n'
    '  pthread_t t;\n'
    '  int       seq;      /* poradi vytvoreni (shodnuje se s pthr_diag #N) */\n'
    '  u64       prev;     /* posledni InfoType_ThreadTickCount */\n'
    '  char      tag[8];   /* "EE"/"BG"/"" (neznama role) */\n'
    '} nsx_load_ent;\n'
    '\n'
    'static Mutex           nsx_load_lock;\n'
    'static nsx_load_ent    nsx_load_ent[NSX_LOAD_MAX];\n'
    'static int             nsx_load_n;\n'
    'static int             nsx_load_seq;\n'
    'static int             nsx_load_mon_started;\n'
    'static int             nsx_load_ok = -1;  /* 1 = funguje, 3 = FW < 13.0 */\n'
    '\n'
    'static void *nsx_load_monitor(void *unused);\n'
    '\n'
    'static void nsx_load_spawn(void) {\n'
    '  if (nsx_load_mon_started)\n'
    '    return;\n'
    '  nsx_load_mon_started = 1;\n'
    '  pthread_t mon;\n'
    '  if (pthread_create(&mon, NULL, nsx_load_monitor, NULL) == 0)\n'
    '    pthread_detach(mon);\n'
    '}\n'
    '\n'
    'static int nsx_load_find(pthread_t t) {\n'
    '  int i;\n'
    '  for (i = 0; i < nsx_load_n; i++)\n'
    '    if (nsx_load_ent[i].t == t)\n'
    '      return i;\n'
    '  return -1;\n'
    '}\n'
    '\n'
    'static void nsx_load_reg(void) {\n'
    '  pthread_t self = pthread_self();\n'
    '  mutexLock(&nsx_load_lock);\n'
    '  if (nsx_load_find(self) < 0 && nsx_load_n < NSX_LOAD_MAX) {\n'
    '    nsx_load_ent[nsx_load_n].t   = self;\n'
    '    nsx_load_ent[nsx_load_n].seq = ++nsx_load_seq;\n'
    '    nsx_load_ent[nsx_load_n].prev = 0;\n'
    '    nsx_load_ent[nsx_load_n].tag[0] = 0;\n'
    '    nsx_load_n++;\n'
    '  }\n'
    '  mutexUnlock(&nsx_load_lock);\n'
    '  nsx_load_spawn();\n'
    '}\n'
    '\n'
    'static void nsx_load_tag(const char *tag) {\n'
    '  pthread_t self = pthread_self();\n'
    '  mutexLock(&nsx_load_lock);\n'
    '  int i = nsx_load_find(self);\n'
    '  if (i < 0 && nsx_load_n < NSX_LOAD_MAX) {\n'
    '    /* thread mimo trampolinu (napr. audio mixer pres newlib pthread) */\n'
    '    i = nsx_load_n++;\n'
    '    nsx_load_ent[i].t    = self;\n'
    '    nsx_load_ent[i].seq  = ++nsx_load_seq;\n'
    '    nsx_load_ent[i].prev = 0;\n'
    '    nsx_load_ent[i].tag[0] = 0;\n'
    '  }\n'
    '  if (i >= 0)\n'
    '    snprintf(nsx_load_ent[i].tag, sizeof(nsx_load_ent[i].tag), "%s", tag);\n'
    '  mutexUnlock(&nsx_load_lock);\n'
    '}\n'
    '\n'
    'static void *nsx_load_monitor(void *unused) {\n'
    '  (void)unused;\n'
    '  u64 last = svcGetSystemTick();\n'
    '  int primed = 0;\n'
    '  for (;;) {\n'
    '    svcSleepThread(1000000000ULL);\n'
    '    u64 now = svcGetSystemTick();\n'
    '    u64 dt  = now - last;\n'
    '    last    = now;\n'
    '    if (dt == 0)\n'
    '      continue;\n'
    '\n'
    '    mutexLock(&nsx_load_lock);\n'
    '\n'
    '    /* prvni pruchod: jen natankuj prev, bez tisku */\n'
    '    if (!primed) {\n'
    '      for (int i = 0; i < nsx_load_n; i++) {\n'
    '        u64 ticks = 0;\n'
    '        if (R_SUCCEEDED(svcGetInfo(&ticks, InfoType_ThreadTickCount,\n'
    '                                  nsx_load_ent[i].t, (u64)TickCountInfo_Total)))\n'
    '          nsx_load_ent[i].prev = ticks;\n'
    '      }\n'
    '      primed = 1;\n'
    '      mutexUnlock(&nsx_load_lock);\n'
    '      continue;\n'
    '    }\n'
    '\n'
    '    char buf[NSX_LOAD_MAX * 32 + 32];\n'
    '    int off = snprintf(buf, sizeof(buf), "[CI] load:");\n'
    '    int queried = 0, failed = 0;\n'
    '    for (int i = 0; i < nsx_load_n && off < (int)sizeof(buf) - 24; i++) {\n'
    '      u64 ticks = 0;\n'
    '      if (R_SUCCEEDED(svcGetInfo(&ticks, InfoType_ThreadTickCount,\n'
    '                                nsx_load_ent[i].t, (u64)TickCountInfo_Total)))\n'
    '        queried++;\n'
    '      else\n'
    '        failed++;\n'
    '      u64 d = (ticks >= nsx_load_ent[i].prev) ? (ticks - nsx_load_ent[i].prev) : 0;\n'
    '      nsx_load_ent[i].prev = ticks;\n'
    '      unsigned pct = (d >= dt) ? 100u : (unsigned)((100ull * d) / dt);\n'
    '      s32 pcore = -1;\n'
    '      u64 amask = 0;\n'
    '      svcGetThreadCoreMask(&pcore, &amask, nsx_load_ent[i].t);\n'
    '      char num[12];\n'
    '      const char *label = (nsx_load_ent[i].tag[0]) ? nsx_load_ent[i].tag\n'
    '                            : (snprintf(num, sizeof(num), "#%d", nsx_load_ent[i].seq), num);\n'
    '      if (pcore >= 0 && pcore < 4)\n'
    '        off += snprintf(buf + off, sizeof(buf) - (size_t)off,\n'
    '                        " %s=%u%%@c%d", label, pct, pcore);\n'
    '      else\n'
    '        off += snprintf(buf + off, sizeof(buf) - (size_t)off,\n'
    '                        " %s=%u%%@m%llx", label, pct, (unsigned long long)(amask & 0xf));\n'
    '    }\n'
    '    mutexUnlock(&nsx_load_lock);\n'
    '\n'
    '    if (nsx_load_ok < 0)\n'
    '      nsx_load_ok = (queried == 0 && failed > 0) ? 3 : 1;\n'
    '    if (nsx_load_ok == 3) {\n'
    '      fprintf(stdout, "[CI] load: ThreadTickCount nedostupnej (FW 13.0+)\\n");\n'
    '      fflush(stdout);\n'
    '      return NULL;\n'
    '    }\n'
    '    fprintf(stdout, "%s\\n", buf);\n'
    '    fflush(stdout);\n'
    '  }\n'
    '}\n'
)

edits = [
    ('#include "util.h"\n', head),
    (tramp_old, tramp_new),
    (eanchor[0], eanchor[1]),
    (bganchor[0], bganchor[1]),
    (tail_anchor, tail),
]

missing = []
for old, new in edits:
    if old not in text:
        missing.append(old.splitlines()[0][:70])
    text = text.replace(old, new, 1)

if missing:
    print("ci_load: KOTVA NEJEDNA:", file=sys.stderr)
    for m in missing:
        print("  " + m, file=sys.stderr)
    sys.exit(2)

open(path, "w", encoding="utf-8", errors="surrogateescape").write(text)
print("ci_load: ok, %d editu" % len(edits))
sys.exit(0)