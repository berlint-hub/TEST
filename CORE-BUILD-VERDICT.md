# Verdikt: jde zkompilovat vlastní libemucore.so (core zaměřený na Tegru X1)?

> Odpověď na otázku „jseš schopnej zkompilovat libemucore.so pro NetherSX2
> (nro)? Vim, že jsou aspoň dvě verze jádra (4248/3668) — jde si udělat
> jen svoje, se zaměřením na Tegru X1?“
>
> **Zkoumáno 2026-10-15 proti skutečným zdrojákům, ne odhad.**

## Odpověď v jedné větě

**Ze zdrojáků NE** — jediný veřejně dostupný zdroják (LGPL drop AetherSX2
4248) **neobsahuje ARM64 recompilery** (EE/IOP/VU dynarec = srdce výkonu),
takže vlastní build buď nelinkuje, nebo běží jen interprety (jednotky FPS).
Hotové binární jádro 4248 + port-level ladění je a zůstává nejrychlejší
cesta; ta je od buildu 88 konsolidovaná (viz níže).

## Důkaz (proč to nejde)

Jediný veřejný zdroj je **LGPL drop** z 16. 1. 2023 (archive.org
`aethersx2-libemucore.tar`, zrcadlený v `Trixarian/AetherSX2`,
`manemobiili/AetherSX2`, `Hercules2048/HerculesSX2` — obsah totožný).
Drop sám o sobě říká: *„this is not a full source release for the library,
only the LGPL sources, and parts of which that have been modified.“*

Co je v dropu fakticky (ověřeno v kódu `aethersx2/`):

1. **Všechny recompilery jsou x86-only.** CMake (`pcsx2/CMakeLists.txt`)
   drží EE recompiler (`x86/ix86-32/iR5900-32.cpp`), IOP recompiler
   (`x86/iR3000A.cpp`), microVU (`x86/microVU.cpp`), iFPU/iMMI, newVif
   dynarec v listu `pcsx2x86Sources` — a ten se kompiluje **jen pro x86**.
   Větev pro aarch64 udělá jediné: `target_link_libraries(... vixl)`.
2. **ARM64 dynarec pro EE/VU v dropu není nikde.** Jediné soubory v
   `pcsx2/`, které používají vixl, jsou GS software-render JITy
   (`GSVector4_arm64.h`, `GSDrawScanlineCodeGenerator.arm64.h`,
   `GSSetupPrimCodeGenerator.arm64.h`). `common/emitter/` je čisté x86
   (`x86emitter.cpp`, legacy/SSE). ARM64-vědomé úpravy (vtlb, Memory,
   MTVU, ukládání FPCR v `SysCoreThread.cpp`) jsou jen infrastruktura.
3. **aarch64 build nelinkuje ani jako interpret-only:** `System.cpp`
   instancuje `recMicroVU0/1` bez ohledu na architekturu, jejich definice
   ale existují jen v `x86/microVU.cpp`, který se na aarch64 nekompiluje.
4. To sedí s komunitním poznáním („*it's missing the ARM64 JIT — the
   largest part of the actual project*") i s tím, co vidíme na kartě:
   rychlé jádro, které port používá, je **binární** 4248 (s closed-source
   dynarecy), ne build z tohohle dropu.

Prakticky: `-mcpu=cortex-a57+crypto+crc` a podobné „ladění pro X1“ nemá
u vlastního buildu smysl — recompilery generují kód za běhu a v dropu
chybí; překlad zbytku by běžel interpretem (GT3 by spadlo z ~39 FPS na
jednotky).

## Co místo toho existuje (a funguje)

### a) Binární patche hotového jádra 4248 (historie — `arena/01a0b5b2-test`)

Uživatel dodával hexa-patche `.data`/`.text` jádra (všechny varianty měly
12 162 984 B):

| varianta | obsah | stav |
|---|---|---|
| původní | sha256 `516077d5…` | referencence |
| phase1 | FIFO velikosti v `.data` (32→256, 64→512, 32→256) | OK, používaná |
| phase2 | + affinity masky, **priority 9→99/13→98/7→97**, cache tabulka 4,8,16→64,64,128 | **HW crash** při startu MTGS/VU1 workera (build 71) |
| phase2_fixed | phase2 bez priorit a bez zásahu do cache tabulky (16 B změn) | vyroben, **na kartě netestován** |

Priorita `9→99` apod. jsou linuxové nice-hodnoty; na Horizonu user-space
RT prioritu vynutit nelze — proto phase2 padala. Viz `PHASE2_REPORT.md`
v historii větve `arena/01a0b5b2-test`.

### b) Port-level ladění — ta pravá páka (build 88)

Všechno, co „vlastní jádro zaměřené na X1“ reálně znamená, se dělá v portu
nad jádrem (nastavení + rozložení threadů), protože jádro samotné šitě
nemáme. Konsolidováno v buildu 88 (linie `arena/opencode-ci` buildy 76–83
+ QoL z buildu 87):

| co | kde | efekt |
|---|---|---|
| fixní pinning MTGS→core 1, VU1→core 2 | `pthr_pin_fixed.py` (pthr.c) | konec round-robinu ve work poolu (hypotéza #1 z VU-GS plánu) |
| MTVU marker `ci-mtvu.conf` | `mtvu_marker.py` (prefs.c) | A/B test MTVU bez rebuildu (0=off, 1=on, bez souboru = bez zásahu) |
| `FastmemMode=hybrid` | NSX_CI_DEFAULTS | core 4248 neumí full; hybrid odstranil ~31 FPS strop (build 83) |
| GT3 per-game profil | `ci/gamecfg/ps2-5d04…ini` + romfs/gamecfg | vu1Instant=off, FullVU0SyncHack=on, clamp 2 pro GT3 |
| optimalizované defaulty | NSX_CI_DEFAULTS (112 klíčů) | EECycleRate/Skip=0, vu1Instant/vuFlagHack on, clamp 0, renderer 14… |
| fastload vrstva | `so_fastload.py`, `fh_buf.py`, `vk_fast_present.py` | rychlejší load .so, stream resource, present bez SVC |

Pozn.: `mtvu_marker` byl přepsán — upstream přesunul tvorbu VU1 threadu
z `pthr.c`; nová verze přepisuje `EmuCore/Speedhacks/vuThread` až v
`prefs_get_bool()` (prefs.c), takže je nezávislá na refaktorech portu.

### c) Teoretická cesta: PCSX2 mainline

Dnešní PCSX2 má otevřené ARM64 recompilery (newrec) i oficiální Android
build. Do tohohle portu je ale nelinkovat: `source/imports.c` je tabulka
importů šitá přesně na AetherSX2 4248 (JNI povrch, bionic shimy). Přechod
= přepsat celou „android-like“ vrstvu pod jiným jádrem — měsíce práce,
výsledek na 4× A57 @ ~1–1,8 GHz nejistý. Nedělat bez nových měření, která
ukážou, že bottleneck je v jádře (podle buildu 49 je GT3 CPU/VU-bound,
ne GS-bound).

## Závěr

1. Vlastní **kompilované** jádro ze zdrojáků: zavřené (dokázáno výše).
   Neotvírat bez nového, kompletnějšího source dropu.
2. „Svoje jádro pro X1“ = hotové 4248 + (volitelně) opatrné binární patche
   + port-level stack — přesně to, co nese build 88.
3. Otevřené: **phase2_fixed jádro leží na kartě netestované** — kdyby
   uživatel chtěl, dá se dát do buildu jako varianta a porovnat na kartě.

---

## Dodatek (build 89, 2026-10-15): co z toho vyšlo do praxe

Na otázku „hlavně bottleneck VU/VU1, celková synchronizace EE-VU-GS“:

1. **Jádro „X1 lab“** — volitelná binární varianta 4248 (FIFO/DMA `.data`
   sada odvozená z HW-osvědčené phase1, bez affinity/priorit/cache tabulky),
   volitelná přímo v launcheru (Core version), A/B na kartě bez reflashu.
2. **NSX_SYNC_SPIN** (`ci/patches/sync_spin.py`) — EE→VU1→MTGS handoffy jdou
   přes semafory (Threading::Semaphore → sem_* fake → libnx LightSemaphore);
   shim teď umí spin-před-blokováním (ci-sync.conf, default vypnuto). To je
   ta skutečná synchronizační páka — port vlastní celou sync plochu jádra
   (pthr.c/libc_shim.c), takže se ladí bez pouhání do uzavřené binárky.
