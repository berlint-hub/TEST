# HANDOFF — co musí vědět další session

Nečti tohle jako tutorial. Je to seznam rozhodnutí a čísel, která bys jinak
objevoval znovu po 20 minutách drahých runner minut. Stav níže je **ověřený
během**, ne domněnka; kde se pochybuje, je to napsané.

> **Nová session se zaměřením na CPU/VU/GS optimalizaci:** začni v
> **`VU-GS-OPTIMALIZACE.md`** (zadání, změřené FPS podle taktů, rozložení
> threadů, hypotézy v pořadí, jak měřit). Tenhle HANDOFF pak čti jako
> referenci — hlavně §8 (pasti), §9–§11 (výkon a takty).
> Poslední build: **58** (diagnostika pádu + čtení tabulky taktů, §0d).
> Na kartě **build 57 padá při startu hry** — viz §0d, tam jsou logy a čísla.
> Build 55 = výkon (thready na vlastní jádra); **build 56 = sledování taktů
> venku (§0b)**; **build 57 = CPU boost pryč i z launcheru (§0b)**.

Cíl uživatele: reproducible CI, který vyrobí `.nro` s funkčním Vulkan
rendererem, plus zpětná vazba z logů na kartě. Historie: build 37/38 našel
a opravil „Vulkan vidí nula fyzických zařízení" (chybějící
`NVK_I_WANT_A_BROKEN_VULKAN_DRIVER=1`, viz §3), build 43/44 odstranil OpenGL,
build 51 odstranil zápisy do taktů. Teď jde o **výkon GT3** (CPU/VU/GS).

## 0. STAV: VK-ONLY + ŽÁDNÝ BOOST TAKTŮ (2026-09-18, build 51)

OpenGL je z balíku odstraněný (`VK_ONLY: 1` v `mesa-vk.yml`), renderer je
v launcheru zamčený na Vulkan i proti per-game profilu. **Ani emulátor, ani
launcher do taktů nesahají**:

* `cpu_boost()` v `source/util.c` je prázdná (`ci/patches/util_no_boost.py`,
  build 48),
* **`launcher/source/main.cpp` měl `appletSetCpuBoostMode(FastLoad)` šestkrát**
  a od buildu 57 je zakomentovaný (`ci/patches/launcher_no_boost.py`).
  Tohle byl skutečný důvod „GPU na minimu“: `FastLoad` podle libnx znamená
  „Boost CPU. **Additionally, throttle GPU to minimum**“ a volá se na applet
  (command 66), takže konfigurace přetrvá i do emulátoru. Do buildu 47 ji
  shazoval emulátor; build 48 ten reset zrušil a GPU zůstávalo na 76 MHz.
* od buildu 56 emulátor takty ani **nečte** (§0b).

## 0b. STAV: KOLIZE V SYSTÉMU TAKTŮ — A PROČ JE SLEDOVÁNÍ TAKTŮ OD BUILDU 56 VENKU

> **Oprava (2026-09-18, od uživatele):** crash reporty, které ležely v repu
> (`01789735608_010000000000001a.log` = fatal v `pcv`, `01789735609_…log` =
> `hoc:clk`), jsou **z buildu 50**, ne z buildů 51/52/53. Dřívější text tvrdil
> „51/52/53 jsou na kartě chování identické a padaly všechny" — to byla
> **chyba minulé session**, odvozená od špatně připsaných souborů. Uživatel je
> na `main` smazal (commity `1a1f5be`, `200db54`, `42331f7`, `7b76980`);
> squash commit `6d0d916` je omylem vrátil a v téhle větvi jsou znovu smazané.

**Co reporty říkaly:**

* `01789735608_010000000000001a.log` — **fatal v sysmodulu `pcv`**
  (Program ID 010000000000001a, Process Name `pcv`), `Result 0xCC0B
  (2011-0102)`, Type **User Break** = assert uvnitř pcv. pcv je služba
  Nintendo pro řízení taktů (CPU/GPU/EMC). FW 22.1.0,
  Atmosphère 1.11.2-master-5388824be.
* `01789735609_00ff0000636c6bff.log` — sekundu po něm umřel **`hoc:clk`**
  (Program ID 00ff0000636c6bff — sys-clk rodina, governor taktů uživatele),
  `Result 0x6159 (2345-0048)`, taktéž User Break.

**Mechanismus, který tomu odpovídá (pravděpodobný, nikdy nepotvrzený):**
emulátor držel od buildu 47 tři clkrst session (cpu/gpu/emc) a polluje je
1×/s do FPS řádky. Governor (`hoc:clk`) na tytéž takty zároveň čte **a
zapisuje**. pcv se v té soutěži mohl dostat do assertu. **Build 50 ty session
měl**, takže to sedí; dokázané to není a dokázat už ani nepůjde (reporty jsou
smazané).

**Proč je sledování taktů od buildu 56 úplně pryč (ne jen vypnuté):**

1. Uživatel má Ultrahand s governorem na **max** (pevně cpu 2700 / gpu 1400 /
   ram 2666 MHz). Čtení z emulátoru nepřináší nic — hodnota je dopředu známá
   a nemění se.
2. clkrst/pcv session v našem procesu jsou jediný způsob, jak se do toho
   souboje vůbec dostat. Bez nich emulátor pcv nevidí.
3. Zápis taktů (`ci-clk.conf`) navíc shazoval GPU: `ApmCpuBoostMode_FastLoad`
   podle libnx znamená „Boost CPU. **Additionally, throttle GPU to minimum**"
   = CPU 1785 + **GPU 76 MHz** (v logu z buildu 49 bylo `gpu=76`).

**Co v buildu 56 zmizelo:** `clkrstInitialize`/`clkrstOpenSession`/
`clkrstGetClockRate`/`clkrstSetClockRate`, fallback `pcvInitialize`/
`pcvGetClockRate`, čtení APM režimu (`apmGetPerformanceMode`/
`apmGetPerformanceConfiguration`), funkce `ci_clk_boot`/`ci_clk_diag`/
`ci_clk_read`/`ci_clk_parse`/`ci_clk_set_mhz`, markery **`ci-clk.enabled`** a
**`ci-clk.conf`**, a pole `cpu=… gpu=… emc=… MHz` ve FPS řádce.
`ci/analyze-core-log.py` čte takty **volitelně**, takže starší logy
(build 49/54) zparsuje dál.

**CPU boost** je pryč už od buildu 48 (`ci/patches/util_no_boost.py` vyprázdnil
`cpu_boost()` v `source/util.c` — jediné místo v portu, kde se takty
nastavovaly). Emulátor se podsystemu taktů **nedotýká vůbec**.

> **Stav souborů (2026-09-18):** uživatel smazal z větve crash reporty **i všech
> pět logů z karty** (`nethersx2-core.log`, `nethersx2-vulkan.log`,
> `launcher-diag.log`, `nethersx2-mesa.log`, `emulog.txt`; commity `7946d05`…
> `3f8c2f6`). Čísla, která z nich vzešla, zůstávají v tomhle dokumentu a
> v BUILD-NOTES.md — surová data v repu už nejsou. V `archiv/logy/` zůstává
> jen `nethersx2-core.build49.log`.

## 0c. STAV: PÁD — CO ŘÍKAJÍ LOGY BUILDU 54 (2026-09-18, ověřeno z dat v repu)

**Logy buildu 54 jsou v repu** (`nethersx2-core.log`, `nethersx2-vulkan.log`,
`launcher-diag.log`; 5 sessions, ts 1789738015 → 1789738523 = 15:26:55 →
15:35:23 SELČ, tedy **po** publikaci buildu 54 v 15:13:56 SELČ). Pořadí her:
GT3 → GT3 → GT3 → **Fallout** → GT3 (přehazování her = přesně ten scénář,
který systém shazoval).

**Co je potvrzené:**
* Všech 5 sessions se dostalo do emulace (`isoFile open ok`, McdSlot,
  `loadelf`, audio + PAD otevřené) — tedy **žádná nezemřela hned po
  `(AAudioMod) Starting stream...`**, což byl příznak mrtvého pcv z §0b.
* Session 5 (GT3) v `nethersx2-vulkan.log`: **23 FPS oken / ~30 s, medián
  45,5 FPS, p10 35,9, p90 50,0, nejdelší frame 216 ms**, a **čistý konec**
  (`vkDestroySwapchainKHR` → `vkDestroyDevice`).
* `[CI] clk: cteni taktu VYPNUTO (build 54; …)` — emulátor se pcv
  **nedotkl**, takže mechanismus z §0b je zavřený.
* `[CI] session start build=54` v každé session — binárka je opravdu 54.

**Co z toho NEPLYNE (a co jsem si minule spletl):** core log **nekončí** tam,
kde proces umřel. U všech pěti sessions končí u `loadelf version 3.30` a
chybí `[CI] session end` — jenže to je **useknutý 64 KiB buffer**, ne místo
smrti. `source/main.c:2113` končí přes `__libnx_exit(0)` a libnx
(`nx/source/runtime/init.c:190`) v něm volá `__appExit()` + `__nx_exit()`:
**atexit neběží a stdio se ne-flushne**. Náš `session end` byl přitom na
atexit. Naopak `source/error.c:45` volá `exit(1)`, takže by se „korektní exit"
napíšal **při fatální chybě** — značka byla obráceně. **Build 55 to opravuje**
(explicitní `ci_session_end()` z main.c/error.c/crash.c → `exit`/`fatal`/
`CRASH`); bez toho se „padá, nebo ne?" z logu poznat nedá.

**Dodatek (po opravě datace):** crash reporty v repu byly **z buildu 50**,
ne z 51/52/53 — viz §0b. Výše uvedený verdikt („žádná session nezemřela hned
po startu, session 5 doběhla čistě") z logů buildu 54 **platí dál**, jen už
z něj nelze vyvozovat, že „build 54 opravil pád z 51/52/53"; pád, který ty
reporty popisovaly, se stal na buildu 50. Jediné čisté tvrzení zní: **na
buildu 54 přehazování GT3↔Fallout pětkrát za sebou prošlo bez příznaku
smrti** a od buildu 56 se emulátor pcv nedotkne vůbec.

### Historie pátrání (build 52/53, nyní už jen kontext)

Uživatel hlásí: **poslední build shazuje Horizon OS/Atmosphere, když zapne
GT3 a pak chce spustit Fallout — objeví se chyba a musí Switch vypnout.**
Upřesnění z rozpravy (2026-09-18): chyba je **Atmosphere crash obrazovka
s kódem** (tj. na kartě bude report v `sd:/atmosphere/crash_reports/`
nebo `fatal_errors/` — dostavit si ho!) a **padá to u jakéhokoli přehazování
her, ne jen GT3→Fallout**. Obojí sedí na degradaci stavu systému mezi
procesy / pád sysmodulu.
Nejnovější `nethersx2-core.log` + `launcher-diag.log` v repu (4 starty her:
GT3 → Fallout → Fallout → GT3) ukazují:

* Všechny 4 starty se dostaly až do emulátoru (4× `[CI] log capture ON`).
* **Obě Fallout session skončily hned po `(AAudioMod) Starting stream...` /
  `Opening PAD` — nula FPS řádků**, přestože mezi starty uběhly minuty
  (Fallout normálně jede 59,9 FPS a FPS řádky se flushují okamžitě).
* Po nich zemřela i druhá GT3 session na **stejném místě** (GT3 samotná
  předtím běžela 50,2 FPS na max taktech). To není chyba jedné hry — vypadá
  to na **degradaci stavu systému mezi procesy** (necistený zdroj po exitu
  procesu: audio stream / vi layer / nvdrv channel / clkrst session) nebo na
  pád sysmodulu (audout/vi/nvdrv), který dá Atmosphere fatal „vypni konzoli".
* **Log diagnostiku ztěžoval**: 64 KiB buffer == při tvrdým pádu zmizí konec
  logu; starý proces flushuje buffer až PO startu nového == prokládaný
  a roztrhaný zápis na hraně session (v logu vidět).

Co přináší build 52 (chování hry beze změny — žádná výkonnostní změna):

1. **`[CI] session start build=52 ts=… pid=…`** hned po startu, flush+fsync.
2. **`[CI] session end (korektni exit)`** — zapíše se JEN při korektním
   `exit()`. Chybí-li na konci session, proces umřel tvrdě → víme, jestli
   padá emulátor, nebo systém kolem.
3. **`ci-rawlog.enabled` teď taky vypne buffering** (každý řádek hned na SD)
   — forenzní mód, pomalé, jen na pátrání.
4. **Marker `ci-nopin.enabled`** — vypne všechna `svcSetThreadCoreMask`
   (pthr.c; thready dědí masku procesu). Test, jestli pinování (audio
   thread na core 3, kde žijou sysmoduly) přispívá k nestabilitě.
5. **Marker `ci-noclk.enabled`** — úplně bez clkrst/pcv (i čtení taktů).
   Test, jestli clkrst session nekolidujou s Ultrahand governorem.
6. PTHRDIAG patch přesunut z heredocu do `ci/patches/pthr_diag.py`
   (konvence + testovatelnost).

Jak pátrat (když to znovu padne): zkontrolovat `nethersx2-core.log`
(session end vs. usek), a HLAVNĚ **`sd:/atmosphere/crash_reports/` a
`sd:/atmosphere/fatal_errors/`** — Atmosphere tam ukládá report s modulem
a Result kódem, který pojmenuje viníka (audout/vi/nvdrv/fs/náš proces).

### Původní stav (build 38): VULKAN NA KARTĚ FUNGUJE

Uživatel potvrdil „vulkan jede" a `nethersx2-vulkan.log` z karty to dokládá
celé: `vkCreateInstance result=0` → `vkCreateViSurfaceNN result=0` →
`vkCreateDevice result=0` → `vkCreateSwapchainKHR result=0` (3 images,
1280×720) → `vkAcquireNextImageKHR`/`vkQueueSubmit`/`vkQueuePresentKHR`
`result=0` opakovaně. `nethersx2-mesa.log` k tomu říká
`nvk wsi: zero-copy ENABLED` (scanout bez kopie) a
`shader cache: sdmc:/switch/mesa_shader_cache/cache.bin, 182 entries`.
Hra (GT3) běží. GL i VK větev jsou tím ověřené.

Zbývá: LSFG (frame generation) a výkon. Detaily níž.

## 0d. STAV: BUILD 57 NA KARTĚ PADÁ PŘI STARTU HRY (2026-09-18, logy v repu)

Uživatel nahrál čtyři logy (commit `1a2a853`): `launcher-diag.log`,
`nethersx2-core.log`, `nethersx2-exception.log`, `nethersx2-vulkan.log`.
Binárka je opravdu build 57 (`[CI] session start build=57 ts=1789749020`),
hra **Fallout – Brotherhood of Steel (USA)**, `Renderer=14 -> nro=vk`,
`core=4248` (12 162 984 B), `fastmem=hybrid`, `lsfg=0`.

**Co je jisté z logů:**

* Launcher doběhl v pořádku — jádro i `.nro` zkopírované a ověřené
  (`core cil … = 12162984 B`, `emu cíl … = 23104387 B`, sondy `rename=0`,
  `stat dst=0`). **Padá emulátor, ne launcher.**
* `nethersx2-vulkan.log` končí na `starting core VM sequence`
  (1789749020.380, tedy ~360 ms po startu procesu). Další `vk_diag_note`
  v `source/main.c` je `core VM sequence returned` — **pád je uvnitř
  `run_startup_sequence()`**.
* `nethersx2-core.log` končí `[CI] session end (CRASH)` → běžel
  `__libnx_exception_handler` a prošel celou cestou až k `real_crash`.
  `[CI] thread EE/VM -> core=0` (který v buildu 49 v logu byl) **chybí** a
  `Searching for a BIOS image` taky — takže EE thread ještě nebyl připnutý
  a jádro se nedostalo ani k hledání BIOSu.
* `nethersx2-exception.log`:

  ```
  pc=0x0000003fb8a5bc94 far=0x0000000000000000 esr=0x92000045
  sp=0x000000081bff0b90 fp=0x000000081bff0b90 lr=0x0000003fb80b6894
  ```

  `esr=0x92000045` → EC `0x24` (data abort z nižší EL), IL=1, ISS `0x45` =
  WnR 0 (**čtení**) + DFSC `0x05` = **translation fault, level 1**.
  `far=0` → **čtení z NULL**. `fp == sp` → žádný založený rámec.
  `lr` je 9 655 360 B (≈ 9,2 MiB) pod `pc`.
* Adresy: `heap ready mb=2904 so_base=0x366e600000 so_limit=268435456`,
  `core image loaded base=0x366e600000 size=208453632`. Tedy heap =
  `0x8000000`–`0xC1800000` (2 904 MiB), obraz jádra = `0x366e600000` +
  198,8 MiB. **`pc` = 0x3fb8a5bc94 neleží v ani jednom** — je ~20,3 GiB nad
  `so_base`, takže jde o mapping, který dělá jádro samo (`svcMapProcessCodeMemory`
  → JIT/RX kód, nebo fastmem zrcadla). `sp = 0x81bff0b90` naopak **v heapu je**.
  Bez backtrace a bez `svcQueryMemory` se ale nedá říct, který z nich to je —
  proto build 58.

**Co z toho NEPLYNE:** jestli pád způsobil build 57 (launcher bez FastLoad →
jiná tabulka taktů), nebo jestli tam byl už v 55/56. **Logy z 55 a 56 nemáme**
— uživatel je smazal. Tvrzení „build 57 to rozbil“ je tedy zatím neověřená
domněnka, ne závěr.

**Co build 58 přidává (čistě čtení, žádné chování se nemění):**

* `ci/patches/crash_dump.py` → do `nethersx2-exception.log` přijde 29 GPR,
  `tid` + jméno threadu, `svcQueryMemory` nad `pc`/`lr`/`far`/`sp` (typ +
  atributy stránky) a backtrace po `fp` (16 rámců; stránka každého rámce se
  před čtením ověří `svcQueryMemory`, aby handler nespadl podruhé).
* `ci/patches/apm_diag.py` → emulátor loguje aktivní performance konfiguraci
  (`appletGetCurrentPerformanceConfiguration`, command 91) + režim.
* `ci/patches/launcher_apm_diag.py` → launcher vypíše totéž těsně před
  spuštěním hry (to je konfigurace, kterou emulátor zdědí).

**Build 58 potřeboval tři opravy, než prošel** — všechny tři byly chyby, které
lokální testy měly chytit a nechytly:

| run | chyba | příčina |
|---|---|---|
| `35371999430` | `invalid use of undefined type 'struct so_module'` (vk.c), `unknown type name 'ThreadExceptionDump'` (vk.h) | `so_module` je **anonymní typedef** (`so_util.h:25`); `vk.h` nemá `switch.h`. Lokální test měl vlastní `struct so_module {…}`, takže prošel |
| `35373076233` | `vk: v binárce chybí: [session start build=57]` | markerová brána měla číslo binárky **natvrdo**; `ci_core_log.c` už měl 58 |
| `35373639821` | `main.cpp:3712: 'nsxApmNow' was not declared in this scope` | lambda byla v `main()`, volání v `executePaste()` — jiná funkce |

Čtvrtá chyba vyšla najevo až při přepisování té třetí: `FUNC_DEF` v
`launcher_apm_diag.py` neměl `r` prefix, takže `\n` v `printf` se stal
**skutečným koncem řádku** a C string se roztrhl (přesně past buildu 45).
Proto je v `build-switch.sh` teď stavový skener, který na každé řádce
launcheru kontroluje, nezůstal-li otevřený string literal.

**Proč „pořád klesají takty“ stále neumíme vysvětlit:** odstranění FastLoad
nemohlo takty *zvednout* — FastLoad GPU naopak srážel na minimum. Bez boostu
platí výchozí tabulka appletu a o tom, jaké takty to jsou, jsme dosud neměli
jediné číslo. Build 58 to číslo vypíše (`0x92220007/08` = běžný stav,
`0x92220009/0A/0B/0C` = FastLoad tabulky). Až bude v logu, dá se říct, jestli
za klesající takty může APM tabulka, governor, nebo IDLE.

## 1. Okamžité další kroky

**Priorita je teď výkon GT3 (CPU/VU/GS).** Zadání, změřená čísla a experimenty
v pořadí jsou v **`VU-GS-OPTIMALIZACE.md`** — tam začni.

Stručně, co je hotové a co ne:

1. **VK-only** — hotovo (build 43/44, `VK_ONLY: 1`).
2. **Zápisy do taktů** — hotovo, ale ve **dvou** krocích: `cpu_boost()`
   v emulátoru je prázdná (build 48/51) a `appletSetCpuBoostMode(FastLoad)`
   **v launcheru** je zakomentované (build 57). Dřívější tvrzení, že `cpu_boost()`
   v `util.c` je jediné místo v portu, kde se takty nastavují, byla **chyba** —
   code search se díval jen na `source/`, ne na `launcher/source/`. Proto GPU
   jezdilo na minimu i v buildech 48–56. Uživatel má vlastní governor
   (Ultrahand) a jakýkoli zásah mu shazoval systém.
3. **Log bez SD zápisu na frame** — hotovo (build 46–49): dedup + 64 KiB
   buffer; v jedné GT3 session potlačeno 11 493 řádků.
4. **Čtení taktů / rozložení threadů** — hotovo (build 47/49): funguje
   (`clkrst` Result kódy 0x0, `cpu=2703 gpu=1497 emc=2666`).
5. **Optimalizace VU/GS** — **nezačato**. Hypotézy: MTGS+VU1 na vlastní jádra
   místo round-robinu (`pthr.c`), MTVU zap/vyp, `EECycleRate/Skip` zpět na
   default, `vu1Instant`. Vše měřit jen na oknech se stejnými takty.
6. **LSFG** — uživatel DLL má, netestováno (`lsfg=0` ve všech oknech,
   `lsfg_capable=0`). Postup: `Lossless.dll` do
   `sdmc:/switch/nethersx2/lsfg/Lossless.dll` (case-sensitive,
   `lsfg_dll_path()` v `source/hooks/vk.c:192`), v launcheru zapnout
   „LSFG 2x (Vulkan only)" (`Wrapper/LSFGEnabled`), ve hře pak **quick menu
   (L+R+Plus)**. V logu se to pozná podle `lsfg_prepared=1`
   (`vkCreateInstance`) a `lsfg_capable=1 family=<čísl>` (`vkCreateDevice`).
   Není to emulační rychlost, ale z 39 FPS udělá plynulých ~60.

## 2. Čísla a identifikátory, co se špatně dohledávají

| Věc | Hodnota |
|---|---|
| branch session | `arena/01a0b2a1-test` (nikdy nepushovat jinam; stará `arena/01a0aad9-test` už na remote není) |
| poslední pushnutý commit | 204d405 docs: build 51 v tabulce (boost pryc, takty jen ke cteni) (a starší: build 51, log-analyzer, VU-GS plán) |
| rolling release URL | `https://github.com/berlint-hub/TEST/releases/download/nro-latest/NetherSX2.nro` |
| aktuální build | **58** (binárka; `NSX_CI_BUILD=58` v `ci/patches/ci_core_log.c`) — **diagnostický**: forenzní crash dump (registry + thread + `svcQueryMemory` + backtrace) a čtení aktivní performance konfigurace (APM). Žádné chování se nemění, CPU boost zůstává pryč. Binárku na kartě poznáš podle `[CI] session start build=58`. Předchozí **57** (run `35367770625`, commit `dabbb7f`, success): 71 598 215 B, `sha256=8d44f3f4e9106ef6`, uvnitř `NetherSX2_nx_vk.nro` = 23 104 387 B, release „binarka build 57, run 60, Vulkan“, 0 error anotací — **ale na kartě padá při startu hry (§0d)**. 56 = 71 598 215 B (`sha256` `a4af3b111c685e28`), 55 = 71 602 311 B (`sha256` `48b2889875e2145f`), 51 = 71 594 119 B (`sha256` `9c719e25cb27b374`). Velikost se mezi buildy opakuje — **rozlišuj podle `sha256`** |
| v balíku | build 43: jen `NetherSX2_nx_vk.nro` **23 088 003 B** (LTO + cache v loaderu; build 42 měl 23 124 867 B). GL binárka se nestaví (`VK_ONLY=1`) — zpět ji vrátíš přepnutím `VK_ONLY: 0` v `mesa-vk.yml`; kód i GL FPS měřidlo zůstávají |
| pozor na velikosti | buildy 34–37 maj **identickou** velikost (stránkový zarovnání segmentů) — rozlišuj podle `sha256` (35 = `b3a06739…`, 36 = `f6ea45cb…`, 37 = `c2d6aa7d…`). Build 38 povyrostl na 78 724 195 B, protože se konečně zkompilovala diagnostika |
| generovaný loader | 766 forwarderů, `libnsxvkloader.a` = 554 390 B |
| upstream refáček | `NaGaa95/NetherSX2_nx` @ `f084dc1`; `PalindromicBreadLoaf/nxvk` @ `switch` (`238e06f`) |
| ceny | Mesa od nuly ~25–35 min, bundle ~9 min, reuse SDK ~4 min; kvóta privátního repa ~2000 runner min/měsíc |
| uživatelovo hardware | BIOS `SCPH-90001_BIOS_V18_USA_230.ROM0`, iso `GT3 (Europe, Australia) (En,Fr,De,Es,It) (v2.00)`, volno na kartě 167 601 MB (SD plná tedy NENÍ) |

Artefakty: `nethersx2-nro-vk-bundle` (90 dní), `mesa-sdk` (SDK s `lib/`,
`pkg/`, `include/`).

**Nástroje v repu** (co ušetří čas):
* `ci/analyze-core-log.py <log>` — FPS podle taktů, stutter, rozložení threadů,
  kolik řádků spolkl dedup. Umí i `--full` s rozpadem na jednotlivá okna.
  **Pozor:** FPS řádky jsou ve `nethersx2-vulkan.log` (VK větev), ne v core
  logu — pouštět analyzátor na vulkan log, jinak ukáže 0 FPS oken.
* `ci/patches/*.py` — patchery zdrojů portu (util_no_boost, vk_diag, pthr_diag,
  **pthr_pin, imports_pin_diag, main_hacks_markers, error_crash_end**) — vždy
  testovat na **čerstvém** souboru a dvakrát (idempotence).
* `ci/patches/ci_core_log.c` — log modul (dedup + 64 KiB buffer, session
  start/end). **Žádné takty** — NSX_CLK je od buildu 56 venku (§0b).
* `ci/patches/pthr_pin.{c,h}` — pinování work threadů + identita threadů
  (build 55).

## 3. Poznání, který bolí nejvíc (přečti si ho, než sáhneš na VK link)

* **Přesměrovanej `stderr` na Switchi do souboru nic nezapsal.** Od buildu 37
  `ci_core_log.c` dělal `freopen(CI_LOG_PATH, "a", stderr)`, aby se do
  `nethersx2-core.log` chytly i chyby Mesy — a mirror `vk_diag_note` psal
  na stderr. Na kartě (build 38) v core logu **není ani jeden** `[VK]` řádek,
  zatímco `nethersx2-vulkan.log` je plnej. Diagnostika samotná tedy funguje
  (soubor se otevřel), jen cesta přes stderr ne. Od buildu 39 se všechno
  vlastní zrcadlí na **stdout** (ten do souboru prokazatelně chodí — všechny
  core logy jsou z něj) a `ci_core_log.c` navíc hlásí
  `[CI] stderr smerovan do core logu: ok/SELHAL`, aby to příště bylo vidět
  z logu a nemuselo se hádat.
* **LSFG chce `sdmc:/switch/nethersx2/lsfg/Lossless.dll`.** `lsfg_dll_path()`
  v `source/hooks/vk.c` vrací `DATA_ROOT "/lsfg/Lossless.dll"` a device se
  připravuje jako „lsfg_capable" jen když je ten soubor čitelnej **a** je
  zapnutý `Wrapper/LSFGEnabled`. V logu z karty je `lsfg_prepared=0`
  i `lsfg_capable=0 family=4294967295`, takže se ta větev vůbec nezkoušela.
  Není to chyba buildu — bez DLL od Lossless Scaling (proprietární) to
  neprojde. `third_party/lsfg-vk` je GPL-3.0 a je součástí portu.
* **Shader cache NVK**: `disk_cache_horizon.c` má `base =
  os_get_option("MESA_SHADER_CACHE_DIR")`, jinak natvrdo `sdmc:/switch`, a
  dělá `%s/mesa_shader_cache`. Proto se na kartě objevilo
  `sdmc:/switch/mesa_shader_cache`. Přenastavuje se v `main.c`
  (patch v `build-switch.sh`, krok 7a) na `DATA_ROOT "/cache"`, s předchozím
  `mkdir`, protože `make_dir()` v tom souboru umí jen jeden `mkdir` a bez
  existující rodičovské složky se cache **tiše vypne**.
* **Náš generovanej loader si musí pamatovat instanci.** `vk_icdGetInstanceProcAddr`
  s `instance == NULL` vydá jen pět pre-instance entrypointů
  (`EnumerateInstance{,Extension,Layer}Properties`, `EnumerateInstanceVersion`,
  `CreateInstance`, `GetInstanceProcAddr`) — v mesa runtime je na to tvrdý
  `if (instance == NULL) return NULL;` ve `vk_instance_get_proc_addr()`
  (`src/vulkan/runtime/vk_instance.c`), protože tabulky (`wsi_*`,
  `vk_*_trampolines`, dispatch table) visí na instanci. Forwarder, kterej se
  ptá s `(VkInstance)0`, tedy na **každou** WSI/device funkci dostane NULL a
  vrátí fallback `VK_ERROR_INITIALIZATION_FAILED` (= `-3`). Přesně to byl
  build 37: `(CreateVulkanSurface) vkCreateAndroidSurfaceKHR failed: (-3)`
  (shim `vkCreateAndroidSurfaceKHR_shim` volá `vkCreateViSurfaceNN`, což je náš
  forwarder) a zároveň `vkGetDeviceProcAddr` vracel NULL na všechno, protože
  taky sahal na NULL instanci. Loader si proto instanci z `vkCreateInstance`
  zapamatuje (`nsx_instance`) a `vkDestroyInstance` ji zapomene. Hostovskej
  test (`/tmp/gentest`, fake ICD co se chová jako mesa): před = `-3`,
  po = `VK_SUCCESS`; `vkGetDeviceProcAddr("vkCmdDraw")` před = NULL,
  po = adresa.
* **Diagnostiku `NETHERSX2_VK_DIAGNOSTIC` zapínej make proměnnou, ne patchem.**
  Makefile má vlastní `ifneq ($(strip $(NETHERSX2_VK_DIAGNOSTIC)),)`. Náš patch
  měl pojistku `if "NETHERSX2_VK_DIAGNOSTIC" in text: už zapnutá` — jenže ten
  string je v Makefile i bez zásahu (v tom `ifneq`), takže patch tiše nic
  nepřidal, CI napsalo „DIAGNOSTIC zapnutej" a buildy 35 i 37 jely **bez**
  diagnostiky → `nethersx2-vulkan.log` nikdy nevznikl. Teď jde jako
  `make NETHERSX2_VK_DIAGNOSTIC=1` a CI to ověřuje greppem stringu
  `NetherSX2 Vulkan diagnostic` v hotovém .nro.
* **„VK_SUCCESS a nula zařízení" = chybějící `NVK_I_WANT_A_BROKEN_VULKAN_DRIVER=1`.**
  nxvk odmítá Tegru: `nvk_is_conformant()`
  (`src/nouveau/vulkan/nvk_physical_device.c:91`) vrací false pro cokoli jinýho
  než `NV_DEVICE_TYPE_DIS`, a Switch se hlásí jako `NV_DEVICE_TYPE_SOC`
  (`nvkmd_nvgpu_get_dev_info` v `nvkmd_nvgpu_pdev.c`). Build je
  `--buildtype release` (`switch/build/configure-mesa.sh`), takže NDEBUG větev
  v `nvk_physical_device_create()` vrátí `VK_ERROR_INCOMPATIBLE_DRIVER`
  **úplně bez hlášky** — v debug buildu by u toho bylo „WARNING: NVK is not
  well-tested…". `enumerate_physical_devices_locked()` (mesa runtime,
  `src/vulkan/runtime/vk_instance.c`) ten kód bere jako „tomuhle drveru to
  nesedí, zkus DRM větev"; `drmGetDevices2()` na Switchi nic nenajde, takže
  funkce vrátí `VK_SUCCESS` s **prázdným seznamem**. Core to zaloguje jako
  `(EnumerateGPUs) vkEnumeratePhysicalDevices (1) failed:  (0: VK_SUCCESS)`
  a `GS failed to open.` Vlastní appky nxvk si proměnnou nastavujou v `main()`
  (`switch/README.md:268`, `switch/smoke/nvk_harness.h:138`); port ji neměl,
  doplňuje ji `build-switch.sh` krok 7a do `source/main.c` pod
  `#if defined(USE_VULKAN)`.
* **nxvk záměrně nemá Vulkan loader.** Z Mesy ven jde akorát
  `vk_icdGetInstanceProcAddr` (`PUBLIC` v
  `src/nouveau/vulkan/nvk_instance.c:269`); vlastní appky si všechno
  vyžádají přes něj (`switch/smoke/nvk_harness.h:113`). Public `vk*` jména
  v archvech **nejsou** — sčítání 88 643 definic ve 137 archivech dalo
  `vkCreateInstance → NIKDE`. NetherSX2_nx (port z Androidu) je ale volá
  natvrdo, protože na Androidu je dodá loader.
* **Proto existuje `ci/gen-vk-loader.py`**: vygeneruje forwardery
  (dnes 766) na `vk_icdGetInstanceProcAddr((VkInstance)0, "vkX")`.
  `vkGetInstanceProcAddr`/`vkGetDeviceProcAddr` mají vlastní impl, jinak se
  to zacyklí. `--gc-sections` zajistí, že se do .nra dostane jen to, co se
  volá. Ověřeno hostovským `gcc -fsyntax-only` proti Mesa hlavičkám.
* **`vkEnumerateInstanceExtensionProperties` nikdy nepřidávej do skip listu
  ani nedefinuj jako stub.** Původní weak stub, který vracel nula extenzí,
  způsobil `Vulkan: Missing required extension VK_KHR_surface` na hardwaru:
  `source/hooks/vk.c:998` (`vkEnumerateInstanceExtensionProperties_hook`) si
  přes tu funkci nechává vypsat, jaký instance extenze smí povolit, a teprve
  přidá `VK_KHR_android_surface`, který `vkCreateInstance_hook` přejmenuje na
  `VK_NN_vi_surface`. Když je seznam prázdný, jádro to vzdá dřív, než
  zavolá `vkCreateInstance`.
* **newlib dluh, který se objeví hned za VK symboly:** `getuid geteuid getgid
  getegid dirfd fstatat getpwuid_r sysconf posix_memalign fchmodat utimensat
  futimens renameat linkat flock pthread_sigmask regcomp regexec regfree
  posix_fadvise madvise fdatasync syncfs` (volá je `disk_cache_os.c`,
  `draw_gs.c`, `mesa_cache_db.c`, `u_thread.c`, `xmlconfig.c`). Řeší je druhý
  objekt v `libnsxvkloader.a`, generovaný v `nsx_vk_pkg()`; definuje se jen
  to, co `nm` nenajde v `libnx.a`/`libc.a`/`libm.a`/`libpthread.a`, a vše je
  `weak`. Sémantika je „bezpečný nic": `getpwuid_r` → `ENOENT` (Mesa si sama
  vypne disk cache), `regcomp` → `REG_ESPACE` (žádnej per-app drirc
  workaround), `flock` → 0.
* **nxvk si balí archivy sám a je to lepší než 23 meson archivů:**
  `make CONTAINER= package-gl` udělá `switch/build/pkg/lib/`
  `{libnvk.a, libnvk_support.a, libnvk_gl.a}` a `nxvk.pc` s receptem
  `-Wl,--whole-archive -lnvk … -Wl,--start-group -lnvk_support -lz -lexpat
  -Wl,--end-group -Wl,-u,vk_icdGetInstanceProcAddr -Wl,--gc-sections`.
  `make install` na to **nesahat** — kopíruje do `$(DEVKITPRO)/portlibs` a
  `/opt/devkitpro` je v image read-only. `libnvk_gl.a` (Zink front-end) je
  potřeba kvůli `egl*`, na který odkazuje i `source/imports.c` v VK režimu.
* **Meson dělá thin archivy** (`!<thin>`, jen cesty na `.o` v build stromu) →
  mimo build adresář je ld přečte jen po přetavění na fat přes
  `aarch64-none-elf-ar -M` **uvnitř image** (hostitelskej `ar`/`llvm-ar`
  ten MRI skript nesežral).
* Makefile portu má `LIBS :=` (ne `LIBS +=`), takže se dá rozšířit jen
  kompletním přepisem — proto `nsx_vk_pkg()` přepis whole block mezi
  `LIBS :=` a `-lnx -lstdc++ -lm` a nechává na konci `$(STORAGE_LIBS)
  -lcurl -lz -lzstd -lnx -lstdc++ -lm`. Idempotence přes marker `NSX_VK_PKG`.
  Diagnostika se zapíná na řádku `DEFINES += -DUSE_VULKAN` (marker
  `NETHERSX2_VK_DIAGNOSTIC`).
* Duplicitní Mesa symboly (`_mesa_*`, `glsl_*`, `half_float`) mezi
  `libnvk_support.a` a `switch-mesa` portlibs řeší **`-Wl,-z,muldefs`**
  (doplněno do `LDFLAGS`), ne vyhození členů — to druhé přišlo o
  `vkCreateDevice`, protože kolizní soubor ten symbol taky nesl.
* `LTOFLAGS=` na příkazové řádce je potřeba nechat vypnutý: archivy z SDK
  jsou LTO IR z jinýho gcc, bez toho přichází „error op…" bez textu.
  Nebylo to příčina VK problémů (hypotéza padla), ale stejně to tam zůstalo.
* Image `ghcr.io/nagaa95/nx-nethersx2-build:1.1` má **prázdný portlibs**,
  proto stage 3 instaluje `switch-*` přes `dkp-pacman` a v seznamu jsou i
  `switch-libexpat switch-zlib switch-zstd` (bez `libexpat.a` nemůže
  `libxmlconfig.a`). `gh` CLI v tom containeru není (rc=127) — publikovat se
  dá jen v jobu bez containeru.

## 4. Launcher a soubory na kartě

* Finální `NetherSX2.nro` je **launcher**; ten za běhu extrahuje
  `romfs:/emu/NetherSX2_nx_<renderer>.nro` do `sdmc:/switch/nethersx2/.emu/`
  a `romfs:/cores/*.so` do `sdmc:/switch/nethersx2/cores/`. Loop je
  `renderers={"vk","gl"}` (`launcher/source/main.cpp:7003`), takže oba
  soubory se extrahujou zvlášť a jeden chybějící neznamená chybu.
* Původní hláška „Could not extract emulator files (SD full?)" byla
  zavádějící. Opravený jsou tři skutečný věci v `extractFromRomfs`
  (kolem ř. 6905–6920): fatální `fsync` (navrací EEXIST a je to OK),
  `g_setupAborted` uprostřed kopírování (teď se resetuje), kontrola velikosti
  bez `fsdevCommitDevice("sdmc")`. A `readIdentity()` hledal `NRO0` na offsetu
  0x10 místo 0x0. Hypotéza „chybí `mkdir` pro `cores/` a `.emu/`" je
  **vyvrácená** — `ensureDirectory()` (ř. 7213) to dělá na startu (ř. 7426).
* `[Logging]` blok v `nethersx2.ini` je v téhle verzi **no-op**:
  `source/main.c` při každým startu vynuluje všech pět `Logging/*` klíčů.
  Naše záplata je respektuje jen když existuje `ci-logging.enabled`.
* Naše sonda je `launcher-diag.log` (píšu se tam velikosti zdroj/cíl,
  prvních 32 bajtů, `statvfs` a `probe()` = fopen/fwrite/fflush/fsync/stat/
  rename/stat pro `cores` i `.emu`).
* `nethersx2-core.log` (jen když je na kartě `ci-logging.enabled`) teď chytá
  **stdout i stderr** do jednoho souboru a hned na začátku píše
  `[CI] log capture ON, NVK_I_WANT_A_BROKEN_VULKAN_DRIVER=…`. V diag buildu
  k tomu přibývá `nethersx2-vulkan.log` (`VK_DIAG`) a `nethersx2-mesa.log`
  (`MESA_LOG_FILE`), do kterýho píše Mesa přes `mesa_log`.

## 5. CI mechanika (4 workflow soubory)

* `build.yml`, `probe-toolchain.yml` — jen `workflow_dispatch`.
* `bundle.yml` (GL-only, pro ruční otestování launcheru) — `workflow_dispatch`
  a push měnící `.github/workflows/bundle.yml`.
* `mesa-vk.yml` (ten hlavní: GL+VK bundle) — jobs `sdk-src` → `mesa` →
  `bundle` → `publish`.
  * `mesa` (draha Mesa/NVK v Dockeru) se pouští na dispatch bez
    `reuse_sdk_run`, na push s `[mesa]` v message, nebo když `sdk-src`
    nenašel žádná `mesa-sdk` artifact. Inak se SDK bere z posledního runu.
  * `bundle` má `VK_ONLY: 0` (GL je zpátky v balíku jako fallback) a
    `VK_DIAG: 1` (dočasně, dokud NVK neprojde). Když VK binárka nevznikne,
    `verdict.sh` job shodí — žádný „zelený, ale k ničemu" release.
  * `publish` nahraje **jednu** release (`nro-latest`, 78 MB asset) se 3
    pokusy, `timeout-minutes: 25`. Gl a VK workflow sdílej rolling tag
    `nro-latest` — kdo publikoval naposled, ten vyhrál.
  * `concurrency.cancel-in-progress` je zapnutej: další push **zruší**
    rozdělaný run. Proto do branchu netlačit nic, co nemusí.
* Triggery jsou zákeřný: push měnící jen `ci/**` **občas Actions nevytvoří
  vůbec nic** (stalo se u `b245ee9`: žádná check run, žádná queue).
  `workflow_dispatch` přes `gh` je na tuhle integraci 403. Nejspolehlivější
  trigger je push, kterej sahá do samotnýho `.github/workflows/mesa-vk.yml`.
* Hledání artifactu: `gh api "repos/$GITHUB_REPOSITORY/actions/artifacts?per_page=100"`
  a filtr `select(.name=="mesa-sdk" and .expired==false)`. **Ne** přes
  `actions/runs?per_page=N` — to okno napříč 4 workflowma mine run se
  správným artifactem a `sdk-src` vrátí prázdný output (tichý fail).
* Co se čte po runu: `.github/workflows` → `jobs`, pak
  `check-runs/<id>/annotations` (vrací občas array, občas `{annotations:[…]}`).
  Anotací je ~30–50 na check run a ~230 znaků na text, proto `ci/annotate.sh`
  a `DIGEST` soubor. Raw logy Actions jsou nedostupný (Azure blob blokovaný),
  takže všechna diagnostika musí jít přes anotace.
* Velikosti `.nro` se mezi buildy **nehýbou** (segmenty se zarovnávaj na
  stránky), takže buildy 34–37 hlásí všechny `vk=23116675 B` a
  `nro=78716003 B`. Že se změna opravdu propsala, se pozná jen podle `sha256`,
  greppem řetězce v binárce (stage 6: `grep -qa "NVK_I_WANT_A_BROKEN_VULKAN_DRIVER"`
  v `NetherSX2_nx_vk.nro`, jinak `::error::`) a runtime výpisem
  `[CI] log capture ON, NVK_I_WANT_A_BROKEN_VULKAN_DRIVER=…` z `ci_core_log.c`.
* Stažený `.nro` localně ověřit nejde (ani `raw.githubusercontent.com`, ani
  `productionresultssa*.blob.core.windows.net` nepustí síť). Ověřuje se v CI:
  grep jmen souborů do RomFS tabulky přimo v `out/NetherSX2.nro`
  (`emu/NetherSX2_nx_vk.nro`, `emu/NetherSX2_nx_gl.nro`,
  `cores/libemucore.so`, `res/GameIndex.yaml`), stage 10 v `build-switch.sh`.

## 6. Mechanika sandboxu (kvůli tomu jsem dělal chyby dvakrát)

* Sandbox **mezi turny přijde o git historii**, pracovní strom zůstane.
  Záchrana: `git fetch origin arena/01a0aad9-test` →
  `git reset --soft FETCH_HEAD` → `git commit`.
* **Pozor:** `reset --soft` + commit vezme *index*, který nezná soubory
  přidaný mezitím na remote, a **smaže je** (stalo se — zmizely
  `launcher-diag.log` a `nethersx2-core.log`, který nahral uživatel;
  návrat `git checkout <remote-tip> -- <soubory>`). Po záchrane vždy
  `git show --stat HEAD` a zkontrolovat, že se nemaže nic cizího.
* `git commit -m "…"` s uvozovkama v těle se rozbil a vytvořil smetený soubor
  `zahozenej`, kterým se to dostalo do commitu. **Používat `git commit -F soubor`**
  a `git status --short` před `git add -A`.
* Python v sandboxu občas přijde o `pyyaml` → `pip install -q
  --break-system-packages pyyaml`. Po jakýkoliv editaci workflow:
  `yaml.safe_load` + `bash -n` na extrahovanej `run:` blok (YAML `run: |` s
  menším odsazením scalar utne a výsledek je kryptický).
* `jq` tu nezná `tostring/1`; numbers + strings v jednom řetězci =
  „cannot add". Používat `[.a,.b]|@tsv` nebo `(.id|tostring)`.
* `bash` volání umírá po ~230 s; poll CI dělat jako jeden `sleep 280`
  a pak stav, ne jako smyčku.
* GitHub token v sandboxu **vyprší zhruba za 30–45 minut** (`gh: Bad
  credentials`) — pak už nezbývá než říct uživateli, ať GitHub v Arena
  připojí znova. Nikdy nežádat token/2FA.

## 7. Právní okraj (neignorovat)

`nxvk` je GPL-2.0-or-later a linkujeme ho staticky → distribuce `.nro` nese
povinnost doložit zdrojáky. Plní se to textem v release poznámce (odkaz na
repáček + workflow + artifact `mesa-sdk`); tarball se nikam nedává. Emulátorová
jádra ani BIOS se v repozitáři nenachází a nesmí — stahujou se v CI z
`Trixarian/NetherSX2-{patch,classic}` a uživatel si BIOS dává sám.

## 8. Co jsem zkoušel a nemá smysl opakovat

1. Vypínat duplicity vyhazováním členů z `libvulkan.a`.
2. `ar -M` na hostiteli; `-lexpat -lz` nacpat do `libvulkan.a`.
3. `LTOFLAGS=` jako řešení VK linku.
4. Hledat artifact přes seznam runů (`per_page` okno).
5. `VK_ONLY=1` bez `die` — vyrobí zelený build bez VK, což je horší než
   červený.
6. `[Logging]` v ini; `mkdir` hypotéza u extrakce.
7. `jq` součet stringu a čísla; `gh` uvnitř containeru; `awk gsub` s `&&`;
   multi-line `sed a\` v heredocu (python `str.replace` místo toho).
8. Sázet se na to, že `raw.githubusercontent.com` / Azure blob něco pustí.
9. Hledat příčinu „VK_SUCCESS a 0 fyzických zařízení" v našem loaderu /
   v extenzích / ve flat archivtech. Je to conformant check v nxvk a řeší to
   jediná proměnná (viz §3). Totéž platí pro úvahy „nvkmd nezvládl
   nvInitialize" — tenhle kód se ani nespustí, dokud ho conformant check
   nepustí dál.
10. Usuzovat z velikosti `.nro`, že se něco změnilo (viz §5).
11. Vymýšlet vlastní Vulkan driver / fork Mesy. Dva reálné problémy (env
    proměnná, instance v loaderu) byly **naše** integrace, ne driver; nxkv
    má pro Switch hotovou WSI (`src/vulkan/wsi/wsi_switch.c`,
    `wsi_switch_surface_get_capabilities`, triple buffer, `kind=0xfe`) i
    nvkmd backend nad libnx nv službami a vlastní smoke testy. Vlastní port
    by znamenal měsíce práce s tím samým výsledkem.
12. Věřit `key`/`::notice::` zápisu z CI o tom, že se něco zapnulo — u
    diagnostiky se to musí ověřit v hotovém .nro (viz §3 a §5).
13. Psát do generátoru patchů `\n` tam, kde má být nový řádek v C. Python
    `"\n"` = skutečný nový řádek, `"\\n"` = dvojice znaků pro C. Když se to
    splete obráceně, dostane se do zdrojáku doslovné `\n` a `make` spadne až
    za pár minut (`stray '\' in program`, `vk.c:87`, build 45 — 6 minut CI).
    Pojistka je v `ci/build-switch.sh` hned za patchem `vk.c`: lex kontrola
    (každé `\n` musí ležet uvnitř stringu) build zastaví hned.
14. Hledat markery v `.nro` přes `grep -qa "..."` — `[CI] cores:` má hranaté
    závorky a v základním grepu je to znaková třída, takže to hlásí „chybí
    marker", i když v binárce je (falešný poplach buildu 46). Používej
    `grep -qaF --`.
15. Vymýšlet názvy enumů podle sebe: `ApmPerformanceMode_Handheld` ani
    `AppletOperationMode_Docked` v libnx **nejsou** (jsou `_Normal`/`_Boost`
    a `_Handheld`/`_Console`) — build 47 na tom spadl. A hlavně: `PcvModule_*`
    (0/1/56) vs `PcvModuleId_*` (0x4000000x) jsou dvě různé služby; záměna
    projde kompilací a na kartě se projeví jako nuly (přesně to byl build 46).
    Od buildu 47 to hlídá syntax kontrola v CI (`-Werror=enum-conversion`,
    `-Werror=implicit-function-declaration`).

16. **Hledat „kdo sahá na takty“ jen v `source/`.** Port má **dvě** binárky:
    emulátor (`source/`) a **launcher** (`launcher/source/`, SDL2). Audit
    „`CpuBoostMode` je jen v `util.c`, takže `cpu_boost()` je jediné místo,
    kde se takty nastavují“ prošel, a přitom launcher volal
    `appletSetCpuBoostMode(FastLoad)` šestkrát — včetně `main()` těsně před
    spuštěním hry. Proto GPU jezdilo na minimu v buildech 48–56. Kdykoli se
    hledá volání sysmodulu, grep musí jít přes **oba** stromy.
17. **`appletSetCpuBoostMode` je globální, ne per-proces.** Posílá command 66
    na `ICommonStateGetter` (libnx `applet.c:1031`), takže konfigurace přetrvá
    do `.nro`, které launcher spustí. A `FastLoad` = „Boost CPU.
    **Additionally, throttle GPU to minimum**“ (`apm.h:21`) — ne „jen CPU
    nahoru“.
18. **Psát do `MemoryInfo.base_addr`.** Člen se jmenuje **`addr`**
    (`nx/include/switch/kernel/svc.h:93`). Host `gcc -fsyntax-only` se
    skutečnými hlavičkami libnx to odhalí za sekundu — devkitA64 na to není
    potřeba (v sandboxu chybí newlib `sys/lock.h` a `arm_acle.h`, ale stačí
    includovat jen `types.h`, `result.h`, `arm/thread_context.h` a
    `kernel/svc.h`).
19. **Dělat backtrace v exception handleru bez ověření stránky.** JIT kód
    `fp` nezakládá, takže řetězec rámců ukazuje do nikam — a handler, který
    spadne podruhé, uvízne v `for(;;) svcSleepThread()` (`crash.c`), takže by
    na kartě nezůstal **žádný** log. Před každým čtením rámce
    `svcQueryMemory` + kontrola, že `fp+16` leží uvnitř vrácené stránky.
20. **Testovat patchnuté C proti ručně napsaným definicím typů.** Build 58
    (run `35371999430`) spadl na `invalid use of undefined type 'struct
    so_module'` — lokální test měl `struct so_module { void *load_base; … }`
    napsaný v testovacím souboru, takže prošel, zatímco v portu je
    `so_module` **anonymní typedef** (`source/so_util.h:25`), tedy
    `struct so_module` jako typ neexistuje. Pravidlo: test bere typy
    **ze skutečných hlaviček portu/libnx**, nikdy ne z vlastní definice.
21. **Vypsat číslo binárky natvrdo do markerové brány.** `ci/build-switch.sh`
    měl v seznamu markerů `"session start build=57"` zapsané ručně, zatímco
    `ci_core_log.c` už měl 58 — brána, která má hlídat, že diagnostika je
    v binárce, zabila zdravý build (run `35373076233`:
    `vk: v binárce chybí: [session start build=57]`). Číslo se teď odvozuje
    `grep -o 'session start build=[0-9]*'` z `ci_core_log.c`, stejně jako
    `dist/ci-build.txt` dole ve skriptu. **Kdykoli zvedáš `NSX_CI_BUILD`,
    projdi `grep -rn "build=5" ci/ .github/`.**
22. **Mít v patcheru jednu značku pro víc editací stejného souboru.**
    `if MARK in text: return` přeskočí při druhém průchodu (a v CI se patche
    pouštějí nad už patchnutým stromem) i ty editace, které ještě neproběhly.
    Každá editace musí mít vlastní značku.

## 9. Ladění výkonu na kartě (build 51)

### Změřeno na kartě (build 49, log `e1b92bd`, GT3, 172 FPS oken)

| takty cpu/gpu/emc | oken | FPS medián | p10 |
|---|---|---|---|
| **2703 / 1497 / 2666** (Ultrahand governor na max) | 124 | **38,7** | 26,8 |
| 1020 / 307 / 1331 (governor dole) | 43 | 16,9 | 15,8 |
| 2703 / 307 / 1331 | 2 | 33,8 | 33,8 |
| 2703 / 1497 / 1331 | 2 | 34,2 | 33,8 |
| 2703 / **76** / 2666 (držený FastLoad) | 1 | 40,7 | 40,7 |

* **GT3 je CPU-bound**: při stejném CPU dá GPU 1497 MHz jen **+1 %** proti
  307 MHz (34,2 vs 33,8 FPS). Optimalizace GS/Vulkan tedy nemá smysl;
  páka je ve VU1/EE/synchronizaci threadů.
* **`gpu=76` je v logu přímý důkaz** dřívější stížnosti „locknul jsi mi GPU na
  minimu" — to byl náš držený `FastLoad`.
* Stutter zůstává i na max taktech: nejdelší frame 580 ms (načítání/shader),
  medián 27 ms.
* **LSFG je vypnuté** (`lsfg=0` ve všech oknech, `lsfg_capable=0` ve vulkan
  logu) — uživatel DLL má, ale netestoval.
* `[CI] apm: mode=0 handheld=0x20003 docked=0x10001` — **není** to konfigurace
  FastLoad (0x9222000A/0x92220009); Ultrahand si APM přepisuje sám.
* `[CI] stderr smerovan do core logu: SELHAL (errno=5)` — na jeho konzoli
  stderr přesměrovat nelze (EIO); Mesa chyby se ztrácejí, naše diag jde na
  stdout.
* Dedup logu funguje: v jedné GT3 session potlačil **11 493 řádků** (422
  souhrnů); celý log má 96 KB místo dřívějších 630 KB.

### Co je kvůli výkonu v buildu 51 (vše vypínatelné markerem na SD)

Čísla, ať se nemusí znovu měřit:
* **Fallout: Brotherhood of Steel — 59,9 FPS** (medián 2 session, build 43,
  1280×720). Je v pohodě — **nezhoršit**.
* **GT3 — 38,7 FPS** (build 49, okna na max taktech; 31,6 FPS naměřeno dřív,
  když se takty nehlásily a governor jel jiný profil). Cíl je posunout
  medián nahoru; snížení EE na 50 % **nic nezmění**, takže se nečeká na EE.
* Hra je **CPU-bound** (GPU takt +1 % FPS) — viz tabulka výše.

Co je kvůli tomu v buildu 46+ nového (vše za běhu vypínatelné markerem na SD):

1. **`NSX_LOG_QUIET` — log už nezapisuje na kartu při každém framu.** GT3 měl
   za jednu session **7 309×** `Timezone=`/`SummerTime=` (volané per frame).
   `ci_core_log.c` teď: vypisuje přes `ci_emit` (stdout), opakující se řádky
   slije do jednoho + `... predchozi radka se opakovala Nx`, a hlavně drží
   **64 KiB buffer** (`_IOFBF`), takže malé zápisy nedojdou na SD. Vypnutí:
   `ci-rawlog.enabled` (úplně bez dedupu) nebo smazat `ci-logging.enabled`.
   **Pozor:** naše vlastní řádky (`[VK]`, `[GL]`, `[CI]`, `[nsx-vk]`) dedup
   obchází a flushe hned — nesmí zmizet FPS měřidlo.
2. **CPU boost je úplně vypnutý (build 48).** Port volal
   `appletSetCpuBoostMode(FastLoad)` na startu a po 60 framech `Normal`.
   FastLoad podle libnx znamená „Boost CPU. **Additionally, throttle GPU to
   minimum**" = CPU 1785 + **GPU 76 MHz**; uživatel na kartě videl „GPU na
   minimu" a GT3 spadlo z 31,6 na 29,1 FPS. Navíc mu to shazovalo systém:
   **má Ultrahand s vlastním governorem taktů na max** a boost se s ním
   pere. `ci/patches/util_no_boost.py` proto `cpu_boost()` vyprázdnil (je to
   jediné místo v portu, kde se takty nastavují — ověřeno code searchem).
   Do taktů se nešahá; jen se čtou.
3. **FPS řádka s takty** (od buildu 48): `FPS 31.6 | 31.65 ms/frame | min …
   max … ms | N framu | lsfg=0 | cpu=1785 gpu=768 emc=1600 MHz`. Takty hlásí,
   co reálně drží systém (u uživatele governor z Ultrahandu na max) — když
   CPU stojí na 1785 a FPS stojí, je bottleneck jinde než v CPU. `min`/`max`
   ms ukazují stutter.
4. **Rozložení threadů na jádra** (`PTHRDIAG`, jen diagnostika):
   `[CI] cores: mask=0x… -> hot=0x… ee=N work=a,b bg=c`, pak řádek za každý
   emulační thread (`[CI] thread EE/VM -> core=N (vyhrazene)`, `[CI] thread #k
   (work: MTGS/VU1/worker) -> core=N`, `[CI] thread bg (audio/...) -> core=N`).
   Tohle odpovídá na dotaz „4 jádra: EE, 2× VU, GS?" — viz §10.

## 10. Kolik jader hra dostane a jak se rozdělí (odpověď na dotaz)

* **hbmenu dá 3 jádra** (4. jádro drží systém). **4 jádra jen přes zástupce na
  HOME** — to je upstream chování (`f33e41e`), nic jsme na tom neměnili.
* **Naměřeno z karty (build 46, GT3 i Fallout stejně)**: `mask=0xf -> ee=0
  work=1,2 bg=3`, thready `#1→1`, `EE/VM→0`, `#2→2`, `#3→1`, `bg→3`. Tedy:
  jádro 0 = EE (+VU0), jádra 1–2 = MTGS (GS/Vulkan) + VU1 (MTVU) + worker
  round-robin, jádro 3 = audio. **VU1 a GS se dělí o stejná dvě jádra** — to je
  kandidát na bottleneck GT3 (a důvod, proč přidání EE headroomu nic nepřinese).
  Test do buildu 48: píchnout MTGS a VU1 na vlastní jádra místo round-robinu.
* Rozdělení **není** „1× EE, 2× VU, 1× GS". Reálně (`source/pthr.c`):
  `EE + VM(VU0)` = **jeden** thread, hard-pinned na `ee_core` (první jádro
  masky); `GS` = vlastní thread (MTGS); `VU1` = vlastní thread **jen když je
  zapnuté MTVU** (u nás default zapnuto); `work` pool (MTGS/VU1/worker) jde
  round-robin po zbývajících jádrech; `bg` (audio) sedí na horním jádře při 4+.
* „Dvě na VU" tedy nemá co zapnout — VU0 je součást EE threadu (oddělit by
  znamenalo zásah do jádra emulace) a VU1 už vlastní thread má.
* **Potvrzeno znovu (build 49, 4 sessions)**: rozložení je pořád stejné
  (`mask=0xf ee=0 work=1,2 bg=3`), takže jde o stabilní vlastnost portu,
  ne náhodu jednoho běhu.
* **Co s tím (plán je v `VU-GS-OPTIMALIZACE.md` §5)**: pin MTGS a VU1 na
  vlastní jádra místo round-robinu, MTVU zap/vyp, `EECycleRate/Skip` zpět na
  default, `vu1Instant`. Měřit **jen okna se stejnými takty** — governor
  uživatele přeskakuje mezi 2703/1497/2666 (38,7 FPS) a 1020/307/1331
  (16,9 FPS), takže „zlepšení" se dá snadno splést s přepnutím profilu.
* **Co už je vyloučené**: GPU takt. Při stejném CPU dal 4,9× vyšší GPU takt
  jen **+1 % FPS** → GS/Vulkan není bottleneck. A EE na 50 % nic nezměnilo →
  ani hrubý výkon EE. Zbývá VU1 + synchronizace threadů.

## 11. Takty CPU/GPU/EMC — co jde a co (zatím) ne

* **Naměřeno na kartě (build 49)**: čtení funguje —
  `[CI] clk: clkrst init=0x0 open cpu=0x0 gpu=0x0 emc=0x0 pcv=-1` a v FPS
  řádce `cpu=2703 gpu=1497 emc=2666 MHz` (Ultrahand governor na max; při
  drženém FastLoadu `gpu=76`, při nízkém profilu `1020/307/1331`).
* **Historie: `clkrst` v buildu 46 vracelo nuly** (`cpu=0 gpu=0 emc=0`
  v celé session), takže se „GPU na minimu" nedalo ověřit. Build 47 tiskne
  Result kódy (`[CI] clk: clkrst init=0x… open cpu=0x… … pcv=…`) a zkouší
  i starší službu `pcv` jako fallback. Podle těch kódů se pozná, jestli
  čtečka potřebuje jiné vlákno/session, nebo jestli ji firmware zakazuje.
* **Nastavení taktů: `ci-clk.conf`** — textový soubor na SD, např.
  `cpu=1785 gpu=460 emc=1600` (MHz, co tam není se nechá být). Aplikuje se
  jednou na startu emulace, každý zápis se loguje (před/po + Result).
  Okno/handheld: GPU 460 je strop handheldu, 768 oficiální docked.
  **Když má uživatel vlastní governor taktů (Ultrahand / sys-clk), tenhle
  marker nepoužívat** — dva pány na takty se perou. Uživatel ho na kartě
  nemá a mít nemá.
* **Režim APM** se taky loguje (`[CI] apm: mode=… handheld=0x… docked=0x…`):
  `0x9222000A` (handheld) / `0x92220009` (docked) = FastLoad, tj. CPU nahoru
  a GPU na minimum. Když to v logu je, boost je aktivní.
* **Známá past:** `appletSetCpuBoostMode(FastLoad)` NENÍ jen „CPU nahoru" —
  sráží GPU na minimum. Proto ho build 48 vůbec nevolá (viz §9 bod 2) a takty
  se jen čtou. Uživatel má **Ultrahand governor na max**, takže jakýkoli
  zápis z naší strany by byl jednak zbytečný, jednak konflikt.
17. 16. Dělat z `api.github.com` první krok stahování assetů. Build 48 na tom
    umřel hned ve stage 4 (API vrátilo odpověď bez assetů → `assets: []` →
    `die`), ačkoli kód i release byly v pořádku. Kanonická URL
    `github.com/<repo>/releases/download/<tag>/<asset>` vede na CDN přímo a
    API k ničemu nepotřebuje; API je teď jen fallback.
