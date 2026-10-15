# RE analýza jádra 4248 — jde rozebrat a znovu sestavit? (2026-10-15)

Doplněk k [CORE-BUILD-VERDICT.md](CORE-BUILD-VERDICT.md). Otázka: „jde jádro
rozebrat (disassemblovat) a znovu sestavit, vylepšené jen pro Tegru?“

## Odpověď

| přístup | verdict |
|---|---|
| **Celý decompile → rebuild** (Ghidra/IDA, přepsat, zkompilovat) | **NE.** `.text` = 9,4 MB, ~2,35 M instrukcí, 4 319+ funkcí, LTO-splácnutých, bez symbolů. Decompilát nedá přeložitelný projekt; výsledek by po měsících práce nebyl ani korektní, natož rychlejší. |
| **Cílená chirurgie** (rozbor konkrétních míst + záplata .data/.text + výměna importů) | **ANO — a je to implementované.** Viz níže, co analýza našla a co z toho šlo do buildu 90. |

Nástroje: otevřené (python + capstone + pyelftools), skript `re/analyze_core.py`
v repu. Ghidra netřeba pro tuto úroveň.

## Co analýza zjistila (nad reálnou binárkou 4248, sha 516077…)

### 1. Importy = hlavní „páka bez pouhání do .text“ (344 symbolů)

Jádro má 344 nedefinovaných importů, které port plní za loadu (`imports.c`).
Mezi nimi **celá paměťová rodina**: `memcpy/memmove/memset/memcmp + _chk`,
`malloc/free/calloc/realloc/posix_memalign`, `mmap/mprotect/munmap`, dále
celé pthread/sem/sched (to už využíváme: pinning, sync spin).

Na Androidu tyhle funkce poskytl **bionic** (ručně laděné asm pro AArch64).
Na Switchi je zásobuje devkitPro newlib:

| funkce | newlib implementace | verdikt |
|---|---|---|
| `memcpy`, `memset`, `memcmp` | **laděné asm** (optimized-routines linie) | v pořádku, netknout |
| **`memmove`** | **C verze** (`memmove.c`) | **slabina → build 90**: interpozice asm `__memmove_aarch64` z ARM optimized-routines |
| `malloc` rodina | dlmalloc (newlib) | swap za jiný alokátor = velké riziko, malá jistota zisku — zatím ne |

`__memcpy_chk/_memmove_chk/_memset_chk` jsou jen forwardy na newlib —FORTIFY
cesta je tedy stejně rychlá jako základní.

### 2. .data knoby: co kde je (xref sken adrp+ldr/str)

* **FIFO/DMA čtveřice** (`0xB969AC/BC/C0/C4`): **žádný přímý přístup** — čtou
  se jako prvky tabulky indexované registrem. To na úrovni binárky potvrzuje
  podezření z phase2: jsou to tabulky (velikostní LUT), ne tři volné
  konstanty. Změna hodnot funguje (phase1 HW-osvědčeno), ale **porušení
  struktury posloupnosti je hazard** — proto X1 varianta (build 89) mění jen
  hodnoty a drží tvary.
* **Affinity devítka** (`0xB9A180..0xB9A6F0`): přímé přístupy nalezeny —
  **zapisovač: funkce @0x5B34C0** (str do AFF1/AFF6/AFF8 = setup vláken),
  čtenáři @0x8BF720 a @0x7CEB60. Máme tak pojmenované kotvy pro případný
  budoucí .text patch (např. neutrální zápis affinity čtení).

### 3. „Yield“ census a past naivního počítání

Surový sken našel 17 352× `yield` (0xD503201F). Kontroloval jsem kontext:
**94 % z nich je NOP padding linkeru** (aarch64 assemblér paduje zarovnání
právě yield-nopem; 16 370 v „funkci“ @0x88A080 = padding za LTO obří smyčkou).
Reálných spin-yieldů je ~980, rozházených ve desítkách funkcí, nejvíc
@0xA86F00 (180×). Lekce: počítat patterny nestačí, vždy ověřovat okolní kód
(stejná lekcí jako grep na `[CI]` v §8 HANDOFFu).

Žádné `svc #0`, žádné `wfe`/`wfi` — jádro komunikuje se systémem jen přes
importované libc funkce → **celá syscall plocha jde přes shim = laditelná**.

### 4. Horké globály .data (kandidáti na budoucí knoby)

| vaddr | file off | xrefů | hodnota | poznámka |
|---|---|---|---|---|
| `0xB99BD0` | `0xB97BD0` | **3452** | 8, 0, 8, 0 | nejhorkější globál; sémantika neznámá |
| `0xB9AA28` | `0xB98A28` | 2555 | 0, 0, 0, 0 | — |

Čísla v `0xB99BD0` = 8 navíc k nule mohou být hloubka fronty / velikost bloku;
před případným A/B patchem vždy nejdřív ověřit kontext kódu (viz body výš).

## Co z toho šlo do buildu 90

* **NSX_MEMMOVE_OPT** — `ci/optstr/memcpy.S` (ARM optimized-routines,
  MIT OR Apache-2.0 WITH LLVM-exception, hlavičky zachovány) sestaví
  build-switch (stage 5b), `memmove_opt.py` směruje import jádra na wrapper
  v libc_shim.c. A/B: marker `ci-stockmemmove.enabled` vrací newlib.
* Vše ostatní (spin, pinning, X1 jádro) beze změny oproti buildu 89.

## Co je dál za horizontem (kdyby někdy)

1. **.text patch spin smyček** (backoff/wfe místo yield v konkrétních
   smyčkách) — potřeba nejdřív profiling z karty ([CI] load), pak identifikace
   konkrétní smyčky (re/analyze_core.py umí), záplata stejně dlouhými
   instrukcemi. Riziko střední, zisk nejistý.
2. **Alokátor** — jen s měřením, které ukáže, že je alokace bottleneckem.
3. **Plný rebuild** — navždy bez nového source dropu (CORE-BUILD-VERDICT.md).
