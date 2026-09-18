"""Patch source/main.c — build 55: přepínače jádra markerem na SD + konec session.

Dvě věci (markery NSX_HACK_MARKERS a NSX_SESSION_END):

1) SPEEDHACKY BEZ REBUILDU. Jádro čte svoje volby z prefs (nethersx2.ini),
   které launcher nastavuje; port je přepisuje v run_startup_sequence()
   (např. `prefs_set_bool("EmuCore/Speedhacks/fastCDVD", false)`). Stejnou
   cestou umíme přepsat MTVU / Instant VU1 / VU flag hack / EE cycle rate
   podle markerů na SD, takže A/B test nevyžaduje nový build:

     /switch/nethersx2/ci-mtvu=0        vypne EmuCore/Speedhacks/vuThread
     /switch/nethersx2/ci-mtvu=1        zapne
     /switch/nethersx2/ci-vu1instant=0|1
     /switch/nethersx2/ci-vuflaghack=0|1
     /switch/nethersx2/ci-eecycle=0..3  (EECycleRate, default launcheru 0)
     /switch/nethersx2/ci-eeskip=0..3   (EECycleSkip, default launcheru 0)

   Soubor je prostě znak '0'/'1' (nebo '0'..'3'); cokoli jiného = beze změny.
   Každé přepsání se zapíše do logu, aby bylo v datech vidět, co běželo.

2) KONEC SESSION. main.c končí přes `__libnx_exit(0)`, což v libnx
   (nx/source/runtime/init.c:190) volá __appExit + __nx_exit a NEBĚŽÍ při tom
   atexit ani flush stdia. Proto v logu z buildu 54 není ani `session end`,
   ani posledních ~26 sekund session 5 — 64KiB buffer se zahodil. Tady se
   buffer explicitně flushuje těsně před exit() (a error.c/crash.c totéž).

POZOR (HANDOFF §8 bod 13): C kód níž je v OBYČEJNÝCH python řetězcích, takže
každé zpětné lomítko, které má přežít do C, je zdvojené ('\\\\0' -> C '\\0').

Použití: python3 ci/patches/main_hacks_markers.py <cesta k main.c>
"""
import sys

path = sys.argv[1]
text = open(path, encoding="utf-8", errors="surrogateescape").read()

done = 0
edits = []

# ------------------------------------------------------------------ speedhacks
if "NSX_HACK_MARKERS" not in text:
    anchor = '  prefs_set_bool("EmuCore/Speedhacks/fastCDVD", false);\n'
    block = (
        "\n"
        "  /* NSX_HACK_MARKERS (build 55): prepinace jadra markerem na SD, at se daji\n"
        "   * A/B testovat bez rebuildu. Marker = soubor /switch/nethersx2/ci-<volba>\n"
        "   * s jedinym znakem '0'..'3'. Bez markeru se nedela NIC (plati launcher).\n"
        "   * Cilove klice jsou presne ty, ktere nastavuje launcher\n"
        "   * (launcher/source/main.cpp: EmuCore/Speedhacks/*). */\n"
        "  {\n"
        "    struct { const char *mark; const char *key; } nsx_hacks[] = {\n"
        "      { \"/switch/nethersx2/ci-mtvu\",       \"EmuCore/Speedhacks/vuThread\" },\n"
        "      { \"/switch/nethersx2/ci-vu1instant\", \"EmuCore/Speedhacks/vu1Instant\" },\n"
        "      { \"/switch/nethersx2/ci-vuflaghack\", \"EmuCore/Speedhacks/vuFlagHack\" },\n"
        "    };\n"
        "    for (unsigned nsx_i = 0; nsx_i < sizeof(nsx_hacks) / sizeof(nsx_hacks[0]); nsx_i++) {\n"
        "      FILE *nsx_f = fopen(nsx_hacks[nsx_i].mark, \"r\");\n"
        "      if (!nsx_f) continue;\n"
        "      const int nsx_c = fgetc(nsx_f);\n"
        "      fclose(nsx_f);\n"
        "      if (nsx_c != '0' && nsx_c != '1') continue;\n"
        "      prefs_set_bool(nsx_hacks[nsx_i].key, nsx_c == '1');\n"
        "      fprintf(stdout, \"[CI] hack: %s = %c -> %s\\n\", nsx_hacks[nsx_i].mark, nsx_c,\n"
        "              nsx_hacks[nsx_i].key);\n"
        "      fflush(stdout);\n"
        "    }\n"
        "    struct { const char *mark; const char *key; } nsx_cycles[] = {\n"
        "      { \"/switch/nethersx2/ci-eecycle\", \"EmuCore/Speedhacks/EECycleRate\" },\n"
        "      { \"/switch/nethersx2/ci-eeskip\",  \"EmuCore/Speedhacks/EECycleSkip\" },\n"
        "    };\n"
        "    for (unsigned nsx_i = 0; nsx_i < sizeof(nsx_cycles) / sizeof(nsx_cycles[0]); nsx_i++) {\n"
        "      FILE *nsx_f = fopen(nsx_cycles[nsx_i].mark, \"r\");\n"
        "      if (!nsx_f) continue;\n"
        "      const int nsx_c = fgetc(nsx_f);\n"
        "      fclose(nsx_f);\n"
        "      if (nsx_c < '0' || nsx_c > '3') continue;\n"
        "      prefs_set_int(nsx_cycles[nsx_i].key, nsx_c - '0');\n"
        "      fprintf(stdout, \"[CI] hack: %s = %c -> %s\\n\", nsx_cycles[nsx_i].mark, nsx_c,\n"
        "              nsx_cycles[nsx_i].key);\n"
        "      fflush(stdout);\n"
        "    }\n"
        "  }\n"
    )
    if anchor in text:
        edits.append((anchor, anchor + block))
    else:
        print("main.c: kotva fastCDVD nenalezena — speedhack markery se nepridaji")

# --------------------------------------------------------------- konec session
if "NSX_SESSION_END" not in text:
    exit_anchor = (
        "  extern void NX_NORETURN __libnx_exit(int rc);\n"
        "  __libnx_exit(0);\n"
    )
    if exit_anchor in text:
        edits.append((exit_anchor,
            "  /* NSX_SESSION_END (build 55): __libnx_exit nebezi atexit ani ne-flushuje\n"
            "   * stdio (libnx nx/source/runtime/init.c:190), takze bez tohohle v logu\n"
            "   * chybel konec session i poslednich ~26 s hry (64KiB buffer). */\n"
            "  { extern void ci_session_end(const char *why); ci_session_end(\"exit\"); }\n"
            + exit_anchor))
    else:
        print("main.c: kotva __libnx_exit(0) nenalezena")

for find, repl in edits:
    if repl in text:
        done += 1
    elif find in text:
        text = text.replace(find, repl, 1)
        done += 1
    else:
        print("main.c: kotva nenalezena: %r" % find[:60])

open(path, "w", encoding="utf-8", errors="surrogateescape").write(text)
print("main.c: hack markery + session end %d/%d" % (done, len(edits)))
sys.exit(0 if done == len(edits) else 1)
