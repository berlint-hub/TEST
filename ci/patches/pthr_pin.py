"""Patch source/pthr.c — build 55: work thready na vlastní jádra.

Co přidává (marker NSX_PTHR_PIN):
  * work thread #1 a #2 dostanou EXKLUSIVNÍ jádro (maska = 1 bit), ne jen
    preferované jádro se sdílenou maskou. Tím přestane migrace, při které se
    MTGS (GS/Vulkan) a VU1 (MTVU) potkávají na stejném jádře — měřeno na kartě
    4× stejně: work=1,2 a thread #3 končí na core 1 vedle threadu #1.
  * každý work thread se ohlásí do logu (`pthr_pin_note`), včetně toho, jestli
    skončil exkluzivně nebo v poolu.
  * rozvržení řídí /switch/nethersx2/ci-pin.conf (mode=auto|off|excl_all,
    order1/order2, pravidla podle jména threadu) — A/B test bez rebuildu.
  * marker ci-nopin.enabled (build 52) zůstává jako hlavní vypínač.

Identita threadů (který je MTGS a který VU1) se z pořadí vytvoření poznat
NEDÁ — proto imports_pin_diag.py loguje prctl(PR_SET_NAME) a sched_setaffinity
a pthr_pin.c umí pinovat i podle jména, jakmile ho jádro prozradí.

Spouští se PO pthr_diag.py (kotvy počítají s jeho NSX_CORE_DIAG blokem);
kdyby pthr_diag.py neprošel, najde se záložní kotva bez něj.

Použití: python3 ci/patches/pthr_pin.py <cesta k pthr.c>
"""
import sys

path = sys.argv[1]
text = open(path, encoding="utf-8", errors="surrogateescape").read()
# Idempotence: marker NSX_PTHR_PIN přidává první edit, takže podle něj se
# idempotence poznat nedá (první běh mohl skončit v půlce). Rozhoduje volání.
if "pthr_pin_note(" in text:
    print("pthr.c: pinování už patchnuto")
    sys.exit(0)

edits = [
    # 1) prototypy
    ('#include "pthr.h"',
     '#include "pthr.h"\n'
     '/* NSX_PTHR_PIN (build 55): work thready na vlastní jádra + identita\n'
     ' * threadů z prctl(PR_SET_NAME)/sched_setaffinity. Viz ci/patches/pthr_pin.c. */\n'
     'extern void pthr_pin_note(int seq, int preferred);\n'
     'extern void pthr_pin_set_work_mask(unsigned mask);'),
]

# 2) assign_work_core musí vracet číslo jádra. Když běžel pthr_diag.py, už to
#    přepsal na int (a přidal `return core;`) — pak není co dělat.
if 'static int assign_work_core(void) {' in text:
    pass
elif 'static void assign_work_core(void) {' in text:
    edits.append(
        ('static void assign_work_core(void) {',
         '/* NSX_PTHR_PIN: vrací preferované jádro, aby ho pin mohl použít. */\n'
         'static int assign_work_core(void) {'))
else:
    print("pthr.c: assign_work_core nenalezena (ani void, ani int)")

# 3) předat pinu sdílenou masku poolu (pravidlo „JMÉNO=pool" ji potřebuje,
#    aby thread, který už byl exkluzivně pinned, vrátila zpátky mezi jádra).
MASK_ANCHOR = '  work_mask = (hot_count >= 2) ? (hot_mask & ~(1u << ee_core)) : hot_mask;\n'
if 'pthr_pin_set_work_mask' not in text:
    if MASK_ANCHOR in text:
        edits.append((MASK_ANCHOR, MASK_ANCHOR +
                      '  /* NSX_PTHR_PIN: pin potřebuje sdílenou masku pro pravidlo „JMÉNO=pool". */\n'
                      '  pthr_pin_set_work_mask(work_mask);\n'))
    else:
        print("pthr.c: kotva work_mask nenalezena")

# Kotva trampoline: buď už upravená pthr_diag.py (NSX_CORE_DIAG), nebo čistá.
diag_trampoline = (
    '  {\n'
    '    /* NSX_CORE_DIAG: MTGS/VU1/worker thread — na kterém jádře skončil. */\n'
    '    const int nsx_core = assign_work_core();\n'
    '    static int nsx_seq = 0;\n'
)
plain_trampoline = (
    '  // Keep emulator workers off the EE and audio cores.\n'
    '  assign_work_core();\n'
)

if diag_trampoline in text:
    edits.append((
        diag_trampoline,
        '  {\n'
        '    /* NSX_CORE_DIAG: MTGS/VU1/worker thread — na kterém jádře skončil. */\n'
        '    const int nsx_core = assign_work_core();\n'
        '    static int nsx_seq = 0;\n'
        '    /* NSX_PTHR_PIN (build 55): #1 a #2 exkluzivně na svá jádra, aby se\n'
        '     * MTGS a VU1 neškrtaly o stejná dvě jádra (ci-pin.conf to řídí). */\n'
        '    pthr_pin_note(nsx_seq + 1, nsx_core);\n',
    ))
    # pthr_diag.py už `return core;` přidalo — jen kontrola, že tam je
    if 'return core;' not in text:
        print("pthr.c: POZOR assign_work_core nemá return core (čekal jsem ho od pthr_diag.py)")
elif plain_trampoline in text:
    edits.append((
        plain_trampoline,
        '  // Keep emulator workers off the EE and audio cores.\n'
        '  /* NSX_PTHR_PIN (build 55): #1 a #2 exkluzivně na svá jádra. */\n'
        '  {\n'
        '    const int nsx_core = assign_work_core();\n'
        '    static int nsx_seq = 0;\n'
        '    pthr_pin_note(++nsx_seq, nsx_core);\n'
        '  }\n',
    ))
    edits.append((
        '  svcSetThreadCoreMask(CUR_THREAD_HANDLE, core, m);\n'
        '}\n'
        '\n'
        '// background threads',
        '  svcSetThreadCoreMask(CUR_THREAD_HANDLE, core, m);\n'
        '  return core;\n'
        '}\n'
        '\n'
        '// background threads',
    ))
else:
    print("pthr.c: kotva trampoline nenalezena (ani NSX_CORE_DIAG, ani čistá)")

done = 0
for find, repl in edits:
    if repl in text:
        done += 1          # už patchnuto
    elif find in text:
        text = text.replace(find, repl, 1)
        done += 1
    else:
        print("pthr.c: kotva nenalezena: %r" % find[:60])
open(path, "w", encoding="utf-8", errors="surrogateescape").write(text)
print("pthr.c: pin %d/%d" % (done, len(edits)))
sys.exit(0 if done == len(edits) else 1)
