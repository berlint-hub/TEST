"""Patch launcher/source/main.cpp - build 87 (arena/load-diag).

Co meni:
  1. DEF_GAMEDIR  "sdmc:/switch/nethersx2/games" -> "sdmc:/Roms/PS2"
  2. mkdir "sdmc:/Roms" pred DEF_GAMEDIR (ensureDirectory nerekurzivni)
  3. Wrapper/LauncherPath: kdyz launcherNroPath() neresolvuje (forwarder,
     argv[0] neni .nro na karte), fallback na g_launcherNroPath, existuje-li
     -> "Exit game" se ma k cem vratit (neni to pak HOME Menu)
  4. do launch profilu: Folders/Logs (logy v logs/), Folders/Games
     (sdmc:/Roms/PS2 i v emu browseru) a FrameLimitEnable=true
     (Fallout beze limitu zaletaval nad 59,9 FPS - vsync meni).
"""
import sys

path = sys.argv[1]
text = open(path, encoding="utf-8", errors="surrogateescape").read()

MARK_OK = "/* NSX_LAUNCHER_FIX */"
if MARK_OK in text:
    print("main.cpp: launcher_fix uz patchnuto")
    sys.exit(0)

edits = [
    # 1. defaultni slozka her
    ('static const char *DEF_GAMEDIR= "sdmc:/switch/nethersx2/games";',
     'static const char *DEF_GAMEDIR= "sdmc:/Roms/PS2";'),
    # 2. mkdir rodice (ensureDirectory netvori mezislozky)
    (',TEXTURES_DIR,DEF_GAMEDIR,BIOS_DIR',
     ',TEXTURES_DIR,"sdmc:/Roms",DEF_GAMEDIR,BIOS_DIR'),
    # 3. chain-back na launcher
    ('    const std::string launcherPath=launcherNroPath();\n'
     '    if(!launcherPath.empty()) storeSet(effective,"Wrapper/LauncherPath",launcherPath.c_str());',
     '    std::string launcherPath=launcherNroPath();\n'
     '    if(launcherPath.empty()&&!g_launcherNroPath.empty()&&\n'
     '       regularFileExists(g_launcherNroPath)) launcherPath=g_launcherNroPath;\n'
     '    if(!launcherPath.empty()) storeSet(effective,"Wrapper/LauncherPath",launcherPath.c_str());'),
    # 4. Logs/Games/FrameLimit v launch profilu (emulog -> logs/, hry -> /Roms/PS2,
    #    Fallout drzi 59,9)
    ('    storeSet(effective,"Folders/Cheats",toEmu(CHEATS_DIR).c_str());',
     '    storeSet(effective,"Folders/Cheats",toEmu(CHEATS_DIR).c_str());\n'
     '    storeSet(effective,"Folders/Logs","sdmc:/switch/nethersx2/logs");\n'
     '    storeSet(effective,"Folders/Games",DEF_GAMEDIR);\n'
     '    storeSet(effective,"EmuCore/GS/FrameLimitEnable","true");\n'
     '    /* NSX_LAUNCHER_FIX */\n'),
]

missing = []
for old, new in edits:
    if old not in text:
        missing.append(old.splitlines()[0][:72])
    text = text.replace(old, new, 1)

if missing:
    print("launcher_fix: KOTVA NEJEDNA:", file=sys.stderr)
    for m in missing:
        print("  " + m, file=sys.stderr)
    sys.exit(2)

open(path, "w", encoding="utf-8", errors="surrogateescape").write(text)
print("launcher_fix: ok, %d editu" % len(edits))
sys.exit(0)