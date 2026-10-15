"""NSX_MEMMOVE_OPT — asm memmove (ARM optimized-routines) pro jádro 4248.

Z rozboru binárky/importů (RE-ANALYZA.md, 2026-10-15): jádro si mem* funkce
NA Androidu bralo z bionicu (ručně laděné AArch64 asm). Na Switchi je
zásobuje port; memcpy/memset/memcmp mapují na devkitPro newlib, který má
pro aarch64 laděné asm — ale **memmove je tam C verze** (memmove.c), tedy
jediná slabá mem funkce. Tohle ji zaměňuje za asm implementaci z
ARM-software/optimized-routines (string/aarch64/memcpy.S, která zvládá
overlap a exportuje alias __memmove_aarch64; MIT OR Apache-2.0 WITH
LLVM-exception). Sestavuje ji build-switch.sh (stage 5b) do
$SRC/source/nsx_memmove_opt.o.

A/B bez rebuildu: marker /switch/nethersx2/ci-stockmemmove.enabled vrací
novlib memmove (výchozí stav = asm).
"""
import sys

libc_shim, imports_c = sys.argv[1], sys.argv[2]
fail = 0

# ---- 1. libc_shim.c: wrapper -------------------------------------------------
t = open(libc_shim, encoding="utf-8", errors="surrogateescape").read()
if "NSX_MEMMOVE_OPT" in t:
    print("libc_shim.c: memmove wrapper už je")
else:
    anchor = "int sem_destroy_fake(void **s) {"
    if anchor not in t:
        print("libc_shim.c: kotva nenalezena (sem_destroy_fake)")
        fail += 1
    else:
        block = '''/* NSX_MEMMOVE_OPT: asm memmove (ARM optimized-routines, __memmove_aarch64)
 * pro jádro — newlib memmove je C verze, na Androidu jádro mělo bionic asm.
 * Marker ci-stockmemmove.enabled vrátí novlib implementaci (A/B bez rebuildu).
 * Objekt sestavuje ci/build-switch.sh z ci/optstr/memcpy.S.
 */
extern void *__memmove_aarch64(void *dst, const void *src, size_t n);

static int nsx_memmove_asm_mode(void) {
  static int v = -1;
  if (v < 0) {
    v = 1;  /* default: asm */
    FILE *f = fopen("/switch/nethersx2/ci-stockmemmove.enabled", "r");
    if (f) { v = 0; fclose(f); }
  }
  return v;
}

void *nsx_memmove_opt(void *dst, const void *src, size_t n) {
  if (nsx_memmove_asm_mode())
    return __memmove_aarch64(dst, src, n);
  return memmove(dst, src, n);
}

int sem_destroy_fake(void **s) {'''
        t = t.replace(anchor, block, 1)
        open(libc_shim, "w", encoding="utf-8", errors="surrogateescape").write(t)
        print("libc_shim.c: NSX_MEMMOVE_OPT wrapper vlozen")

# ---- 2. imports.c: smerovani tabulky ----------------------------------------
t = open(imports_c, encoding="utf-8", errors="surrogateescape").read()
if '"memmove", (uintptr_t)&nsx_memmove_opt' in t:
    print("imports.c: memmove uz smeruje na wrapper")
else:
    old = '  { "memmove", (uintptr_t)&memmove },'
    if old not in t:
        print("imports.c: kotva memmove nenalezena")
        fail += 1
    else:
        # deklarace pred tabulkou
        tanchor = "DynLibFunction dynlib_functions[] = {"
        if tanchor not in t:
            print("imports.c: kotva tabulky nenalezena")
            fail += 1
        else:
            t = t.replace(tanchor,
                          "void *nsx_memmove_opt(void *dst, const void *src, size_t n);\n\n"
                          + tanchor, 1)
            t = t.replace(old, '  { "memmove", (uintptr_t)&nsx_memmove_opt },', 1)
            open(imports_c, "w", encoding="utf-8", errors="surrogateescape").write(t)
            print("imports.c: memmove -> nsx_memmove_opt")

sys.exit(1 if fail else 0)
