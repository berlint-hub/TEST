"""Patch log cesty do podslozky logs/ (build 87).

DATA_ROOT "/nethersx2-vulkan.log"    -> DATA_ROOT "/logs/nethersx2-vulkan.log"
DATA_ROOT "/nethersx2-exception.log" -> DATA_ROOT "/logs/nethersx2-exception.log"
DATA_ROOT "/nethersx2-mesa.log"      -> DATA_ROOT "/logs/nethersx2-mesa.log"

Navic zajistuje, ze DATA_ROOT "/logs" existuje v procesu emu (vk.c i main.c
volaji mkdir, ne jen fopen) — jinak by se logy v podslozce neotevřely.

Bezi NA KONCI vsech ostatnich patchu (vk_diag.py apod. už dodelaly sve veci).
Pouziti: python3 ci/patches/log_paths.py <soubor> [<soubor> ...]
"""
import re
import sys


def add_mkdir_logs(text):
    """Za kazdy `mkdir(DATA_ROOT, 0777);` prida `mkdir(DATA_ROOT "/logs", 0777);`
    se stejnou odsazenim. Regex, aby 2-mezera nerekla match po 4-mezere."""
    n = 0

    def repl(m):
        nonlocal n
        n += 1
        return m.group(0) + m.group(1) + 'mkdir(DATA_ROOT "/logs", 0777);\n'

    return re.sub(
        r'(^[ \t]*)mkdir\(DATA_ROOT, 0777\);\n'
        r'(?![ \t]*mkdir\(DATA_ROOT "/logs", 0777\);\n)', repl, text,
        flags=re.M), n


def run(text, subs):
    n = 0
    for old, new in subs:
        if new in text:
            continue  # uz patchnuto
        if old in text:
            text = text.replace(old, new)
            n += 1
    return text, n


OPS_VK = [
    ('DATA_ROOT "/nethersx2-vulkan.log"', 'DATA_ROOT "/logs/nethersx2-vulkan.log"'),
    ('DATA_ROOT "/nethersx2-exception.log"', 'DATA_ROOT "/logs/nethersx2-exception.log"'),
]

OPS_MAIN = [
    # mkdir + exception log -> logs/ (tahle ankor ma prednost pred obecnou
    # substituci, jinak by po zmene cesty uz neexistovala)
    ('  unlink(DATA_ROOT "/nethersx2-exception.log");\n',
     '  mkdir(DATA_ROOT "/logs", 0777);\n'
     '  unlink(DATA_ROOT "/logs/nethersx2-exception.log");\n'),
    ('DATA_ROOT "/nethersx2-mesa.log"', 'DATA_ROOT "/logs/nethersx2-mesa.log"'),
]

SPEC = {
    'vk.c': OPS_VK,
    'main.c': OPS_MAIN,
}

paths = sys.argv[1:]
if not paths:
    print("log_paths: zadej soubory", file=sys.stderr)
    sys.exit(2)

total = 0
for path in paths:
    name = path.replace("\\", "/").split("/")[-1]
    ops = SPEC.get(name)
    if ops is None:
        print("log_paths: neznamy soubor %s (zadne substituce)" % name,
              file=sys.stderr)
        continue
    text = open(path, encoding="utf-8", errors="surrogateescape").read()
    text, n = run(text, ops)
    text, nm = add_mkdir_logs(text)
    n += nm
    if n:
        open(path, "w", encoding="utf-8", errors="surrogateescape").write(text)
    total += n
    print("log_paths: %s -> %d substituci" % (name, n))
print("log_paths: celkem %d" % total)
sys.exit(0)