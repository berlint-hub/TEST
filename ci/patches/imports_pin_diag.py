"""Patch source/imports.c — build 55: identita emulačních threadů do logu.

Port má v tabulce symbolů `prctl` a `sched_setaffinity` jako prázdné stuby
(komentář u nich říká „core pins its own threads via libnx"). Jádro si tedy
thready pojmenovává a pinuje samo — a my jsme to dosud zahazovali, takže jsme
NIKDY nevěděli, který thread je MTGS a který VU1. Bez toho se nedá udělat
„VU1 → core 2, MTGS → core 1" (hypotéza č. 1 z VU-GS-OPTIMALIZACE.md) jinak
než hádáním z pořadí vytvoření.

Co tenhle patch dělá (marker NSX_THREAD_IDENT, chování hry nemění):
  * prctl(PR_SET_NAME, name)  -> [CI] prctl PR_SET_NAME: tid=… -> "MTGS"
    a rovnou zkusí pin podle pravidla „jméno = jádro" z ci-pin.conf,
  * prctl(PR_GET_NAME, buf)   -> vyplní buffer zapamatovaným jménem,
  * sched_setaffinity(tid,…)  -> [CI] affinity (zadost jadra): … -> ZAHOZENO
    (afinitu dál NEPROVÁDÍME — pinování řídí výhradně ci-pin.conf, aby se
    jádro a vrstva nepraly o stejná jádra),
  * výpis NENALEZENÝCH symbolů: kdyby jádro chtělo pthread_setname_np (v
    tabulce není), uvidíme to v logu místo tichého selhání.

Použití: python3 ci/patches/imports_pin_diag.py <cesta k imports.c>
"""
import sys

path = sys.argv[1]
text = open(path, encoding="utf-8", errors="surrogateescape").read()
if "NSX_THREAD_IDENT" in text:
    print("imports.c: thread ident už patchnuto")
    sys.exit(0)

PRCTL_ANCHOR = "static int prctl_fake(int option, ...) { (void)option; return 0; }\n"
PRCTL_REPL = (
    "/* NSX_THREAD_IDENT (build 55): jádro si pojmenovává thready přes prctl —\n"
    " * dosud jsme to zahazovali, takže nebylo poznat, který thread je MTGS a\n"
    " * který VU1. Teď se jméno zaloguje (a případně použije k pinu). */\n"
    "/* stdarg.h/string.h už imports.c má. Jméno threadu drží pthr_pin.c v TLS,\n"
    " * protože PR_GET_NAME musí vrátit jméno VOLAJÍCÍHO threadu — sdílený\n"
    " * static buffer by vrátil jméno toho, kdo si ho nastavil naposled. */\n"
    "extern void pthr_pin_set_name(const char *name);\n"
    "extern const char *pthr_pin_self_name(void);\n"
    "extern void pthr_pin_affinity_note(int tid, unsigned long long mask);\n"
    "#define NSX_PR_SET_NAME 15\n"
    "#define NSX_PR_GET_NAME 16\n"
    "static int prctl_fake(int option, ...) {\n"
    "  va_list nsx_ap;\n"
    "  va_start(nsx_ap, option);\n"
    "  void *nsx_arg = va_arg(nsx_ap, void *);\n"
    "  va_end(nsx_ap);\n"
    "  if (option == NSX_PR_SET_NAME && nsx_arg) {\n"
    "    pthr_pin_set_name((const char *)nsx_arg);\n"
    "  } else if (option == NSX_PR_GET_NAME && nsx_arg) {\n"
    "    const char *nsx_nm = pthr_pin_self_name();\n"
    "    memset(nsx_arg, 0, 16);\n"
    "    if (nsx_nm)\n"
    "      strncpy((char *)nsx_arg, nsx_nm, 15);\n"
    "  }\n"
    "  return 0;\n"
    "}\n"
)

AFFINITY_ANCHOR = (
    "static int sched_setaffinity_fake(int pid, size_t sz, const void *mask) {\n"
    "  (void)pid; (void)sz; (void)mask; return 0; // core pins its own threads via libnx\n"
    "}\n"
)
AFFINITY_REPL = (
    "static int sched_setaffinity_fake(int pid, size_t sz, const void *mask) {\n"
    "  /* NSX_THREAD_IDENT (build 55): jádro si myslí, že pinuje; port to zahazuje.\n"
    "   * Poprvé to aspoň hlásíme — z logu poznáme, které thready si jádro chtělo\n"
    "   * dát na která jádra. Skutečné pinování řídí ci-pin.conf (pthr_pin.c). */\n"
    "  unsigned long long nsx_bits = 0;\n"
    "  if (mask && sz > 0 && sz <= sizeof(nsx_bits))\n"
    "    memcpy(&nsx_bits, mask, sz);\n"
    "  pthr_pin_affinity_note(pid, nsx_bits);\n"
    "  (void)sz;\n"
    "  return 0;\n"
    "}\n"
)

edits = [
    (PRCTL_ANCHOR, PRCTL_REPL),
    (AFFINITY_ANCHOR, AFFINITY_REPL),
    # gettid_fake je v libc_shim.c — v imports.c musí být vidět alespoň přes
    # extern (prototyp výše). string.h už imports.c používá (strncpy/memcpy).
]

done = 0
for find, repl in edits:
    if repl in text:
        done += 1
    elif find in text:
        text = text.replace(find, repl, 1)
        done += 1
    else:
        print("imports.c: kotva nenalezena: %r" % find[:60])

# Volitelně: log nenalezených symbolů, aby „pthread_setname_np" nezmizelo tiše.
LOOKUP_HINT = "NSX_MISSING_SYM"
if LOOKUP_HINT not in text:
    print("imports.c: (info) log nenalezených symbolů se přidává jen ručně — "
          "tabulka lookupů nemá jednotnou kotvu")

open(path, "w", encoding="utf-8", errors="surrogateescape").write(text)
print("imports.c: thread ident %d/%d" % (done, len(edits)))
sys.exit(0 if done == len(edits) else 1)
