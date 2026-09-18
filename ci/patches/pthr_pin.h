/* pthr_pin.h — build 55: identita + pinování emulačních threadů (pthr_pin.c). */

#ifndef __PTHR_PIN_H__
#define __PTHR_PIN_H__

/* Jádro pojmenovalo thread (prctl PR_SET_NAME). */
void pthr_pin_set_name(const char *name);

/* Jméno, které si VOLAJÍCÍ thread naposledy nastavil (TLS) — pro
 * prctl(PR_GET_NAME). NULL, když si jméno ještě nenastavil. */
const char *pthr_pin_self_name(void);

/* Jádro si žádá afinitu (sched_setaffinity) — port ji zahazuje, my ji aspoň
 * ukážeme v logu, ať víme, co si jádro myslelo. */
void pthr_pin_affinity_note(int tid, unsigned long long mask);

/* pthr.c předá sdílenou masku work poolu (pravidlo „JMÉNO=pool"). */
void pthr_pin_set_work_mask(unsigned mask);

/* Work thread (MTGS/VU1/worker) právě vznikl: `seq` = pořadí, `preferred` =
 * jádro, které mu dal round-robin v assign_work_core(). */
void pthr_pin_note(int seq, int preferred);

/* Pře-pinuje běžící thread podle pravidla „jméno = jádro" z ci-pin.conf.
 * Vrací 1, když se pin změnil. */
int pthr_pin_by_name(const char *name);

#endif
