"""Build 58: forenzní crash dump — registry, backtrace, identifikace threadu.

Proč: build 57 na kartě padá při startu hry a `nethersx2-exception.log`
obsahuje jen `pc/far/esr/sp/fp/lr`. Z toho se nedá poznat NIC — ani jestli
`pc` míří do JIT kódu, do obrazu `libemucore.so`, nebo do host heapu, ani kdo
to volal. Konkrétní pád z karty (Fallout, build 57):

    pc=0x0000003fb8a5bc94 far=0x0000000000000000 esr=0x92000045
    sp=0x000000081bff0b90 fp=0x000000081bff0b90 lr=0x0000003fb80b6894

esr 0x92000045 = EC 0x24 (data abort, nižší EL), DFSC 0x05 = translation
fault level 1, far=0 → **čtení z NULL**. Zároveň `fp == sp` (žádný založený
rámec) a `lr` je ~9,6 MiB pod `pc`. Všechno ukazuje na JIT kód, ale bez
backtrace a bez mapy regionů je to jen hádanka.

Tenhle patch přidá do `vk_diag_exception()`:

  * všech 29 GPR + fp/lr/sp/pc/pstate,
  * thread: `svcGetThreadId` + jméno z našeho TLS rejstříku
    (`pthr_pin_self_name()`, slabý symbol — v GL buildu se volání zahodí),
  * klasifikaci `pc`/`lr`/`far`/`sp` proti známým regionům (newlib heap,
    obraz jádra, nic z toho) + `svcQueryMemory` (typ + atributy stránky) —
    tedy odpověď na „je to JIT, jádro, nebo heap?“,
  * backtrace po rámecových ukazatelích (až 16 rámců, s kontrolou, že rámec
    leží na zásobníku a roste — jinak by handler sám spadl podruhé).

Všechno je **čtení**: patch nemění žádné chování emulátoru, jen to, co se
zapíše do `nethersx2-exception.log` těsně před `svcExitProcess()`.
`svcQueryMemory` je read-only syscall; v handleru se volá na běžícím threadu
(má vlastní exception stack), ne přes IPC, takže nehrozí uváznutí.

Použití:
  python3 ci/patches/crash_dump.py <source/hooks/vk.c> <source/hooks/vk.h> \
                                   <source/crash.c>
"""
import sys

if len(sys.argv) < 4:
    print("použití: crash_dump.py <hooks/vk.c> <hooks/vk.h> <source/crash.c>")
    sys.exit(2)

# Značky musí být PRO SOUBOR: jeden společný řetězec by při druhém průchodu
# (patcher je idempotentní a v CI běží nad už patchnutým stromem) znamenal, že
# se zbylé dvě editace v tom samém souboru přeskočí.
# Každá ze čtyř editací má vlastní značku (NSX_CRASHDUMP_SIG / _DUMP /
# _PROTO / _CALL) — viz komentář u patch().

# --------------------------------------------------------------------- vk.c
VK_BODY = r'''
/* NSX_CRASHDUMP_SIG (build 58): regiony, do kterých umíme pc/lr/far zařadit.
 * Rozsahy si vyzvedneme z main.c (newlib heap a vyhrazený kus pro obraz
 * jádra) a z modulu libemucore.so. Cokoli mimo je buď JIT/RX kód jádra,
 * nebo jeho fastmem zrcadla — obojí mapuje jádro samo přes
 * svcMapProcessCodeMemory, takže to náš port nezná. Právě proto se k tomu
 * ještě ptáme svcQueryMemory: typ stránky prozradí, o co jde. */
extern char *fake_heap_start, *fake_heap_end;
extern struct so_module emu_mod;

static uintptr_t vk_diag_lo, vk_diag_hi;      /* newlib heap */
static uintptr_t vk_diag_so_lo, vk_diag_so_hi;/* LOAD zóna libemucore.so */
static int vk_diag_ranges_ready;

static void
vk_diag_ranges_init(void) {
  if (vk_diag_ranges_ready)
    return;
  vk_diag_ranges_ready = 1;
  vk_diag_lo = (uintptr_t)fake_heap_start;
  vk_diag_hi = (uintptr_t)fake_heap_end;
  if (emu_mod.load_base) {
    vk_diag_so_lo = (uintptr_t)emu_mod.load_base;
    vk_diag_so_hi = vk_diag_so_lo + emu_mod.load_size;
  }
}

static const char *
vk_diag_region(uint64_t a) {
  if (!a)
    return "NULL";
  vk_diag_ranges_init();
  if (vk_diag_lo && a >= vk_diag_lo && a < vk_diag_hi)
    return "nethersx2 heap";
  if (vk_diag_so_lo && a >= vk_diag_so_lo && a < vk_diag_so_hi)
    return "libemucore.so";
  return "mimo heap i jadro (JIT/RX nebo fastmem)";
}

/* Čistě čtecí syscall. V exception handleru běží na vlákně, které spadlo
 * (má vlastní exception stack), takže žádná reentrance do našeho kódu. */
static void
vk_diag_meminfo(int fd, const char *tag, uint64_t a) {
  MemoryInfo mi;
  u32 pi = 0;
  char line[160];
  const Result rc = svcQueryMemory(&mi, &pi, a);
  int n;
  if (R_FAILED(rc))
    n = snprintf(line, sizeof(line), "mem %-4s 0x%016llx queryMemory=0x%x\n",
                 tag, (unsigned long long)a, (unsigned)rc);
  else
    n = snprintf(line, sizeof(line),
                 "mem %-4s 0x%016llx base=0x%llx size=0x%llx type=0x%x attr=0x%x perm=%d\n",
                 tag, (unsigned long long)a,
                 (unsigned long long)mi.addr,
                 (unsigned long long)mi.size,
                 (unsigned)mi.type, (unsigned)mi.attr, (int)mi.perm);
  if (n > 0)
    (void)write(fd, line, (size_t)n < sizeof(line) ? (size_t)n : sizeof(line));
}

/* Slabý symbol: v GL buildu (bez pthr_pin.c) se volání na linku zahodí. */
extern const char *pthr_pin_self_name(void) __attribute__((weak));
'''

VK_CALL = r'''
  /* NSX_CRASHDUMP_DUMP */
  vk_diag_ranges_init();
  {
    const int tid = (int)svcGetThreadId(NULL, CUR_THREAD_HANDLE);
    const char *nm = (pthr_pin_self_name && pthr_pin_self_name())
                         ? pthr_pin_self_name() : "?";
    char line[160];
    const int n = snprintf(line, sizeof(line),
        "thread tid=%d jmeno=\"%s\" pstate=0x%x\n",
        tid, nm, (unsigned)ctx->pstate);
    if (n > 0)
      (void)write(fd, line, (size_t)n < sizeof(line) ? (size_t)n : sizeof(line));
  }
  for (int i = 0; i < 29; i += 4) {
    char line[160];
    int n = snprintf(line, sizeof(line), "x%-2d", i);
    for (int j = i; j < i + 4 && j < 29; ++j) {
      const int room = (int)sizeof(line) - n - 1;
      if (room <= 0)
        break;
      n += snprintf(line + n, (size_t)room, " %016llx",
                    (unsigned long long)ctx->cpu_gprs[j].x);
    }
    if (n > (int)sizeof(line) - 2)
      n = (int)sizeof(line) - 2;
    if (n > 0) {
      line[n] = '\n';
      (void)write(fd, line, (size_t)n + 1);
    }
  }
  vk_diag_meminfo(fd, "pc", pc);
  vk_diag_meminfo(fd, "lr", link_register);
  vk_diag_meminfo(fd, "far", far);
  vk_diag_meminfo(fd, "sp", sp);
  {
    char line[224];
    const int n = snprintf(line, sizeof(line),
        "region pc=%s | lr=%s | far=%s | sp=%s\n",
        vk_diag_region(pc), vk_diag_region(link_register),
        vk_diag_region(far), vk_diag_region(sp));
    if (n > 0)
      (void)write(fd, line, (size_t)n < sizeof(line) ? (size_t)n : sizeof(line));
  }
  {
    /* Backtrace po fp. JIT kód rámce nezakládá, takže řetězec může být
     * krátký — i tak prozradí, jestli pád přišel z host kódu. Rámec musí
     * ležet na zásobníku a růst, jinak končíme (jinak by podruhé spadl
     * sám handler). */
    uint64_t f = frame_pointer;
    int depth = 0;
    char line[160];
    int n = snprintf(line, sizeof(line), "backtrace (fp retezec):\n");
    if (n > 0)
      (void)write(fd, line, (size_t)n);
    while (depth < 16) {
      const uint64_t *frame = (const uint64_t *)(uintptr_t)f;
      uint64_t next, ret;
      if (f < sp || (f & 0xfu) != 0 || f < 0x1000u)
        break;
      /* Stránka s rámcem musí existovat: JIT kód fp nezakládá a řetězec by
       * jinak ukazoval do nikam — a podruhé by spadl sám handler. */
      {
        MemoryInfo qmi;
        u32 qpi = 0;
        if (R_FAILED(svcQueryMemory(&qmi, &qpi, f)) || qmi.size == 0 ||
            f + 16 > (uint64_t)qmi.addr + (uint64_t)qmi.size)
          break;
      }
      next = frame[0];
      ret = frame[1];
      if (!ret)
        break;
      n = snprintf(line, sizeof(line), "  #%d fp=0x%llx pc=0x%llx [%s]\n",
                   depth, (unsigned long long)f, (unsigned long long)ret,
                   vk_diag_region(ret));
      if (n > 0)
        (void)write(fd, line,
                    (size_t)n < sizeof(line) ? (size_t)n : sizeof(line));
      if (next <= f)
        break;
      f = next;
      ++depth;
    }
    n = snprintf(line, sizeof(line), "backtrace hotovo: %d ramcu\n", depth);
    if (n > 0)
      (void)write(fd, line, (size_t)n);
  }
'''

# --------------------------------------------------------------------- vk.h
VK_H_DECL = """/* NSX_CRASHDUMP_PROTO (build 58): pc je v tomto buildu adresa, ne ukazatel —
 * handler nám předává celý ThreadExceptionDump, aby šly vypsat registry. */
void vk_diag_exception(const ThreadExceptionDump *ctx, uint64_t pc,
                       uint64_t far, uint32_t esr, uint64_t sp,
                       uint64_t frame_pointer, uint64_t link_register);
"""

# ------------------------------------------------------------------- crash.c
CRASH_CALL = """#if defined(USE_VULKAN) && defined(NETHERSX2_VK_DIAGNOSTIC)
  /* NSX_CRASHDUMP_CALL (build 58): cely dump (registry + backtrace + thread). */
  vk_diag_exception(ctx, ctx->pc.x, ctx->far.x, ctx->esr, ctx->sp.x,
                    ctx->fp.x, ctx->lr.x);
#endif
"""


def patch(path, old, new, label, mark):
    text = open(path, encoding="utf-8", errors="surrogateescape").read()
    if mark in text:
        print("%s: uz patchnuto" % label)
        return True
    if old not in text:
        print("%s: KOTVA NENALEZENA" % label)
        return False
    if text.count(old) != 1:
        print("%s: kotva neni jednoznacna (%dx)" % (label, text.count(old)))
        return False
    text = text.replace(old, new, 1)
    open(path, "w", encoding="utf-8", errors="surrogateescape").write(text)
    print("%s: ok" % label)
    return True


ok = True

# 1) vk.c — pomocné funkce před vk_diag_exception, nové tělo uvnitř něj
vk = sys.argv[1]
old_sig = (
    "void\n"
    "vk_diag_exception(uint64_t pc, uint64_t far, uint32_t esr,\n"
    "                  uint64_t sp, uint64_t frame_pointer, uint64_t link_register) {\n"
)
new_sig = VK_BODY + (
    "void\n"
    "vk_diag_exception(const ThreadExceptionDump *ctx, uint64_t pc, uint64_t far,\n"
    "                  uint32_t esr, uint64_t sp, uint64_t frame_pointer,\n"
    "                  uint64_t link_register) {\n"
)
ok &= patch(vk, old_sig, new_sig, "vk.c signature", mark="NSX_CRASHDUMP_SIG")

old_tail = """  const int fd = open(DATA_ROOT "/nethersx2-exception.log",
                      O_WRONLY | O_CREAT | O_TRUNC, 0666);
  if (fd >= 0) {
    if (length > 0)
      (void)write(fd, report, (size_t)length < sizeof(report) ?
                             (size_t)length : sizeof(report));
    fsync(fd);
    close(fd);
  }
"""
new_tail = """  const int fd = open(DATA_ROOT "/nethersx2-exception.log",
                      O_WRONLY | O_CREAT | O_TRUNC, 0666);
  if (fd >= 0) {
    if (length > 0)
      (void)write(fd, report, (size_t)length < sizeof(report) ?
                             (size_t)length : sizeof(report));
""" + VK_CALL + """    fsync(fd);
    close(fd);
  }
"""
ok &= patch(vk, old_tail, new_tail, "vk.c dump", mark="NSX_CRASHDUMP_DUMP")

# 2) vk.h — nový prototyp (starý má jiný seznam parametrů)
vkh = sys.argv[2]
text = open(vkh, encoding="utf-8", errors="surrogateescape").read()
if "NSX_CRASHDUMP_PROTO" not in text:
    old_proto = (
        "void vk_diag_exception(uint64_t pc, uint64_t far, uint32_t esr,\n"
        "                       uint64_t sp, uint64_t frame_pointer, uint64_t link_register);\n"
    )
    if old_proto in text:
        text = text.replace(old_proto, VK_H_DECL, 1)
        open(vkh, "w", encoding="utf-8", errors="surrogateescape").write(text)
        print("vk.h prototyp: ok")
    else:
        print("vk.h prototyp: KOTVA NENALEZENA")
        ok = False
else:
    print("vk.h prototyp: uz patchnuto")

# 3) crash.c — předat celý kontext
ok &= patch(
    sys.argv[3],
    """#if defined(USE_VULKAN) && defined(NETHERSX2_VK_DIAGNOSTIC)
  vk_diag_exception(ctx->pc.x, ctx->far.x, ctx->esr, ctx->sp.x,
                    ctx->fp.x, ctx->lr.x);
#endif
""",
    CRASH_CALL,
    "crash.c volani",
    mark="NSX_CRASHDUMP_CALL",
)

sys.exit(0 if ok else 1)
