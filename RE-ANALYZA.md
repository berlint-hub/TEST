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

## Ghidra CI průlet (build 92, 2026-10-15) — korekce interpretací

Headless Ghidra 11.4.2 (JDK 21) nad `libemucore_4248_baked.so` (TEST3,
cda05f6b…), postScript `ci/ghidra/nsx_decompile_targets.py`, výstupy
`re/ghidra/func_*.c` + `00_INDEX.md` (commit v této větvi + artifact
90 dní). Projekt je cacheovaný (actions/cache, klíč = sha256 jádra), další
běhy ~4 min bez analýzy.

### Cesta k zelenému runu (co bylo špatně)
1. **PEP‑263**: Jython 2.7 odmítá non‑ASCII zdroják bez `# -*- coding:
   utf-8 -*-` → SyntaxError, skript nikdy nespustil main(). Původní
   příčina všech červených runů. (Java postScript navíc nelze kompilovat
   mimo Ghidra script-dirs — OSGi bundle odmítne cokoli jiného.)
2. **findBytes overload**: 4‑arg (Address,String,Address,int) v 11.4.2
   NEexistuje; správně `findBytes(AddressSetView, str, matchLimit,
   alignment) -> Address[]` (ověřeno ze zdrojáků). Jeden nativní dotaz na
   celý .text blok místo pythoní smyčky.
3. **Jython write** umí jen ascii → em‑dash v hlavičce indexu padl až na
   konci skriptu (func soubory už byly hotové). Výstup čistě ASCII.
4. `-process <program>` bere název podle importního souboru (`core.so` z
   `/tmp/core.so`, ne `libemucore_4248_baked.so`).
5. Výstupy `*.log` si git ignor ignoruje → log jako `_headless.txt`,
   `git add -f re/ghidra`; Ghidra `application.log` kopírován vedle.

### Statistika skenu (Ghidra view)
* Ghidra image base = ELF vaddr + 0x100000 (delta z .text bloku).
* yield celkem 17 368, izolovaných (realných) 991 (5,7 %) — souhlas s
  capstone odhadem ~6 %; zbytek = LTO padding.
* 17 funkcí dekompilováno, 1 timeout (func_a449f0 — 58k instrukcí LTO
  monolit).

### Závěry — a korekce dřívějších hypotéz
| objekt | realita (Ghidra/capstone) | dřívější hypotéza |
|---|---|---|
| 0xB99BD0 (3452 xrefů) | **emutls deskriptor** (TLS proměnná, `__emutls_get_address`) | „hot perf knob" |
| 0xB9AA28 (2555) | **pointer na log/pause helper** („(VMManager) Pausing…") | „hot perf knob" |
| str@0x5B4968 „writer" | `str xzr,[x0,#0x1320]` = init velkého objektu (GS stav) | „affinity writer" |
| readers 0x8BF720 / 0x7CEB60 | Vulkan fence‑ring (vkWaitForFences) / savestate frame counter | „affinity readers" |
| „PRI" 0xB98198/9C | podmínky ve GS/MMIO write path (bitfield `bfi` do 0xB981D0/1A0) | „thread priority" |
| „AFF" rodina 0xB9A180… | **0 přímých xrefů**; oblast 0xB98000 = GS HW stavová stránka | „thread affinity" |
| spin top func@0xA86F00 | bit‑FIFO reader (64bit sliding window) | „nejhorší spin smyčka" |

**Žádné `sched_setaffinity`/`pthread` affinity API jádro nevolá** — v celém
.text neexistuje jediný syscall site (x8=#122 + svc). Názvy „FIFO/DMA/
AFF/PRI/CACHE knobů" z byte‑diff analýzy byly domyšlené; reálně jde o
inicializační hodnoty stavových polí (GS stav, TLS, ukazatele tabulek).

### Co z toho plyne
1. **.text zůstává pravdou**: .text baked = .text 516077 základu; všechny
   textové patche (build 88–91) i byte‑diff hodnoty .data zůstávají
   platné jako *empiricky ověřené* — jen jejich přejmenování na
   „affinity/priority" je potřeba číst jako „stavová pole bez jasně
   identifikované sémantiky".
2. **Spin backoff patch nemá cíl**: reálných izolovaných yield je 991
   roztroušených přes 16 funkcí včetně 58k‑instrukčních LTO monolitů;
   žádná identifikovatelná „jedna horká smyčka". Řešení latencí zůstává
   NSX_SYNC_SPIN (µs spin, runtime) — beze změny.
3. **Návrh .text patchů z Ghidry se mění**: nic z dekompilátu nevytváří
   nový patch kandidát; Ghidra výstupy slouží jako referenční mapa
   (func_*.c + 00_INDEX.md) pro budoucí cílené analýzy.
