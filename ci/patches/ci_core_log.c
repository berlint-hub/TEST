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
#define CI_CLK_CONF  "/switch/nethersx2/ci-clk.conf"

/* libnx pojmenovává režimy takhle: ApmPerformanceMode_Invalid/Normal/Boost
 * (-1/0/1) a AppletOperationMode_Handheld/Console (0/1). Používáme proto
 * hodnoty s přetypováním: build 47 spadl přesně na tom, že jsem napsal
 * „Handheld/Docked", což v žádné verzi libnx není (viz HANDOFF §8). */
#define CI_APM_HANDHELD  ((ApmPerformanceMode)0)
#define CI_APM_DOCKED    ((ApmPerformanceMode)1)
#define CI_OPMODE_DOCKED ((AppletOperationMode)1)

static int ci_enabled = -1;

static int ci_on(void) {
  if (ci_enabled < 0) {
    struct stat st;
    ci_enabled = (stat(CI_MARK_PATH, &st) == 0) ? 1 : 0;
    if (ci_enabled) {
      if (freopen(CI_LOG_PATH, "a", stdout))
        setvbuf(stdout, NULL, _IOFBF, 64 * 1024);   /* NSX_LOG_QUIET */
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
            setvbuf(stderr, NULL, _IOFBF, 64 * 1024);   /* NSX_LOG_QUIET */
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
        fprintf(stdout, "[CI] takty: jen cteni; zapis jedine kdyz na karte "
                        "existuje ci-clk.conf\n");
      }
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

/* ---- NSX_CLK: takty CPU/GPU/EMC -----------------------------------------
 * Dvě věci, které se z karty špatně dohledávají:
 *   1) ČTENÍ taktů — build 46 je zkoušel přes clkrst a v logu byly nuly
 *      ("cpu=0 gpu=0 emc=0"), takže se nedalo ověřit ani „GPU na minimu".
 *      Tady se to zkouší znovu a tentokrát se do logu píšou i Result kódy
 *      (init/open/get), aby bylo vidět, který krok vadí. Fallback je starší
 *      služba pcv (na novějším FW už většinou neexistuje).
 *   2) NASTAVENÍ taktů — marker /switch/nethersx2/ci-clk.conf, textový
 *      soubor s řádky jako "cpu=1785 gpu=460 emc=1600" (MHz; co tam není,
 *      se nechá být). Aplikuje se jednou na startu emulace a každý zápis se
 *      loguje včetně hodnoty před/po. Bez markeru se do taktů nesahá.
 *
 * Hodnoty pro orientaci: CPU 1020 (základ) / 1785 (boost), GPU 76 (boost
 * mode!) / 384 / 460 (max handheld) / 768 (docked), EMC 1331/1600.
 */
static int ci_atoi_mhz(const char **pp) {
  const char *p = *pp;
  unsigned v = 0;
  if (*p < '0' || *p > '9')
    return -1;
  while (*p >= '0' && *p <= '9') {
    v = v * 10u + (unsigned)(*p - '0');
    if (v > 100000u) v = 100000u;   /* blbost v souboru → nepřeteče */
    ++p;
  }
  *pp = p;
  return (int)v;
}

/* Vrátí bitovou masku toho, co se v textu našlo: 1=cpu, 2=gpu, 4=emc.
 * Je to samostatná funkce (ne static), protože se dá testovat na hostiteli. */
unsigned ci_clk_parse(const char *text, unsigned *cpu, unsigned *gpu, unsigned *emc) {
  unsigned mask = 0;
  const char *p = text ? text : "";
  while (*p) {
    while (*p == ' ' || *p == '\t' || *p == ',' || *p == ';' ||
           *p == '\n' || *p == '\r')
      ++p;
    if (!*p)
      break;
    if (*p == '#' || *p == '/') {          /* komentář do konce řádku */
      while (*p && *p != '\n')
        ++p;
      continue;
    }
    int which = -1;
    if (!strncmp(p, "cpu", 3)) { which = 0; p += 3; }
    else if (!strncmp(p, "gpu", 3)) { which = 1; p += 3; }
    else if (!strncmp(p, "emc", 3)) { which = 2; p += 3; }
    while (*p == ' ' || *p == '\t')
      ++p;
    if (which < 0 || *p != '=') {          /* nesmysl → přeskoč token */
      while (*p && *p != ' ' && *p != '\t' && *p != '\n' && *p != ',' && *p != ';')
        ++p;
      continue;
    }
    ++p;
    while (*p == ' ' || *p == '\t')
      ++p;
    int v = ci_atoi_mhz(&p);
    if (v > 0) {
      if (which == 0) *cpu = (unsigned)v;
      else if (which == 1) *gpu = (unsigned)v;
      else *emc = (unsigned)v;
      mask |= 1u << which;
    }
  }
  return mask;
}

#if CI_SWITCH
static ClkrstSession ci_sess[3];          /* 0=cpu, 1=gpu, 2=emc */
static int ci_sess_ok[3];
static int ci_clk_probed;
static int ci_pcv_ok = -1;
static Result ci_r_init;                  /* Resulty pro diagnostiku */
static Result ci_r_open[3], ci_r_get[3], ci_r_set[3];
/* POZOR, tady byl důvod nul v buildu 46: libnx má DVĚ různé sady jmen.
 * PcvModule_CpuBus = 0 (stará služba pcv), ale clkrstOpenSession chce
 * PcvModuleId_CpuBus = 0x40000001 — s nulou session vznikne, ale čtení
 * vrací chybu (proto „cpu=0 gpu=0 emc=0" v celé session). */
static const PcvModuleId ci_mod_id[3] = { PcvModuleId_CpuBus, PcvModuleId_GPU,
                                          PcvModuleId_EMC };
static const char *ci_clk_name(int i) {
  return i == 0 ? "cpu" : (i == 1 ? "gpu" : "emc");
}

static void ci_clk_probe(void) {
  if (ci_clk_probed)
    return;
  ci_clk_probed = 1;
  ci_r_init = clkrstInitialize();
  if (R_SUCCEEDED(ci_r_init)) {
    for (int i = 0; i < 3; ++i)
      ci_r_open[i] = clkrstOpenSession(&ci_sess[i], ci_mod_id[i], 3);
    for (int i = 0; i < 3; ++i)
      ci_sess_ok[i] = R_SUCCEEDED(ci_r_open[i]);
  }
  if (!ci_sess_ok[0] && !ci_sess_ok[1] && !ci_sess_ok[2])
    ci_pcv_ok = R_SUCCEEDED(pcvInitialize()) ? 1 : 0;   /* starší cesta */
}
#endif

#if CI_SWITCH
static unsigned ci_mhz(u32 hz) { return (unsigned)(hz / 1000000u); }
#endif

/* Naplní takty v MHz. Vrací 1, když aspoň jedno čtení prošlo. */
int ci_clk_read(unsigned *cpu, unsigned *gpu, unsigned *emc) {
  unsigned v[3] = { 0, 0, 0 };
  int got = 0;
#if CI_SWITCH
  ci_clk_probe();
  for (int i = 0; i < 3; ++i) {
    if (!ci_sess_ok[i])
      continue;
    u32 hz = 0;
    ci_r_get[i] = clkrstGetClockRate(&ci_sess[i], &hz);
    if (R_SUCCEEDED(ci_r_get[i])) { v[i] = ci_mhz(hz); got = 1; }
  }
  if (!got && ci_pcv_ok == 1) {
    u32 hz = 0;
    if (R_SUCCEEDED(pcvGetClockRate(PcvModule_CpuBus, &hz))) { v[0] = ci_mhz(hz); got = 1; }
    if (R_SUCCEEDED(pcvGetClockRate(PcvModule_GPU, &hz)))    { v[1] = ci_mhz(hz); got = 1; }
    if (R_SUCCEEDED(pcvGetClockRate(PcvModule_EMC, &hz)))    { v[2] = ci_mhz(hz); got = 1; }
  }
#endif
  if (cpu) *cpu = v[0];
  if (gpu) *gpu = v[1];
  if (emc) *emc = v[2];
  return got;
}

/* Jednorázová diagnostika taktů: proč (ne)jde čtení + v jakém režimu je APM. */
void ci_clk_diag(void) {
  static int done;
  if (done)
    return;
  done = 1;
#if CI_SWITCH
  ci_clk_probe();
  fprintf(stdout, "[CI] clk: clkrst init=0x%x open cpu=0x%x gpu=0x%x emc=0x%x "
                  "pcv=%d (0 = ok)\n",
          (unsigned)ci_r_init, (unsigned)ci_r_open[0], (unsigned)ci_r_open[1],
          (unsigned)ci_r_open[2], ci_pcv_ok);
  unsigned c = 0, g = 0, e = 0;
  int got = ci_clk_read(&c, &g, &e);
  fprintf(stdout, "[CI] clk: cpu=%u gpu=%u emc=%u MHz (get cpu=0x%x gpu=0x%x "
                  "emc=0x%x)%s\n",
          c, g, e, (unsigned)ci_r_get[0], (unsigned)ci_r_get[1],
          (unsigned)ci_r_get[2],
          got ? "" : " -- cteni taktu nefunguje, v FPS radce budou nuly");
  if (R_SUCCEEDED(apmInitialize())) {
    ApmPerformanceMode mode = ApmPerformanceMode_Invalid;
    u32 ch = 0, cd = 0;
    Result rm = apmGetPerformanceMode(&mode);
    Result rh = apmGetPerformanceConfiguration(CI_APM_HANDHELD, &ch);
    Result rd = apmGetPerformanceConfiguration(CI_APM_DOCKED, &cd);
    /* Režim 1 = boost. Konfigurace 0x9222000A (handheld) / 0x92220009 (docked)
     * = CPU nahoru + GPU na minimum, tj. FastLoad. */
    fprintf(stdout, "[CI] apm: mode=%d handheld=0x%x docked=0x%x "
                    "(rc=0x%x/0x%x/0x%x)\n",
            (int)mode, (unsigned)ch, (unsigned)cd, (unsigned)rm,
            (unsigned)rh, (unsigned)rd);
    apmExit();
  } else {
    fprintf(stdout, "[CI] apm: sluzbu nešlo otevřít (nepůjde číst režim)\n");
  }
#endif
}

#if CI_SWITCH
static void ci_clk_set_mhz(int which, unsigned mhz, const char *why) {
  if (mhz == 0)
    return;
  if (!ci_sess_ok[which]) {
    fprintf(stdout, "[CI] clk: %s=%u MHz nelze nastavit (%s) — clkrst session "
                    "se neotevrela (rc=0x%x)\n",
            ci_clk_name(which), mhz, why, (unsigned)ci_r_open[which]);
    fflush(stdout);
    return;
  }
  u32 hz = 0;
  unsigned before = 0, after = 0;
  if (R_SUCCEEDED(clkrstGetClockRate(&ci_sess[which], &hz))) before = ci_mhz(hz);
  ci_r_set[which] = clkrstSetClockRate(&ci_sess[which], mhz * 1000000u);
  if (R_SUCCEEDED(clkrstGetClockRate(&ci_sess[which], &hz))) after = ci_mhz(hz);
  fprintf(stdout, "[CI] clk: %s -> %u MHz (bylo %u, po zapisu %u) rc=0x%x (%s)\n",
          ci_clk_name(which), mhz, before, after, (unsigned)ci_r_set[which], why);
  fflush(stdout);
}
#endif

/* Jednorázově: diagnostika taktů + (opt-in) zápis z ci-clk.conf. */
void ci_clk_boot(void) {
  static int done;
  if (done)
    return;
  done = 1;
  ci_clk_diag();
#if CI_SWITCH
  {
    FILE *f = fopen(CI_CLK_CONF, "r");
    if (!f)
      return;
    char text[256];
    size_t n = fread(text, 1, sizeof(text) - 1, f);
    text[n] = 0;
    fclose(f);
    unsigned cpu = 0, gpu = 0, emc = 0;
    unsigned mask = ci_clk_parse(text, &cpu, &gpu, &emc);
    if (!mask) {
      fprintf(stdout, "[CI] clk: %s nema platny zapis (cekam napr. "
                      "\"cpu=1785 gpu=460\")\n", CI_CLK_CONF);
      fflush(stdout);
      return;
    }
    if (mask & 1u) ci_clk_set_mhz(0, cpu, "ci-clk.conf");
    if (mask & 2u) ci_clk_set_mhz(1, gpu, "ci-clk.conf");
    if (mask & 4u) ci_clk_set_mhz(2, emc, "ci-clk.conf");
  }
#endif
}

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
