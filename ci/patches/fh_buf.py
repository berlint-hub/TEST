"""Patch source/filehelper.c ve zdrojích portu (NetherSX2_nx).

CÍL: méně overheadu při načítání resource souborů.

read_package_buf čte GameIndex.yaml (~1,3 MB), shadery a fonty naráz, ale
přes defaultní 1KiB stdio buffer — to je u GameIndexu přes tisíc read()
syscallů a patří to mezi věci, které nafukují [GameDB] load (1282 ms z logu).
Velký buffer to stáhne na pár desítek čtení; samotné YAML parsování zůstává
core, ten neměníme.

Idempotentní (marker NSX_FASTLOAD). Použití:
  python3 ci/patches/fh_buf.py <cesta k filehelper.c>
"""
import sys

PATH = sys.argv[1]
text = open(PATH, encoding="utf-8", errors="surrogateescape").read()

if "NSX_FASTLOAD" in text:
    print("filehelper.c: buffer už patchnut")
    sys.exit(0)

anchor = (
    '  FILE *f = fopen(full, "rb");\n'
    '  if (!f) {\n'
    '\n'
    '    return NULL;\n'
    '  }\n'
    '\n'
    '  if (fseek(f, 0, SEEK_END) != 0) {\n'
)
patch = (
    '  FILE *f = fopen(full, "rb");\n'
    '  if (!f) {\n'
    '\n'
    '    return NULL;\n'
    '  }\n'
    '\n'
    '  /* NSX_FASTLOAD: resource soubory (GameIndex.yaml ~1,3 MB, shadery,\n'
    '   * fonty) se čtou naráz, ale defaultní stdio buffer by to nasekal na\n'
    '   * tisíce read() syscallů. */\n'
    '  setvbuf(f, NULL, _IOFBF, 256 * 1024);\n'
    '\n'
    '  if (fseek(f, 0, SEEK_END) != 0) {\n'
)

ok = 0
if anchor in text:
    text = text.replace(anchor, patch, 1)
    ok = 1
else:
    print("ANCHOR MISSING: fopen(full) v read_package_buf")

open(PATH, "w", encoding="utf-8", errors="surrogateescape").write(text)
print("filehelper.c: buffer patch %d/1" % ok)
sys.exit(0 if ok else 1)
