# -*- coding: utf-8 -*-
# Dekompilace cilovych funkci jadra 4248 (RE-ANALYZA.md) do pseudo-C.
# Spusti se z analyzeHeadless jako postScript PO auto-analyze.
#
#   analyzeHeadless <projdir> <proj> -import core.so \
#     -analysisTimeoutPerFile 3000 \
#     -scriptPath <tento adresar> \
#     -postScript nsx_decompile_targets.py <vystupni adresar>
#
# Vystup: <outdir>/func_<vaddr>.c + 00_INDEX.md. Cela tela je v try/except —
# kdyz cokoliv padne, chyba skonci V 00_INDEX.md (marker SCRIPT_ERROR), aby
# ji CI commit videl i bez pristupu k raw logum.
#
# Adresace: script pracuje v ELF vaddr prostoru (0x260000...); delta proti
# Ghidra image base se spocita z bloku .text, takze funguje pri libovolne
# base. Core: berlint-hub/TEST3 libemucore_4248_baked.so (sha256 cda05f6b...),
# .text totozity s analyzovym zakladem 516077 (kotvy overeny capstonem).
# @category NSX

import os
import traceback

from ghidra.program.model.address import AddressSet
from ghidra.app.decompiler import DecompInterface
from ghidra.util.task import ConsoleTaskMonitor

# vystupni adresar patri do globalniho scope kvuli except wrapperu dole
OUT = "/tmp/ghidra_out"
try:
    _args = getScriptArgs()
    if _args:
        OUT = _args[0]
except:
    pass
if not os.path.isdir(OUT):
    os.makedirs(OUT)


def main():
    prog = currentProgram
    fm = prog.getFunctionManager()
    mem = prog.getMemory()
    refmgr = prog.getReferenceManager()
    af = prog.getAddressFactory().getDefaultAddressSpace()
    mon = ConsoleTaskMonitor()

    TEXT_VADDR = 0x260000

    delta = 0
    textblock = None
    for b in mem.getBlocks():
        if b.getName() == ".text":
            textblock = b
            delta = b.getStart().getOffset() - TEXT_VADDR
            break
    print("[nsx] Ghidra .text delta = 0x%x" % delta)

    def A(v):
        return af.getAddress(v + delta)

    di = DecompInterface()
    di.openProgram(prog)

    results = []  # (why, function)

    def addf(why, f):
        if f is None:
            return
        ep = f.getEntryPoint().getOffset()
        for (_w2, f2) in results:
            if f2.getEntryPoint().getOffset() == ep:
                return
        results.append((why, f))

    # ---- 1) pevne cile z capstone analyzy ----------------------------------
    FIXED = [
        (0x5B34C0, "affinity_writer (str do AFF1/AFF6/AFF8 = setup vlaken)"),
        (0x8BF720, "affinity_reader_A"),
        (0x7CEB60, "affinity_reader_B"),
        (0xA86F00, "nejvyssi pocet realnych yield (spin loop)"),
    ]
    for va, why in FIXED:
        a = A(va)
        f = fm.getFunctionContaining(a)
        if f is None:
            f = fm.getFunctionBefore(a)
        if f is None:
            print("[nsx] FIXED 0x%X: funkce nenalezena" % va)
        addf(why, f)

    # ---- 2) horka .data: top funkce dle xrefu ------------------------------
    DATA_TARGETS = [
        0xB99BD0,  # nejzhavejsi global (3452 xrefu)
        0xB9AA28,  # druhy (2555 xrefu)
        0xB969A0,  # cache/FIFO tabulka okoli (indexovany pristup)
        0xB969AC,  # FIFO1
        0xB969BC,  # FIFO2
        0xB969C0,  # FIFO3
        0xB969C4,  # DMA4
    ]
    for dv in DATA_TARGETS:
        counts = {}
        for r in refmgr.getReferencesTo(A(dv)):
            f = fm.getFunctionContaining(r.getFromAddress())
            if f is None:
                continue
            k = f.getEntryPoint().getOffset()
            counts[k] = counts.get(k, 0) + 1
        top = sorted(counts.items(), key=lambda kv: -kv[1])[:3]
        for ep, c in top:
            addf("data 0x%X (%d xrefu)" % (dv, c),
                 fm.getFunctionAt(af.getAddress(ep)))
        if not top:
            print("[nsx] data 0x%X: bez xrefu (tabulka indexovana registrem?)" % dv)

    # ---- 3) izolovane yield (spin loop heurstika, padding filtr) -----------
    Y = "\x1f\x20\x03\xd5"  # 0xD503201F little-endian
    if textblock is not None:
        ycounts = {}
        scanned = 0
        cur = findBytes(textblock, Y, textblock.getEnd(), 1)
        while cur is not None:
            scanned += 1
            prev_y = False
            nxt_y = False
            try:
                pb = mem.getBytes(cur.subtract(4), 4)
                prev_y = (pb[0] & 0xFF) == 0x1F and (pb[1] & 0xFF) == 0x20 \
                    and (pb[2] & 0xFF) == 0x03 and (pb[3] & 0xFF) == 0xD5
            except:
                pass
            try:
                nb = mem.getBytes(cur.add(4), 4)
                nxt_y = (nb[0] & 0xFF) == 0x1F and (nb[1] & 0xFF) == 0x20 \
                    and (nb[2] & 0xFF) == 0x03 and (nb[3] & 0xFF) == 0xD5
            except:
                pass
            if not prev_y and not nxt_y:
                f = fm.getFunctionContaining(cur)
                if f is not None:
                    k = f.getEntryPoint().getOffset()
                    ycounts[k] = ycounts.get(k, 0) + 1
            _nxt = cur.add(4)
            if _nxt.getOffset() > textblock.getEnd().getOffset():
                break
            cur = findBytes(AddressSet(_nxt, textblock.getEnd()),
                            Y, textblock.getEnd(), 1)
        print("[nsx] yield celkem %d, izolovanych (realnych) %d" % (
            scanned, sum(ycounts.values())))
        for ep, c in sorted(ycounts.items(), key=lambda kv: -kv[1])[:8]:
            addf("isolated yield x%d" % c, fm.getFunctionAt(af.getAddress(ep)))

    # ---- 4) dekompilace + zapis --------------------------------------------
    index = [
        "# Ghidra pseudo-C — jadro 4248 (TEST3 baked, sha256 cda05f6b...)",
        "",
        "Vygeneroval `ci/ghidra/nsx_decompile_targets.py` (Ghidra headless).",
        "",
        "| soubor | vaddr | funkce (Ghidra) | duvod vyberu |",
        "|---|---|---|---|",
    ]
    ok = 0
    for (why, f) in results:
        ep = f.getEntryPoint().getOffset()
        vaddr = ep - delta
        name = f.getName()
        size = f.getBody().getNumAddresses()
        try:
            res = di.decompileFunction(f, 120, mon)
            if res.decompileCompleted():
                code = res.getDecompiledFunction().getC()
                ok += 1
            else:
                code = "// DEKOMPILACE SELHALA: %s\n" % res.getErrorMessage()
        except:
            code = "// DEKOMPILACE VYJIMKA:\n// %s\n" % traceback.format_exc()
        fn = "func_%06x.c" % (vaddr & 0xFFFFFF)
        hdr = ("// vaddr 0x%X  ghidra 0x%X  name=%s  size=%d instr-addr\n"
               "// duvod: %s\n"
               "// core: berlint-hub/TEST3 libemucore_4248_baked.so sha256 cda05f6b9136...\n\n"
               % (vaddr, ep, name, size, why))
        fh = open(os.path.join(OUT, fn), "w")
        fh.write(hdr + code)
        fh.close()
        index.append("| %s | 0x%X | %s | %s |" % (fn, vaddr, name, why))
        print("[nsx] %s <- 0x%X (%s)" % (fn, vaddr, why))

    fh = open(os.path.join(OUT, "00_INDEX.md"), "w")
    fh.write("\n".join(index) + "\n")
    fh.close()
    print("[nsx] HOTOVO: %d/%d funkci dekompilovano -> %s" % (ok, len(results), OUT))


try:
    main()
except:
    err = traceback.format_exc()
    print("[nsx] SCRIPT CHYBA:\n" + err)
    try:
        fh = open(os.path.join(OUT, "00_INDEX.md"), "w")
        fh.write("# SCRIPT_ERROR\n\n```\n" + err + "\n```\n")
        fh.close()
    except:
        print("[nsx] nejde zapsat ani chybovy index (OUT nedefinovan?)")
