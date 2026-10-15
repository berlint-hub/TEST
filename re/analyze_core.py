#!/usr/bin/env python3
"""Cílená RE analýza jádra 4248 (RE-ANALYZA.md) — bez Ghidry.

Použití:
  pip install capstone
  python3 re/analyze_core.py libemucore.so

Co dělá:
  1. ELF sekce + zakázání .text
  2. census: yield/wfe/wfi/isb/svc + funkční prolog (stp x29,x30 pre-index)
  3. xref sken adrp + ldr/str[reg,#imm] na znamé .data knoby (FIFO/DMA/affinity)
  4. top horké globály .data podle počtu xrefů
  5. atribuce yield na funkce (POZOR: aarch64 padding je taky yield-nop —
     výsledek je potřeba číst s kontextem, viz RE-ANALYZA.md)
"""
import collections
import struct
import sys

from capstone import Cs, CS_ARCH_ARM64, CS_MODE_LITTLE_ENDIAN

KNOWN_KNOBS = {
    0xB969AC: 'FIFO1', 0xB969BC: 'FIFO2', 0xB969C0: 'FIFO3', 0xB969C4: 'DMA4',
    0xB9A180: 'AFF1', 0xB9A19C: 'AFF2', 0xB9A2DC: 'AFF3', 0xB9A2E4: 'AFF4',
    0xB9A2F4: 'AFF5', 0xB9A6C0: 'AFF6', 0xB9A6D0: 'AFF7', 0xB9A6E0: 'AFF8',
    0xB9A6F0: 'AFF9',
}
DATA_LO, DATA_HI = 0xB96858, 0xB9AF70  # .data vaddr rozsah (4248)

def sections(data):
    e_shoff = struct.unpack_from('<Q', data, 0x28)[0]
    e_shentsize = struct.unpack_from('<H', data, 0x3A)[0]
    e_shnum = struct.unpack_from('<H', data, 0x3C)[0]
    e_shstrndx = struct.unpack_from('<H', data, 0x3E)[0]
    def sh(i):
        o = e_shoff + i * e_shentsize
        name, typ, flags, addr, off, size = struct.unpack_from('<IIQQQQ', data, o)
        return dict(name=name, addr=addr, off=off, size=size)
    st = sh(e_shstrndx)['off']
    out = {}
    for i in range(e_shnum):
        s = sh(i)
        e = data.index(b'\0', st + s['name'])
        out[data[st + s['name']:e].decode()] = s
    return out

def main(path):
    data = open(path, 'rb').read()
    secs = sections(data)
    for n in ('.text', '.data', '.bss'):
        s = secs.get(n)
        if s:
            print('%-6s vaddr=0x%06X off=0x%06X size=0x%X' % (n, s['addr'], s['off'], s['size']))

    t = secs['.text']
    code = data[t['off']:t['off'] + t['size']]
    base = t['addr']
    words = struct.unpack('<%dI' % (len(code) // 4), code)

    census = collections.Counter()
    for w in words:
        if w == 0xD503201F: census['yield/padding'] += 1
        elif w == 0xD503205F: census['wfe'] += 1
        elif w == 0xD503207F: census['wfi'] += 1
        elif w == 0xD5033FDF: census['isb'] += 1
        elif w == 0xD4000001: census['svc #0'] += 1
        if (w & 0xFFC07FFF) == 0xA9807BFD: census['prology'] += 1
    print('\ncensus:', dict(census))

    cs = Cs(CS_ARCH_ARM64, CS_MODE_LITTLE_ENDIAN)
    insns = list(cs.disasm(code, base))
    regpage = {}
    xrefs = collections.defaultdict(list)
    datarefs = collections.Counter()
    MEM = ('ldr', 'str', 'ldrsw', 'ldrb', 'strb', 'ldrh', 'strh', 'ldrsh',
           'ldxr', 'stxr', 'ldaxr', 'stlxr', 'ldar', 'stlr', 'ldapr')
    for i, ins in enumerate(insns):
        m, op = ins.mnemonic, ins.op_str.replace(' ', '')
        if m == 'adrp':
            p = op.split(',')
            regpage[p[0]] = int(p[1].lstrip('#'), 16)
        elif m in MEM and regpage and '[' in op:
            try:
                inner = op[op.index('[') + 1:op.index(']')]
                p = inner.split(',')
                b = p[0]
                if b in regpage:
                    imm = int(p[1].lstrip('#'), 0) if len(p) > 1 and p[1].startswith('#') else 0
                    addr = regpage[b] + imm
                    if addr in KNOWN_KNOBS: xrefs[addr].append(i)
                    if DATA_LO <= addr < DATA_HI: datarefs[addr] += 1
            except (ValueError, IndexError):
                pass

    print('\n=== xrefy na zname knoby ===')
    for a in sorted(KNOWN_KNOBS):
        hits = xrefs.get(a, [])
        print('  %-5s 0x%X: %d primeho pristupu%s' % (
            KNOWN_KNOBS[a], a, len(hits),
            '' if hits else '  (tabulka indexovana registrem?)'))

    print('\n=== top 12 hot globals .data ===')
    for a, c in datarefs.most_common(12):
        print('  vaddr 0x%06X (file 0x%06X): %d xrefu' % (a, a - 0x2000, c))

if __name__ == '__main__':
    main(sys.argv[1])
