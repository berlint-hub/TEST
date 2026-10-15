/* Ghidra headless postScript (Java — funguje ve všech verzích, žádný Jython).
 * Dekompilace cílových funkcí jádra 4248 (RE-ANALYZA.md) do pseudo-C.
 *
 * analyzeHeadless <projdir> <proj> -import core.so \
 *   -analysisTimeoutPerFile 3000 \
 *   -scriptPath <adresár tohoto souboru> \
 *   -postScript NsxDecompileTargetsScript.java <outdir>
 *
 * Výstup: <outdir>/func_<vaddr>.c + 00_INDEX.md (+ _script_error.txt při pádu).
 * Adresace v ELF vaddr prostoru; delta proti Ghidra base se počítá z bloku
 * .text. Core: berlint-hub/TEST3 libemucore_4248_baked.so (cda05f6b...).
 */
import java.io.File;
import java.io.FileWriter;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionIterator;
import ghidra.program.model.listing.FunctionManager;
import ghidra.program.model.listing.Program;
import ghidra.program.model.symbol.Reference;
import ghidra.program.model.symbol.ReferenceIterator;
import ghidra.program.model.mem.MemoryBlock;
import ghidra.util.task.ConsoleTaskMonitor;

public class NsxDecompileTargetsScript extends GhidraScript {

    private static final long TEXT_VADDR = 0x260000L;

    private Program prog;
    private long delta = 0L;
    private MemoryBlock textblock;

    private static class Sel {
        final String why;
        final Function f;
        Sel(String why, Function f) { this.why = why; this.f = f; }
    }
    private final List<Sel> sel = new ArrayList<Sel>();

    private Address A(long vaddr) {
        return currentProgram.getAddressFactory().getDefaultAddressSpace()
                .getAddress(vaddr + delta);
    }

    private void addf(String why, Function f) {
        if (f == null) return;
        long ep = f.getEntryPoint().getOffset();
        for (Sel s : sel) {
            if (s.f.getEntryPoint().getOffset() == ep) return;
        }
        sel.add(new Sel(why, f));
    }

    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        String out = (args != null && args.length > 0) ? args[0] : "/tmp/ghidra_out";
        new File(out).mkdirs();
        File errFile = new File(out, "_script_error.txt");
        try {
            analyze(out);
        } catch (Throwable t) {
            println("[nsx] SCRIPT CHYBA: " + t);
            FileWriter fw = new FileWriter(errFile);
            StackTraceElement[] st = t.getStackTrace();
            fw.write("SCRIPT_ERROR: " + t + "\n");
            for (StackTraceElement e : st) fw.write("  at " + e + "\n");
            fw.close();
            throw new RuntimeException(t);
        }
    }

    private void analyze(String out) throws Exception {
        prog = currentProgram;
        for (MemoryBlock b : prog.getMemory().getBlocks()) {
            if (b.getName().equals(".text")) {
                textblock = b;
                delta = b.getStart().getOffset() - TEXT_VADDR;
            }
        }
        println("[nsx] Ghidra .text delta = 0x" + Long.toHexString(delta));

        FunctionManager fm = prog.getFunctionManager();

        // ---- 1) pevné cíle -------------------------------------------------
        long[][] fixed = {
            {0x5B34C0L, 0}, // affinity_writer
            {0x8BF720L, 0}, // affinity_reader_A
            {0x7CEB60L, 0}, // affinity_reader_B
            {0xA86F00L, 0}, // spin top
        };
        String[] fixedWhy = {
            "affinity_writer (str do AFF1/AFF6/AFF8 = setup vlaken)",
            "affinity_reader_A",
            "affinity_reader_B",
            "nejvyssi pocet realnych yield (spin loop)",
        };
        for (int i = 0; i < fixed.length; i++) {
            Address a = A(fixed[i][0]);
            Function f = fm.getFunctionContaining(a);
            if (f == null) f = fm.getFunctionBefore(a);
            if (f == null) println("[nsx] FIXED 0x" + Long.toHexString(fixed[i][0]) + ": funkce nenalezena");
            addf(fixedWhy[i], f);
        }

        // ---- 2) horká .data ------------------------------------------------
        long[] dataTargets = {0xB99BD0L, 0xB9AA28L, 0xB969A0L, 0xB969ACL,
                              0xB969BCL, 0xB969C0L, 0xB969C4L};
        for (long dv : dataTargets) {
            Map<Long, Integer> counts = new HashMap<Long, Integer>();
            ReferenceIterator it = prog.getReferenceManager().getReferencesTo(A(dv));
            while (it.hasNext()) {
                Reference r = it.next();
                Function f = fm.getFunctionContaining(r.getFromAddress());
                if (f == null) continue;
                Long k = Long.valueOf(f.getEntryPoint().getOffset());
                Integer c = counts.get(k);
                counts.put(k, Integer.valueOf((c == null ? 0 : c.intValue()) + 1));
            }
            List<Map.Entry<Long, Integer>> top =
                new ArrayList<Map.Entry<Long, Integer>>(counts.entrySet());
            Collections.sort(top, new Comparator<Map.Entry<Long, Integer>>() {
                public int compare(Map.Entry<Long, Integer> a, Map.Entry<Long, Integer> b) {
                    return b.getValue() - a.getValue();
                }
            });
            for (int i = 0; i < top.size() && i < 3; i++) {
                long ep = top.get(i).getKey().longValue();
                addf("data 0x" + Long.toHexString(dv) + " (" + top.get(i).getValue() + " xrefu)",
                     fm.getFunctionAt(A(ep - delta)));
            }
            if (top.isEmpty()) {
                println("[nsx] data 0x" + Long.toHexString(dv) + ": bez xrefu");
            }
        }

        // ---- 3) izolované yield ---------------------------------------------
        if (textblock != null) {
            Map<Long, Integer> yc = new HashMap<Long, Integer>();
            int scanned = 0;
            byte[] prev = new byte[4];
            byte[] next = new byte[4];
            Address cur = findBytes(textblock.getStart(), "1f 20 03 d5",
                                    textblock.getEnd(), 1);
            while (cur != null) {
                scanned++;
                boolean prevY = false, nextY = false;
                try {
                    prog.getMemory().getBytes(cur.subtract(4L), prev);
                    prevY = (prev[0] & 0xFF) == 0x1F && (prev[1] & 0xFF) == 0x20
                         && (prev[2] & 0xFF) == 0x03 && (prev[3] & 0xFF) == 0xD5;
                } catch (Exception e) { /* hranice bloku */ }
                try {
                    prog.getMemory().getBytes(cur.add(4L), next);
                    nextY = (next[0] & 0xFF) == 0x1F && (next[1] & 0xFF) == 0x20
                         && (next[2] & 0xFF) == 0x03 && (next[3] & 0xFF) == 0xD5;
                } catch (Exception e) { /* hranice bloku */ }
                if (!prevY && !nextY) {
                    Function f = fm.getFunctionContaining(cur);
                    if (f != null) {
                        Long k = Long.valueOf(f.getEntryPoint().getOffset());
                        Integer c = yc.get(k);
                        yc.put(k, Integer.valueOf((c == null ? 0 : c.intValue()) + 1));
                    }
                }
                cur = findBytes(cur.add(4L), "1f 20 03 d5", textblock.getEnd(), 1);
            }
            println("[nsx] yield celkem " + scanned + ", izolovanych " + sumValues(yc));
            List<Map.Entry<Long, Integer>> top =
                new ArrayList<Map.Entry<Long, Integer>>(yc.entrySet());
            Collections.sort(top, new Comparator<Map.Entry<Long, Integer>>() {
                public int compare(Map.Entry<Long, Integer> a, Map.Entry<Long, Integer> b) {
                    return b.getValue() - a.getValue();
                }
            });
            for (int i = 0; i < top.size() && i < 8; i++) {
                long ep = top.get(i).getKey().longValue();
                addf("isolated yield x" + top.get(i).getValue(),
                     fm.getFunctionAt(A(ep - delta)));
            }
        }

        // ---- 4) dekompilace + zápis ------------------------------------------
        DecompInterface di = new DecompInterface();
        di.openProgram(prog);
        ConsoleTaskMonitor mon = new ConsoleTaskMonitor();

        StringBuilder index = new StringBuilder();
        index.append("# Ghidra pseudo-C — jadro 4248 (TEST3 baked, sha256 cda05f6b...)\n\n")
             .append("Vygeneroval `ci/ghidra/NsxDecompileTargetsScript.java` (Ghidra headless).\n\n")
             .append("| soubor | vaddr | funkce (Ghidra) | duvod vyberu |\n|---|---|---|---|\n");
        int ok = 0;
        for (Sel s : sel) {
            long ep = s.f.getEntryPoint().getOffset();
            long vaddr = ep - delta;
            String name = s.f.getName();
            long size = s.f.getBody().getNumAddresses();
            String code;
            try {
                DecompileResults res = di.decompileFunction(s.f, 120, mon);
                if (res != null && res.decompileCompleted()) {
                    code = res.getDecompiledFunction().getC();
                    ok++;
                } else {
                    code = "// DEKOMPILACE SELHALA: " + (res == null ? "null" : res.getErrorMessage()) + "\n";
                }
            } catch (Throwable t) {
                code = "// DEKOMPILACE VYJIMKA: " + t + "\n";
            }
            String fn = String.format("func_%06x.c", Long.valueOf(vaddr & 0xFFFFFFL));
            FileWriter fw = new FileWriter(new File(out, fn));
            fw.write("// vaddr 0x" + Long.toHexString(vaddr)
                     + "  ghidra 0x" + Long.toHexString(ep)
                     + "  name=" + name + "  size=" + size + "\n"
                     + "// duvod: " + s.why + "\n"
                     + "// core: berlint-hub/TEST3 libemucore_4248_baked.so sha256 cda05f6b9136...\n\n");
            fw.write(code);
            fw.close();
            index.append("| ").append(fn).append(" | 0x").append(Long.toHexString(vaddr))
                 .append(" | ").append(name).append(" | ").append(s.why).append(" |\n");
            println("[nsx] " + fn + " <- 0x" + Long.toHexString(vaddr));
        }
        FileWriter fw = new FileWriter(new File(out, "00_INDEX.md"));
        fw.write(index.toString());
        fw.close();
        println("[nsx] HOTOVO: " + ok + "/" + sel.size() + " funkci dekompilovano -> " + out);
    }

    private int sumValues(Map<Long, Integer> m) {
        int s = 0;
        for (Integer v : m.values()) s += v.intValue();
        return s;
    }
}
