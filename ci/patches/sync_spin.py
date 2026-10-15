"""Patch source/libc_shim.c — NSX_SYNC_SPIN pro EE-VU-GS synchronizaci na X1.

Jadro drzi EE<->MTGS<->VU1 handoffy predevsim pres Threading::Semaphore, ktery
sem jde jako sem_wait/sem_post fake -> libnx LightSemaphore. LightSemaphore
umi uzivatelskou akvizici, kdyz token JE; kdyz neni, hned spí v kernelu
(svcWaitForAddress) a wakeup stoji jednotky mikrosekund na jadro.

Tenhle patch prida spin-pred-blokovanim: sem_wait nejprv N mikrosekund krouti
semaphoreTryWait (instrukce yield mezi pokusy) a teprve pak zablokuje. Kdyz
producent (EE krmici VU1, VU1 krmici GS) pracuje, handoff se stihne bez
prechodu do kernelu; kdyz ne, cinnost skonci blokaci jako dosud — semantika
sem_wait se nemeni.

Ovladani bez rebuildu: /switch/nethersx2/ci-sync.conf (cele cislo = spin v
mikrosekundach, 0 nebo bez souboru = spin VYPNUTY = chovani jako upstream).
Jednorazovy radek do logu: [CI] sync: spin=<n> us (...)
"""
import sys

path = sys.argv[1]
text = open(path, encoding="utf-8", errors="surrogateescape").read()

if "NSX_SYNC_SPIN" in text:
    print("libc_shim.c: sync spin uz patchnuto")
    sys.exit(0)

done = 0

edits = [
    ('int sem_wait_fake(void **s) {\n'
     '  if (s && *s)\n'
     '    semaphoreWait(&((FakeSem *)*s)->sem);\n'
     '  return 0;\n'
     '}',
     '''/* NSX_SYNC_SPIN: spin pred blokaci na semaforu (EE->VU1/MTGS handoffy).
 * /switch/nethersx2/ci-sync.conf = spin v mikrosekundach; 0/bez souboru =
 * rovnou blokovat (chovani jako upstream). Viz BUILD-NOTES „Build 89“.
 */
static int nsx_sync_spin_us(void) {
  static int cached = -1;
  if (cached < 0) {
    cached = 0;
    FILE *sf = fopen("/switch/nethersx2/ci-sync.conf", "r");
    if (sf) {
      int v;
      if (fscanf(sf, " %d", &v) == 1 && v > 0 && v <= 100000)
        cached = v;
      fclose(sf);
    }
    fprintf(stdout, "[CI] sync: spin=%d us (ci-sync.conf; 0 = blokovat rovnou)\\n",
            cached);
    fflush(stdout);
  }
  return cached;
}

int sem_wait_fake(void **s) {
  if (s && *s) {
    const int spin_us = nsx_sync_spin_us();
    if (spin_us > 0) {
      static u64 spin_freq = 0;
      if (!spin_freq)
        spin_freq = armGetSystemTickFreq();
      const u64 deadline =
          armGetSystemTick() + (u64)spin_us * spin_freq / 1000000ull;
      Semaphore *sem = &((FakeSem *)*s)->sem;
      while (armGetSystemTick() < deadline) {
        if (semaphoreTryWait(sem))
          return 0;
        __asm__ __volatile__("yield");
      }
    }
    semaphoreWait(&((FakeSem *)*s)->sem);
  }
  return 0;
}'''),
]

for find, repl in edits:
    if repl in text:
        done += 1
    elif find in text:
        text = text.replace(find, repl, 1)
        done += 1
    else:
        print("libc_shim.c: kotva nenalezena: %r" % find[:80])

open(path, "w", encoding="utf-8", errors="surrogateescape").write(text)
print("libc_shim.c: NSX_SYNC_SPIN %d/%d" % (done, len(edits)))
sys.exit(0 if done == len(edits) else 1)
