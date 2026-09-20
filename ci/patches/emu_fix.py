"""Patch source/main.c - chain-back na launcher po "Exit game" (build 87).

Problem: na karte po "Exit game" z quick menu proces skonci a misto navratu do
gridu her skoci rovnou do HOME Menu. Pris timeout: envSetNextLoad(launcher)
se vykona jen kdyz prefs "Wrapper/LauncherPath" sedi na existujici .nro -
launcherNroPath() v launcherovi vraca prazdne, kdyz argv[0] neresolvuje
(forwarder), a pak se klic do nethersx2.ini vubec nezapise.

Zde:
  * kdyz Wrapper/LauncherPath chybi/dead -> fallback "sdmc:/switch/NetherSX2.nro"
    (a .nro v DATA_ROOT),
  * rozhodnuti se zapise do launcher-diag.log i core logu (introspekce),
  * envSetNextLoad se zkusi vzdy, kdyz candidate existuje a env to zere.
"""
import sys

path = sys.argv[1]
text = open(path, encoding="utf-8", errors="surrogateescape").read()

MARK_OK = "/* NSX_EMU_EXIT */"
if MARK_OK in text:
    print("main.c: emu_fix uz patchnuto")
    sys.exit(0)

old = (
    '  const int has_next_load = envHasNextLoad();\n'
    '  const char *launcher_path = prefs_get_string("Wrapper/LauncherPath", "");\n'
    '  if (g_quick_menu_exit_requested && has_next_load && launcher_path[0])\n'
    '    envSetNextLoad(launcher_path, launcher_path);\n'
)

new = (
    '  /* NSX_EMU_EXIT: navrat do launchere po Exit game za kazdou cenu. */\n'
    '  static const char *const nsx_launcher_candidates[] = {\n'
    '      "sdmc:/switch/NetherSX2.nro",\n'
    '      "sdmc:/switch/nethersx2/NetherSX2.nro",\n'
    '      NULL,\n'
    '  };\n'
    '  const int has_next_load = envHasNextLoad();\n'
    '  struct stat nsx_st;\n'
    '  const char *launcher_path = prefs_get_string("Wrapper/LauncherPath", "");\n'
    '  if (g_quick_menu_exit_requested && has_next_load &&\n'
    '      !(launcher_path && launcher_path[0] &&\n'
    '        stat(launcher_path, &nsx_st) == 0)) {\n'
    '    launcher_path = NULL;\n'
    '    for (int i = 0; nsx_launcher_candidates[i]; i++)\n'
    '      if (stat(nsx_launcher_candidates[i], &nsx_st) == 0) {\n'
    '        launcher_path = nsx_launcher_candidates[i];\n'
    '        break;\n'
    '      }\n'
    '  }\n'
    '  if (g_quick_menu_exit_requested) {\n'
    '    if (mkdir("sdmc:/switch/nethersx2/logs", 0755) != 0 && errno != EEXIST) { /* neni fatal */ }\n'
    '    FILE *nsx_diag = fopen("sdmc:/switch/nethersx2/logs/launcher-diag.log", "a");\n'
    '    if (nsx_diag) {\n'
    '      fprintf(nsx_diag, "  emu exit: launcher=%s exists=%d has_next=%d\\n",\n'
    '              launcher_path ? launcher_path : "(prazdne)",\n'
    '              launcher_path ? (stat(launcher_path, &nsx_st) == 0) : 0,\n'
    '              has_next_load);\n'
    '      fclose(nsx_diag);\n'
    '    }\n'
    '    fprintf(stdout, "[CI] exit: navrat do launchere %s\\n",\n'
    '            launcher_path && launcher_path[0] ? launcher_path : "(zadny)");\n'
    '    fflush(stdout);\n'
    '  }\n'
    '  if (g_quick_menu_exit_requested && has_next_load &&\n'
    '      launcher_path && launcher_path[0])\n'
    '    envSetNextLoad(launcher_path, launcher_path);\n'
    '  /* NSX_EMU_EXIT */\n'
)

if old not in text:
    print("emu_fix: KOTVA NEJEDNA:", file=sys.stderr)
    print("  " + old.splitlines()[0], file=sys.stderr)
    sys.exit(2)

text = text.replace(old, new, 1)
open(path, "w", encoding="utf-8", errors="surrogateescape").write(text)
print("emu_fix: ok")
sys.exit(0)