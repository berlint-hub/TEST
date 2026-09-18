/* CI log capture — generuje ho ci/build-switch.sh (kopií z ci/patches/),
 * není součást upstreamu. Nekompiluje se samo, jen jako součást portu. */
#include <errno.h>
#include <fcntl.h>
#include <stdarg.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <time.h>
#include <unistd.h>

#ifdef __SWITCH__
#include <switch.h>
#define CI_SWITCH 1
#else
#define CI_SWITCH 0   /* host build (testy parsování/ dedupu) switch API nemá */
#endif

#define CI_LOG_PATH  "/switch/nethersx2/nethersx2-core.log"
#define CI_MARK_PATH "/switch/nethersx2/ci-logging.enabled"
#define CI_RAWLOG_MARK   "/switch/nethersx2/ci-rawlog.enabled"
/* Build 56: žádné markery pro takty. ci-clk.conf ani ci-clk.enabled už
 * neexistují — viz komentář u NSX_NO_BOOST níž. */

static int ci_raw_log(void);
static void ci_flush_repeat(void);
static void ci_atexit(void);

static int ci_enabled = -1;

static int ci_on(void) {
  if (ci_enabled < 0) {
    struct stat st;
    ci_enabled = (stat(CI_MARK_PATH, &st) == 0) ? 1 : 0;
    if (ci_enabled) {
      /* NSX_LOG_QUIET vs. forenzní mód: default je 64 KiB buffer (na SD jen
       * když se naplní). Marker ci-rawlog.enabled (= surový log bez dedupu)
       * od buildu 52 navíc přepne stdout/stderr na NEBUFFEROVANÝ zápis —
       * každý řádek hned na SD. Jde o pomalý mód čistě na pátrání po pádu:
       * při tvrdým pádu se buffer do karty nedostane, takže defaultní log
       * končí klidně o několik sekund dřív, než proces umřel (přesně to se
       * stalo u pádu GT3<->Fallout: log se usekl hned po startu audio
       * threadu a nebylo vidět, co přišlo potom). */
      const int nsx_raw = ci_raw_log();
      if (freopen(CI_LOG_PATH, "a", stdout))
        setvbuf(stdout, NULL, nsx_raw ? _IONBF : _IOFBF,
                nsx_raw ? 0 : 64 * 1024);   /* NSX_LOG_QUIET */
      /* Mesa (a tím i NVK) hlásí svoje chyby přes vk_errorf/mesa_log na
       * stderr a ten dosud nikam neved. Zapisujeme do stejnýho souboru.
       * POZOR: `freopen` na stderr na kartě hlásil SELHAL (build 46), proto
       * se sem jde přes open()+dup2() — o dvě patra níž, ale s errno
       * v logu, takže je vidět, co konkrétně vadilo. */
      int stderr_ok = 0, stderr_err = 0;
      {
        int fd = open(CI_LOG_PATH, O_WRONLY | O_CREAT | O_APPEND, 0644);
        if (fd >= 0) {
          if (dup2(fd, fileno(stderr)) >= 0) {
            stderr_ok = 1;
            setvbuf(stderr, NULL, nsx_raw ? _IONBF : _IOFBF,
                    nsx_raw ? 0 : 64 * 1024);   /* NSX_LOG_QUIET */
          } else {
            stderr_err = errno;
          }
          if (fd != fileno(stderr)) close(fd);
        } else {
          stderr_err = errno;
        }
      }
      {
        const char *nvk_env = getenv("NVK_I_WANT_A_BROKEN_VULKAN_DRIVER");
        fprintf(stdout, "[CI] log capture ON, NVK_I_WANT_A_BROKEN_VULKAN_DRIVER=%s\n",
                nvk_env ? nvk_env : "(nenastaveno)");
        if (stderr_ok)
          fprintf(stdout, "[CI] stderr smerovan do core logu: ok\n");
        else
          fprintf(stdout, "[CI] stderr smerovan do core logu: SELHAL (errno=%d)\n",
                  stderr_err);
        /* Takhle se to musí poznat z logu jedním pohledem: taktům se
         * nešahá (util.c má vypnutý CPU boost), jen se čtou. */
        fprintf(stdout, "[CI] boost: NEPOUZIVAME (appletSetCpuBoostMode je "
                        "vynechany ve util.c; takty ridi sysmodul/governor)\n");
        /* Build 56: žádná hláška o taktech — emulátor je nečte ani
         * nezapisuje, takty drží Ultrahand governor uživatele. */
      }
      /* Build 52: identifikace session. Na hraně přehazování her se v logu
       * střídaj dva procesy (starý flushne zbytek bufferu až poté, co nový
       * začal psát — v logu z karty jsou proto řádky prokládaný/roztrhaný).
       * ts+pid umožní session rozeznat a řadit. Hned flush + fsync, aby
       * začátek session přežil i okamžitej pád.
       * NSX_CI_BUILD: ručně zvedat s každým buildem — jediná jistá známka,
       * která binárka na kartě běží (velikosti .nro se mezi buildy nemění). */
      fprintf(stdout, "[CI] session start build=56 ts=%ld pid=%d%s\n",
              (long)time(NULL), (int)getpid(),
              ci_raw_log() ? " rawlog=unbuffered" : "");
      fflush(stdout);
      fsync(fileno(stdout));
      atexit(ci_atexit);   /* korektní konec = "[CI] session end" v logu */
    }
  }
  return ci_enabled;
}

/* main.c se přes to ptá, jestli má bejt Logging/* z ini (marker na kartě) */
int ci_logging_enabled(void) { return ci_on(); }

/* ---- NSX_LOG_QUIET -------------------------------------------------------
 * Native core umí logovat klidně dva řádky NA FRAME: GT3 se každý frame ptá
 * na čas, což core loguje jako "Timezone=" + "SummerTime=" (na kartě 7 309x
 * každý za jednu session = 14,6 tisíce řádků). S řádkovým bufferem to byl
 * jeden zápis na SD kartu na řádek (~60/s) — z emulačního procesu, kde každá
 * milisekunda na I/O chybí. Fallout tenhle spam neměl a jel 59,9 FPS.
 *
 * Řešení:
 *   * stdout/stderr je plně bufferovaný (64 KiB) — SD se dotkneme jen když se
 *     buffer naplní,
 *   * vzory řádků (čísla = '#') se drží v tabulce 8 posledních a opakování se
 *     jen počítá; souhrn vypíšeme před každou naší řádkou (tj. ~1x za sekundu).
 *     Tabulka (ne "jen předchozí řádek") je důležitá: GT3 střídá Timezone=
 *     a SummerTime=, takže se nikdy neopakuje bezprostředně po sobě,
 *   * naše vlastní [VK]/[GL]/[CI]/[nsx-vk] řádky jdou hned (fflush), takže
 *     měření FPS přežije i pád.
 * Marker /switch/nethersx2/ci-rawlog.enabled potlačení vypne (surový log).
 */
#define CI_LRU 8
static struct {
  char norm[160];
  unsigned count;
  unsigned seq;
} ci_lru[CI_LRU];
static unsigned ci_lru_seq;

/* Naše diagnostika se NESMÍ dedupovat. Tag hledáme kdekoliv v řádce, protože
 * core ji posílá jako "[4][VK] FPS …" — prefix [4] je priorita logu. Kdyby se
 * hledal jen na začátku, FPS řádky (číselně si podobné) by spadly do dedupu. */
static int ci_is_ours(const char *s) {
  return strstr(s, "[VK] ") || strstr(s, "[GL] ") || strstr(s, "[CI] ") ||
         strstr(s, "[nsx-vk] ");
}

static void ci_norm(const char *in, char *out, size_t cap) {
  size_t o = 0;
  int digit = 0;
  for (; *in && o + 1 < cap; ++in) {
    if (*in >= '0' && *in <= '9') {
      if (!digit) { out[o++] = '#'; digit = 1; }
    } else {
      out[o++] = *in;
      digit = 0;
    }
  }
  out[o] = 0;
}

static int ci_raw_log(void) {
  static int cached = -1;
  if (cached < 0) {
    struct stat st;
    cached = (stat(CI_RAWLOG_MARK, &st) == 0) ? 1 : 0;
  }
  return cached;
}

/* Souhrny se vypisují i časem/práhlem, protože hojně opakované řádky jdou
 * z emulačního jádra, kdežto naše FPS řádka jde na stdout napřímo (míjí
 * ci_emit) — bez tohohle by se souhrn objevil jen při eviction z tabulky. */
static unsigned ci_suppressed;
static uint64_t ci_last_flush_ns;

static uint64_t ci_now_ns(void) {
  struct timespec ts;
  if (clock_gettime(CLOCK_MONOTONIC, &ts) != 0)
    return 0;
  return (uint64_t)ts.tv_sec * UINT64_C(1000000000) + (uint64_t)ts.tv_nsec;
}

static void ci_emit_summary(const char *norm, unsigned count) {
  if (count > 1)
    fprintf(stdout, "[CI] ... vzor se opakoval %ux (potlaceno; "
                    "ci-rawlog.enabled to vypne): %s\n", count, norm);
}

/* Souhrny všech sledovaných vzorů. Volá se před našimi řádky (~1x za sekundu),
 * takže se opakování neztratí, ale ani nezaplaví kartu. */
static void ci_flush_repeat(void) {
  for (int i = 0; i < CI_LRU; ++i) {
    if (!ci_lru[i].norm[0] || !ci_lru[i].count)
      continue;
    ci_emit_summary(ci_lru[i].norm, ci_lru[i].count);
    ci_lru[i].count = 0;   /* vzor zůstává, počítá se dál od nuly */
  }
  ci_suppressed = 0;
  ci_last_flush_ns = ci_now_ns();
}

/* Potlačeno dost řádků (nebo uplynula sekunda)? Vypiš souhrny. */
static void ci_maybe_flush(void) {
  const uint64_t now = ci_now_ns();
  if (ci_suppressed >= 64 ||
      (ci_last_flush_ns && now && now - ci_last_flush_ns >= UINT64_C(1000000000)))
    ci_flush_repeat();
}

static void ci_emit(const char *line) {
  if (!line)
    return;
  if (ci_is_ours(line)) {           /* naše diagnostika: bez dedupu a hned */
    ci_flush_repeat();
    fputs(line, stdout);
    fputc('\n', stdout);
    fflush(stdout);
    return;
  }
  if (ci_raw_log()) {
    fputs(line, stdout);
    fputc('\n', stdout);
    return;
  }
  char norm[160];
  ci_norm(line, norm, sizeof(norm));
  for (int i = 0; i < CI_LRU; ++i) {
    if (!ci_lru[i].norm[0])
      continue;
    if (!strcmp(ci_lru[i].norm, norm)) {
      ++ci_lru[i].count;
      ++ci_suppressed;
      ci_maybe_flush();
      return;
    }
  }
  int slot = 0;                     /* volný slot, jinak nejstarší vzor */
  for (int i = 0; i < CI_LRU; ++i) {
    if (!ci_lru[i].norm[0]) { slot = i; break; }
    if (ci_lru[i].seq < ci_lru[slot].seq) slot = i;
  }
  if (ci_lru[slot].norm[0] && ci_lru[slot].count > 1)
    ci_emit_summary(ci_lru[slot].norm, ci_lru[slot].count);
  strncpy(ci_lru[slot].norm, norm, sizeof(ci_lru[slot].norm) - 1);
  ci_lru[slot].norm[sizeof(ci_lru[slot].norm) - 1] = 0;
  ci_lru[slot].count = 1;
  ci_lru[slot].seq = ++ci_lru_seq;
  fputs(line, stdout);
  fputc('\n', stdout);
  ci_maybe_flush();
}

/* ---- build 52: forenzní konec session -------------------------------------
 * Korektní exit() tady nechá v logu "[CI] session end". Tvrdej pád (segv,
 * abort, fatální chyba systému) atexit NESPUSTÍ — chybí-li v logu tenhle
 * řádek, proces umřel tvrdě. Přesně takhle se pozná, jestli při přehazování
 * her (GT3<->Fallout) umírá emulátor sám, nebo něco kolem něj. */
static void ci_atexit(void) {
  if (ci_enabled != 1)
    return;
  ci_flush_repeat();
  fprintf(stdout, "[CI] session end (korektni exit)\n");
  fflush(stdout);
  fsync(fileno(stdout));
}

/* ---- build 55: konec session, který se DO logu opravdu dostane ------------
 * atexit výše je na Switchi mrtvá větev: port končí přes __libnx_exit()
 * (source/main.c:2113), což v libnx (nx/source/runtime/init.c:190) volá
 * __appExit() + __nx_exit() — atexit se nespustí a stdio se ne-flushne.
 * Proto v logu buildu 54 nebyl ani „session end", ani posledních ~26 sekund
 * session 5 (GT3 přitom ve vulkan logu běželo 23 FPS oken a skončilo čistě
 * přes vkDestroySwapchainKHR/vkDestroyDevice): 64 KiB buffer se zahodil.
 *
 * Volá se explicitně z source/main.c (čistý konec), source/error.c (fatal)
 * a source/crash.c (pád) — `why` říká, která z těch tří cest to byla.
 */
void ci_session_end(const char *why) {
  if (ci_enabled != 1)
    return;
  ci_flush_repeat();
  fprintf(stdout, "[CI] session end (%s)\n", why ? why : "?");
  fflush(stdout);
  fsync(fileno(stdout));
}

/* ---- NSX_NO_BOOST --------------------------------------------------------
 * Port zapínal CPU boost (appletSetCpuBoostMode(FastLoad)) na startu a po
 * 60 framech ho shazoval. FastLoad ale podle libnx znamená „Boost CPU.
 * Additionally, throttle GPU to minimum“ — CPU 1785 MHz a GPU 76 MHz.
 * Uživatel na kartě viděl právě „GPU na minimu“ a hru to zpomalilo (GT3 29,1
 * vs 31,6 FPS); hlavně se to však pere se sysmoduly, které řídí takty
 * (Ultrahand governor / sys-clk) a shazovalo mu systém. Patch
 * ci/patches/util_no_boost.py proto cpu_boost() ve util.c vyprázdnil a tenhle
 * build takty vůbec nenastavuje — jen je čte (NSX_CLK) a zapíše jedině na
 * explicitní požadavek z ci-clk.conf.
 */

/* ---- Build 56: SLEDOVÁNÍ TAKTŮ JE PRYČ ---------------------------------
 * Byly tu funkce ci_clk_boot/ci_clk_diag/ci_clk_read/ci_clk_parse/
 * ci_clk_set_mhz (clkrst session cpu/gpu/emc + fallback na starší službu
 * pcv + čtení APM režimu) a markery ci-clk.enabled / ci-clk.conf.
 *
 * Proč je to celé venku:
 *   1) Uživatel má Ultrahand s governorem, který drží takty na maximu
 *      (cpu 2703 / gpu 1497 / emc 2666 MHz). Čtení z emulátoru nic
 *      nepřináší — hodnota je dopředu známá a nemění se.
 *   2) clkrst/pcv session v našem procesu se s tím governorem perou.
 *      Atmosphere crash reporty z karty (pcv Result 2011-0102 User Break,
 *      hoc:clk Result 2345-0048) jsou z BUILDU 50, kde tyhle session běhely
 *      od buildu 47. Od buildu 56 se emulátor pcv nedotkne vůbec, ani
 *      opt-in.
 *   3) Zápis taktů (ci-clk.conf) shazoval GPU: ApmCpuBoostMode_FastLoad
 *      podle libnx znamená „Boost CPU. Additionally, throttle GPU to
 *      minimum" = CPU 1785 + GPU 76 MHz (v logu bylo gpu=76).
 *
 * Kdyby někdy bylo potřeba takty měřit: NE přes clkrst/pcv z emulátoru,
 * ale zvlášť (sys-clk log / Ultrahand overlay).
 */

/* Jednoznačná identifikace běžícího .nro. Volá se z main.c až v běhu
 * (po setenv z kroku 7a), takže na rozdíl od hlášky v ci_on() nemůže
 * ukazovat hodnotu z doby před main() — z karty se totiž jinak „GL vs VK"
 * odhaduje jen podle toho, jestli v logu jsou [VK] řádky, a to je slabý. */
void ci_renderer_banner(void) {
  if (!ci_on()) return;
#ifdef USE_VULKAN
  const char *nvk = getenv("NVK_I_WANT_A_BROKEN_VULKAN_DRIVER");
# ifdef GS_RENDERER
  fprintf(stdout, "[CI] emulator nro: VK build (GS_RENDERER=%d), "
                  "NVK_I_WANT_A_BROKEN_VULKAN_DRIVER=%s\n",
          GS_RENDERER, nvk ? nvk : "(nenastaveno)");
# else
  fprintf(stdout, "[CI] emulator nro: VK build, NVK_I_WANT_A_BROKEN_VULKAN_DRIVER=%s\n",
          nvk ? nvk : "(nenastaveno)");
# endif
#else
# ifdef GS_RENDERER
  fprintf(stdout, "[CI] emulator nro: GL build (GS_RENDERER=%d) — Vulkan v tomhle .nro neni\n",
          GS_RENDERER);
# else
  fprintf(stdout, "[CI] emulator nro: GL build — Vulkan v tomhle .nro neni\n");
# endif
#endif
}

int ci_android_log_write(int prio, const char *tag, const char *text) {
  if (!ci_on()) return 0;
  char line[640];
  snprintf(line, sizeof(line), "[%d][%s] %s", prio, tag ? tag : "-", text ? text : "");
  ci_emit(line);
  return 0;
}

int ci_android_log_vprint(int prio, const char *tag, const char *fmt, va_list va) {
  if (!ci_on()) return 0;
  char buf[512], line[640];
  vsnprintf(buf, sizeof(buf), fmt, va);
  snprintf(line, sizeof(line), "[%d][%s] %s", prio, tag ? tag : "-", buf);
  ci_emit(line);
  return 0;
}

/* Silná verze: slabou definici v imports.c přebije i když ji upstream
 * nezjemnil, protože imports.c ji jen předává do import tabulky. */
int __android_log_print(int prio, const char *tag, const char *fmt, ...) {
  va_list va;
  va_start(va, fmt);
  int r = ci_android_log_vprint(prio, tag, fmt, va);
  va_end(va);
  return r;
}
