/* pthr_pin.c — build 55: identita emulačních threadů + jejich pinování na jádra.
 *
 * PROČ TOHLE VŮBEC EXISTUJE (měřeno na kartě, build 49 i 54, 4× stejně):
 *   [CI] cores: mask=0xf -> hot=0x7 ee=0 work=1,2 bg=3
 *   thread #1 -> core 1, EE/VM -> core 0, thread #2 -> core 2,
 *   thread #3 -> core 1, bg (audio) -> core 3
 * Jádro 0 má EE (+VU0, jeden thread). O jádra 1 a 2 se ale dělí MTGS (GS/
 * Vulkan), VU1 (MTVU) A worker thready — a upstream `assign_work_core()`
 * jim dává jen PREFEROVANÉ jádro round-robinem, maska zůstává work_mask
 * (= obě jádra), takže na sebe navzájem migrují a škrtají se. GT3 je přitom
 * měřeně CPU-bound (GPU takt 4,9× víc = +1 % FPS) a EE headroom nic nepřinesl
 * — zbývá právě tohle rozvržení.
 *
 * CO SE TADY DĚLÁ:
 *  1) IDENTITA. Port má v tabulce symbolů `prctl` a `sched_setaffinity` jako
 *     no-op stuby (source/imports.c: „core pins its own threads via libnx").
 *     Jádro si tedy thready pojmenovává (PR_SET_NAME) a pinuje (affinita)
 *     samo a my to dosud zahazovali. Tady se to POPRVÉ LOGUJE:
 *       [CI] prctl PR_SET_NAME: tid=… -> "MTGS"
 *       [CI] affinity (zadost jadra): tid=… (MTGS) maska=0x… -> Zahozeno
 *     Z toho poznáme, který thread je MTGS a který VU1 — bez hádání.
 *  2) PINOVÁNÍ. `ci-pin.conf` na SD (/switch/nethersx2/) řídí rozvržení bez
 *     rebuildu. Default (soubor neexistuje) je mode=auto: první dva work
 *     thready dostanou EXKLUSIVNÍ jádro (žádná migrace), zbytek zůstává
 *     v poolu. Pravidla podle jména jsou přesnější a vyhodnocují se ve
 *     chvíli, kdy jádro thread pojmenuje.
 *
 * ŽÁDNÝ ZÁSAH DO TAKTŮ. Tenhle modul se pcv/clkrst nedotkne — viz
 * ci_core_log.c a HANDOFF §0b (fatal v pcv při kolizi s governorem).
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <switch.h>

#include "pthr_pin.h"

#define PIN_CONF "/switch/nethersx2/ci-pin.conf"
#define PIN_NOPIN_MARK "/switch/nethersx2/ci-nopin.enabled"

/* Režimy rozvržení work threadů. */
enum {
  PIN_MODE_AUTO = 0,   /* #1 a #2 exkluzivně na svá jádra, zbytek pool (default) */
  PIN_MODE_OFF,        /* upstream round-robin se sdílenou maskou */
  PIN_MODE_EXCL_ALL,   /* každý work thread exkluzivně na svém jádře round-robin */
};

static int pin_probed;
static int pin_mode = PIN_MODE_AUTO;
static int pin_order_core[2] = { -1, -1 };   /* work thread #1/#2 -> číslo jádra */
static unsigned pin_work_mask;                 /* sdílená maska poolu (z pthr.c) */

/* Jména, která nám jádro prozradí přes prctl(PR_SET_NAME). Klíč je Horizon
 * thread ID (gettid_fake -> svcGetThreadId), takže k němu umíme přiřadit
 * i žádost o afinitu, která přijde z jiného místa. */
#define NAME_SLOTS 24
static struct { int tid; char name[32]; } pin_names[NAME_SLOTS];
static int pin_name_count;
static Mutex pin_lock;

/* Pravidla „jméno = jádro|pool" z ci-pin.conf. */
#define RULE_SLOTS 12
static struct { char name[32]; int core; int pool; } pin_rules[RULE_SLOTS];
static int pin_rule_count;

static int pin_nopin_marked(void) {
  static int v = -1;
  if (v < 0) {
    struct stat st;
    v = (stat(PIN_NOPIN_MARK, &st) == 0) ? 1 : 0;
  }
  return v;
}

static int pin_core_valid(int core) { return core >= 0 && core < 32; }

/* pthr.c po core_init_once() předá sdílenou masku work poolu — pravidlo
 * „JMÉNO=pool" bez ní neumí thread vrátit zpátky mezi jádra. */
void pthr_pin_set_work_mask(unsigned mask) { pin_work_mask = mask; }

/* Načte ci-pin.conf jednou za běh. Formát (řádek = pravidlo, # = komentář):
 *   mode=auto|off|excl_all
 *   order1=<jádro>        pin work threadu #1 (default 1)
 *   order2=<jádro>        pin work threadu #2 (default 2)
 *   <JMÉNO>=<jádro>       pin threadu, který jádro pojmenovalo <JMÉNO>
 *   <JMÉNO>=pool          nechat <JMÉNO> v poolu (sdílená maska)
 * Jména jsou case-sensitive přesně tak, jak je napíše jádro. */
static void pin_probe(void) {
  if (pin_probed)
    return;
  pin_probed = 1;
  pin_order_core[0] = 1;
  pin_order_core[1] = 2;

  FILE *f = fopen(PIN_CONF, "r");
  if (!f) {
    fprintf(stdout, "[CI] pin: mode=auto (default; %s neexistuje) -> work #1 a #2 "
                    "exkluzivne na svem jadre, zbytek pool\n", PIN_CONF);
    fflush(stdout);
    return;
  }
  char line[128];
  while (fgets(line, sizeof(line), f)) {
    char *s = line;
    while (*s == ' ' || *s == '\t') s++;
    if (*s == '#' || *s == '\n' || *s == '\0')
      continue;
    char *eq = strchr(s, '=');
    if (!eq)
      continue;
    *eq = '\0';
    char *val = eq + 1;
    char *nl = strchr(val, '\n');
    if (nl)
      *nl = '\0';
    char *key = s;
    char *kend = eq - 1;
    while (kend > key && (*kend == ' ' || *kend == '\t'))
      *kend-- = '\0';

    if (!strcmp(key, "mode")) {
      if (!strcmp(val, "off"))       pin_mode = PIN_MODE_OFF;
      else if (!strcmp(val, "excl_all")) pin_mode = PIN_MODE_EXCL_ALL;
      else                           pin_mode = PIN_MODE_AUTO;
    } else if (!strcmp(key, "order1") || !strcmp(key, "order2")) {
      const int idx = (key[5] == '1') ? 0 : 1;
      if (!strcmp(val, "pool"))
        pin_order_core[idx] = -1;
      else {
        const int c = atoi(val);
        if (pin_core_valid(c))
          pin_order_core[idx] = c;
      }
    } else if (pin_rule_count < RULE_SLOTS) {
      strncpy(pin_rules[pin_rule_count].name, key,
              sizeof(pin_rules[pin_rule_count].name) - 1);
      pin_rules[pin_rule_count].name[sizeof(pin_rules[pin_rule_count].name) - 1] = '\0';
      if (!strcmp(val, "pool")) {
        pin_rules[pin_rule_count].pool = 1;
        pin_rules[pin_rule_count].core = -1;
      } else {
        pin_rules[pin_rule_count].pool = 0;
        pin_rules[pin_rule_count].core = atoi(val);
      }
      pin_rule_count++;
    }
  }
  fclose(f);

  fprintf(stdout, "[CI] pin: mode=%s order1=%d order2=%d pravidel=%d (ze %s)\n",
          pin_mode == PIN_MODE_OFF ? "off"
                                   : (pin_mode == PIN_MODE_EXCL_ALL ? "excl_all" : "auto"),
          pin_order_core[0], pin_order_core[1], pin_rule_count, PIN_CONF);
  fflush(stdout);
}

static const char *pin_name_of(int tid) {
  for (int i = 0; i < pin_name_count; i++)
    if (pin_names[i].tid == tid)
      return pin_names[i].name;
  return NULL;
}

static void pin_remember_name(int tid, const char *name) {
  if (pin_name_count < NAME_SLOTS) {
    strncpy(pin_names[pin_name_count].name, name,
            sizeof(pin_names[pin_name_count].name) - 1);
    pin_names[pin_name_count].name[sizeof(pin_names[pin_name_count].name) - 1] = '\0';
    pin_names[pin_name_count].tid = tid;
    pin_name_count++;
  }
}

/* Aplikuje pravidlo podle jména (volá se, když jádro thread pojmenuje, tedy
 * PO jeho vytvoření — pin jde přenastavit kdykoli). Vrací 1, když pin změnil. */
int pthr_pin_by_name(const char *name) {
  if (!name || pin_nopin_marked())
    return 0;
  mutexLock(&pin_lock);
  pin_probe();
  int hit = 0, core = -1, pool = 0;
  for (int i = 0; i < pin_rule_count; i++) {
    if (!strcmp(pin_rules[i].name, name)) {
      hit = 1;
      core = pin_rules[i].core;
      pool = pin_rules[i].pool;
      break;
    }
  }
  mutexUnlock(&pin_lock);
  if (!hit)
    return 0;
  if (pool) {
    /* Bez tohohle by „pool" nic neudělalo, když thread už byl exkluzivně
     * pinned (auto/order pravidlo běží dřív, při vytvoření threadu). */
    const unsigned m = pin_work_mask;
    if (m)
      svcSetThreadCoreMask(CUR_THREAD_HANDLE, 0, m);
    fprintf(stdout, "[CI] pin: \"%s\" -> pool (maska=0x%x, pravidlo z ci-pin.conf)\n",
            name, m);
    fflush(stdout);
    return 1;
  }
  if (!pin_core_valid(core))
    return 0;
  svcSetThreadCoreMask(CUR_THREAD_HANDLE, core, 1u << core);
  fprintf(stdout, "[CI] pin: \"%s\" -> core=%d EXKLUSIVNE (pravidlo z ci-pin.conf)\n",
          name, core);
  fflush(stdout);
  return 1;
}

/* Jádro volá prctl(PR_SET_NAME, ...) — dosud no-op. Tady se jméno zapamatuje,
 * zaloguje a případně rovnou pře-pinuje podle pravidla.
 * Jméno držíme v TLS, protože prctl(PR_GET_NAME) musí vrátit jméno VOLAJÍCÍHO
 * threadu, ne jméno toho, který si ho nastavil naposled. */
static __thread char nsx_self_name[32];

const char *pthr_pin_self_name(void) {
  return nsx_self_name[0] ? nsx_self_name : NULL;
}

void pthr_pin_set_name(const char *name) {
  if (!name)
    return;
  strncpy(nsx_self_name, name, sizeof(nsx_self_name) - 1);
  nsx_self_name[sizeof(nsx_self_name) - 1] = '\0';
  const int tid = (int)svcGetThreadId(NULL, CUR_THREAD_HANDLE);
  mutexLock(&pin_lock);
  pin_probe();
  pin_remember_name(tid, name);
  mutexUnlock(&pin_lock);
  fprintf(stdout, "[CI] prctl PR_SET_NAME: tid=%d -> \"%s\"\n", tid, name);
  fflush(stdout);
  pthr_pin_by_name(name);
}

/* Jádro volá sched_setaffinity — port ji zahazuje (core si myslí, že pinuje).
 * Poprvé to vidíme: kdo, jakou masku chtěl a jak to dopadlo. */
void pthr_pin_affinity_note(int tid, unsigned long long mask) {
  mutexLock(&pin_lock);
  pin_probe();
  const char *nm = pin_name_of(tid);
  mutexUnlock(&pin_lock);
  fprintf(stdout, "[CI] affinity (zadost jadra): tid=%d (%s) maska=0x%llx -> %s\n",
          tid, nm ? nm : "bez jmena", mask,
          pin_nopin_marked() ? "ci-nopin: nic se nepinuje"
                             : "ZAHOZENO (port affinitu neprovadi; pin ridi ci-pin.conf)");
  fflush(stdout);
}

/* Volá trampoline v pthr.c pro každý work thread (MTGS/VU1/worker).
 * `seq` je pořadí vytvoření (1..), `preferred` je jádro z round-robinu. */
void pthr_pin_note(int seq, int preferred) {
  if (pin_nopin_marked())
    return;
  mutexLock(&pin_lock);
  pin_probe();
  const int mode = pin_mode;
  int core = -1;
  if (mode == PIN_MODE_AUTO && seq >= 1 && seq <= 2)
    core = pin_order_core[seq - 1];
  else if (mode == PIN_MODE_EXCL_ALL)
    core = preferred;
  mutexUnlock(&pin_lock);

  if (!pin_core_valid(core)) {
    fprintf(stdout, "[CI] pin: work #%d -> pool (preferovane core=%d, maska sdilena)\n",
            seq, preferred);
    fflush(stdout);
    return;
  }
  svcSetThreadCoreMask(CUR_THREAD_HANDLE, core, 1u << core);
  fprintf(stdout, "[CI] pin: work #%d -> core=%d EXKLUSIVNE (zadny presun mezi jadry)\n",
          seq, core);
  fflush(stdout);
}
