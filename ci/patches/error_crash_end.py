"""Patch source/error.c a source/crash.c — build 55: konec session i při pádu.

`ci_session_end()` (ci_core_log.c) se z atexit na Switchi nikdy nezavolá —
port končí přes __libnx_exit(), který atexit neběží (viz komentář tamtéž).
Proto se volá explicitně na všech třech koncích procesu:

  source/main.c   -> ci_session_end("exit")    [patch main_hacks_markers.py]
  source/error.c  -> ci_session_end("fatal")   [tenhle patch]
  source/crash.c  -> ci_session_end("CRASH")   [tenhle patch]

V logu se tak konečně pozná, jestli session skončila čistě, na fatální chybě,
nebo na výjimce — v buildu 54 chyběl konec u všech pěti session a vypadalo to
jako pět tvrdých pádů (nebylo).

Symbol je deklarován weak: kdyby log modul nebyl v balíku (GL build bez
imports.c patche), volání se na linku zahodí.

Použití: python3 ci/patches/error_crash_end.py <cesta k error.c> <cesta k crash.c>
"""
import sys

if len(sys.argv) < 3:
    print("použití: error_crash_end.py <error.c> <crash.c>")
    sys.exit(2)

DECL = "/* NSX_SESSION_END (build 55): log modulu rekni, jak session skončila. */\n" \
       "extern void ci_session_end(const char *why) __attribute__((weak));\n"

results = []

# ------------------------------------------------------------------ error.c
path = sys.argv[1]
text = open(path, encoding="utf-8", errors="surrogateescape").read()
if "NSX_SESSION_END" not in text:
    anchor = "  consoleExit(NULL);\n  exit(1);\n"
    if anchor in text:
        text = text.replace(
            anchor,
            "  consoleExit(NULL);\n"
            + DECL +
            "  if (ci_session_end) ci_session_end(\"fatal\");\n"
            "  exit(1);\n", 1)
        results.append("error.c: ok")
    else:
        results.append("error.c: kotva consoleExit/exit(1) nenalezena")
else:
    results.append("error.c: už patchnuto")
open(path, "w", encoding="utf-8", errors="surrogateescape").write(text)

# ------------------------------------------------------------------ crash.c
path = sys.argv[2]
text = open(path, encoding="utf-8", errors="surrogateescape").read()
if "NSX_SESSION_END" not in text:
    anchor = "  (void)ctx;\n  svcExitProcess();\n"
    if anchor in text:
        text = text.replace(
            anchor,
            "  (void)ctx;\n"
            + DECL +
            "  /* NSX_SESSION_END: flush logu + značka, že to byl pád. */\n"
            "  if (ci_session_end) ci_session_end(\"CRASH\");\n"
            "  svcExitProcess();\n", 1)
        results.append("crash.c: ok")
    else:
        results.append("crash.c: kotva svcExitProcess nenalezena")
else:
    results.append("crash.c: už patchnuto")
open(path, "w", encoding="utf-8", errors="surrogateescape").write(text)

print("error/crash: " + ", ".join(results))
sys.exit(0 if all("nenalezena" not in r for r in results) else 1)
