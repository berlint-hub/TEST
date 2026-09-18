"""Patch launcher/source/main.cpp — build 57: launcher už neshazuje GPU.

CO SE DĚLO (a proč to byla naše chyba, že jsme to dřív nenašli):
  Launcher volá `appletSetCpuBoostMode(ApmCpuBoostMode_FastLoad)` na ŠESTI
  místech — tři páry (FastLoad → Normal):

    * `executePaste()`   (ř. ~3681/3699)  — kopírování souborů v UI
    * `runBusyTask()`    (ř. ~3714/3743)  — „Working..." úlohy (SMB mount, …)
    * `main()`           (ř. ~7826/7853)  — extrakce jader z romfs na SD
                                             PŘED spuštěním hry

  `ApmCpuBoostMode_FastLoad` podle libnx (nx/include/switch/services/apm.h:21)
  znamená:

      /// Boost CPU. Additionally, throttle GPU to minimum. Use performance
      /// configurations 0x92220009 (Docked) and 0x9222000A (Handheld) …

  `appletSetCpuBoostMode` přitom posílá command 66 na `ICommonStateGetter`
  (libnx nx/source/services/applet.c:1031) — tedy **appletu**, ne procesu.
  Konfigurace taktů je globální a přetrvá i do .nro, které launcher vzápětí
  spustí.

  Do buildu 47 emulátor po 60 framech zavolal `cpu_boost(0)`, čímž to shodil
  zpátky na Normal. Build 48 `cpu_boost()` vyprázdnil (správně — FastLoad
  srážel GPU i jemu), ale **tím zmizel i reset**. Od té doby launcher GPU
  zamkne na minimum a nikdo ho nepustí zpátky → „když zapnu appku a hru,
  jede mi GPU na minimum".

  Poznámka: dřívější audit tvrdil „`cpu_boost()` v source/util.c je jediné
  místo v portu, kde se takty nastavují (ověřeno code searchem: CpuBoostMode
  je jen v util.c)". To byla **chyba** — search se díval jen na emulátor,
  ne na launcher.

CO TENHLE PATCH DĚLÁ:
  Zakomentuje všech šest volání. Ultrahand governor uživatele tak zůstává
  jediným, kdo takty řídí. Rychlost extrakce jader se může mírně změnit
  (FastLoad zvedá CPU), ale GPU pak neskončí na 76 MHz — a to je přesně ten
  obchod, který uživatel chce.

Použití: python3 ci/patches/launcher_no_boost.py <cesta k launcher/source/main.cpp>
"""
import re
import sys

CALL_RE = re.compile(r"^(\s*)appletSetCpuBoostMode\((ApmCpuBoostMode_\w+)\);\s*$")

NOTE = (
    "/* NSX_NO_BOOST (build 57): FastLoad = „Boost CPU. Additionally, throttle\n"
    "{i} * GPU to minimum"
    '" (libnx apm.h). appletSetCpuBoostMode posílá command 66 na\n'
    "{i} * applet, takže ta konfigurace je GLOBÁLNÍ a přetrvá i do emulátoru,\n"
    "{i} * který launcher vzápětí spustí — GPU pak zůstalo na minimu (76 MHz),\n"
    "{i} * protože emulátor ji od buildu 48 už neshazuje (cpu_boost() je prázdná).\n"
    "{i} * Takty patří výhradně Ultrahand governoru uživatele. */"
)

path = sys.argv[1]
text = open(path, encoding="utf-8", errors="surrogateescape").read()

if "NSX_NO_BOOST" in text:
    print("launcher main.cpp: boost už zakomentovaný")
    sys.exit(0)

out = []
count = 0
for line in text.splitlines(keepends=True):
    stripped = line.rstrip("\n")
    m = CALL_RE.match(stripped)
    if m:
        indent, mode = m.group(1), m.group(2)
        note = NOTE.format(i=indent)
        out.append(f"{indent}{note}\n")
        out.append(f"{indent}// {stripped.strip()}\n")
        count += 1
    else:
        out.append(line)

open(path, "w", encoding="utf-8", errors="surrogateescape").write("".join(out))

# Upstream jich má šest (3× FastLoad + 3× Normal). Když se počet změní, ať to
# build pozná hned a ne až na kartě.
if count == 0:
    print("launcher main.cpp: žádné appletSetCpuBoostMode — upstream je už nemá?")
    sys.exit(1)
if count != 6:
    print(f"launcher main.cpp: zakomentováno {count} volání, čekal jsem 6 "
          f"(upstream se posunul — zkontroluj, kde přibylo/ubylo)")
    sys.exit(1)

print(f"launcher main.cpp: appletSetCpuBoostMode zakomentováno {count}× "
      f"(3× FastLoad, 3× Normal) — GPU už launcher neshazuje")
