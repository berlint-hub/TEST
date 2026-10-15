"""Patch source/so_util.c ve zdrojích portu (NetherSX2_nx).

CÍL: méně overheadu při načítání .so + lepší memory management.

Z logu z karty:
  [1158.119] heap ready ... so_limit=268435456
  [1158.314] core image loaded base=0xc52800000 size=208453632   (~195 ms)

Tři dílčí vylepšení (celkem 4 kotvy — BSS zeroing má dvě: zrušení celozónového
memset + přidání nulování ocásku do segmentového cyklu):

  1. Velký streamovací buffer pro soubor .so. Defaultní stdio buffer (1 KiB)
     znamená při 12 MB obrazu tisíce newlib read() syscallů; 256 KiB to stáhne
     na desítky. Totéž dělá fopen_fake pro .dat archivy, tady to zatím chybělo.

  2. BSS se nuluje jen v ocáscích PT_LOAD (filesz..memsz), ne celá LOAD zóna.
     Původní memset(load_base, 0, load_size) nuloval 208 MB a přes něj se
     memcpy() přepisovaly segmenty — každý bajt se psal dvakrát (u ~199 MB
     zóny je to navíc jen u filesz části, ale ta dvojitá cesta zahltí D-cache
     a prodlouží relokaci). Bionic linker nuluje taky jen BSS; mezery mezi
     segmenty nulu nepotřebujou.

  3. so_flush_caches vypadne jen RX úseky PT_LOAD místo celé zóny. Data
     segmenty se nespouštějí, I-cache invalidate nepotřebujou — stejná
     segmentová logika jako u so_finalize. Na 208 MB zóně s ~21 MB kódu
     ušetří větší většinu flush času.

Patche jsou idempotentní (marker NSX_FASTLOAD), kotvy níž odpovídají
upstreamu NaGaa95/NetherSX2_nx@main.

Použití: python3 ci/patches/so_fastload.py <cesta k so_util.c>
"""
import sys

PATH = sys.argv[1]
text = open(PATH, encoding="utf-8", errors="surrogateescape").read()

if "NSX_FASTLOAD" in text:
    print("so_util.c: fastload už patchnuto")
    sys.exit(0)

done = 0

# ----------------------------------------------------------------- 1) buffer
open_anchor = (
    '  fseek(fd, 0, SEEK_END);\n'
    '  mod->so_size = ftell(fd);\n'
    '  fseek(fd, 0, SEEK_SET);\n'
)
open_patch = (
    '  /* NSX_FASTLOAD: 12MB obraz .so přes defaultní 1KiB stdio buffer =\n'
    '   * tisíce read() syscallů navíc; jeden velký buffer to stáhne na desítky. */\n'
    '  setvbuf(fd, NULL, _IOFBF, 256 * 1024);\n'
    '\n'
    + open_anchor
)
if open_anchor in text:
    text = text.replace(open_anchor, open_patch, 1)
    done += 1
else:
    print("ANCHOR MISSING: setvbuf (fseek/so_size)")

# --------------------------------------------------- 2) BSS místo full memset
memset_anchor = '  memset(mod->load_base, 0, mod->load_size);\n'
memset_patch = (
    '  /* NSX_FASTLOAD: celozónový memset (208 MB) se vynechává — nuluje se\n'
    '   * jen BSS ocas každého PT_LOAD (filesz..memsz) při kopii segmentů, viz\n'
    '   * níž. Bionic linker postupuje stejně. */\n'
)
if memset_anchor in text:
    text = text.replace(memset_anchor, memset_patch, 1)
    done += 1
else:
    print("ANCHOR MISSING: memset(load_base)")

# segment copy: po memcpy nuluj BSS ocas
seg_anchor = (
    '    if (p->p_type == PT_LOAD) {\n'
    '      memcpy((void *)((uintptr_t)mod->load_base + p->p_vaddr),\n'
    '             (void *)((uintptr_t)mod->so_base + p->p_offset),\n'
    '             p->p_filesz);\n'
    '    }\n'
)
seg_patch = (
    '    if (p->p_type == PT_LOAD) {\n'
    '      memcpy((void *)((uintptr_t)mod->load_base + p->p_vaddr),\n'
    '             (void *)((uintptr_t)mod->so_base + p->p_offset),\n'
    '             p->p_filesz);\n'
    '      /* NSX_FASTLOAD: nulu vyžaduje jen BSS ocas (memsz - filesz). */\n'
    '      if (p->p_memsz > p->p_filesz)\n'
    '        memset((void *)((uintptr_t)mod->load_base + p->p_vaddr + p->p_filesz),\n'
    '               0, p->p_memsz - p->p_filesz);\n'
    '    }\n'
)
if seg_anchor in text:
    text = text.replace(seg_anchor, seg_patch, 1)
    done += 1
else:
    print("ANCHOR MISSING: segment copy loop")

# --------------------------------------------------- 3) flush jen RX segmenty
flush_anchor = (
    'void so_flush_caches(so_module *mod) {\n'
    '  armDCacheFlush(mod->load_virtbase, mod->load_size);\n'
    '  armICacheInvalidate(mod->load_virtbase, mod->load_size);\n'
    '}\n'
)
flush_patch = (
    'void so_flush_caches(so_module *mod) {\n'
    '  /* NSX_FASTLOAD: flushni jen RX úseky PT_LOAD místo celé 208MB zóny.\n'
    '   * Data segmenty se nespouštějí, I-cache invalidate nepotřebujou —\n'
    '   * stejná segmentová logika jako ve so_finalize. */\n'
    '  for (int i = 0; i < mod->phnum; i++) {\n'
    '    const Elf64_Phdr *p = &mod->phdr[i];\n'
    '    if (p->p_type != PT_LOAD || (p->p_flags & PF_X) != PF_X)\n'
    '      continue;\n'
    '    const Elf64_Addr lo = p->p_vaddr & ~(Elf64_Addr)0xFFF;\n'
    '    const Elf64_Addr hi = ALIGN_MEM(p->p_vaddr + p->p_memsz, 0x1000);\n'
    '    void *base = (void *)((uintptr_t)mod->load_virtbase + lo);\n'
    '    armDCacheFlush(base, (size_t)(hi - lo));\n'
    '    armICacheInvalidate(base, (size_t)(hi - lo));\n'
    '  }\n'
    '}\n'
)
if flush_anchor in text:
    text = text.replace(flush_anchor, flush_patch, 1)
    done += 1
else:
    print("ANCHOR MISSING: so_flush_caches")

open(PATH, "w", encoding="utf-8", errors="surrogateescape").write(text)
print("so_util.c: fastload patch %d/4" % done)
sys.exit(0 if done == 4 else 1)
