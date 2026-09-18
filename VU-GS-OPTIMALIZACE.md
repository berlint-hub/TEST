# Optimalizace CPU / VU / GS — zadání pro novou session

> **Tenhle soubor je startovní bod.** Přečti ho celý, pak až HANDOFF.md (§9–§11
> a §8 s pastmi). Všechna čísla níž jsou změřená na kartě uživatele, ne odhad.
> Poslední build: **55** (`nro-latest`) — viz níže „Co je hotové (build 55)".
> Uživatel má v Ultrahandu **pevný** profil cpu 2700 / gpu 1400 / ram 2666 MHz,
> takže A/B měření se nemusí přepínat s profily governoru.

## 0. Kde je kód (přečti první — jinak začneš z prázdna)

**Veškerá práce je ve větvi `arena/01a0b2a1-test`** v repu `berlint-hub/TEST`.
Nová session má vlastní větev, takže si tuhle práci musí **načíst**:

```bash
git fetch origin arena/01a0b2a1-test:refs/remotes/origin/mine
git checkout -B <vlastni-vetev> origin/mine      # a pokračuj z ní
bash -n ci/build-switch.sh                       # rychlá kontrola, že je strom OK
python3 ci/analyze-core-log.py <log z karty>     # nástroj na logy
```

Co tam je: `ci/build-switch.sh` (celý build + patche portu), `ci/patches/`
(`ci_core_log.c` = log modul + čtení taktů, `vk_diag.py` = FPS řádka,
`util_no_boost.py` = vypnutý CPU boost), `.github/workflows/mesa-vk.yml`
(`VK_ONLY: 1`), `HANDOFF.md`, `BUILD-NOTES.md`, tenhle plán.
Bez fetche té větve se `build-switch.sh` v hlavní větvi nezmění — starý stav
neumí ani číst takty, ani nemá `ci/patches/`.

## 1. Co uživatel chce

* „**gt3 má lepší nagaa**" → chce dostat Gran Turismo 3 nad ~50 FPS (teď se to
  na jeho Switchi hýbe mezi 17 a 52 FPS podle taktů).
* Fallout: Brotherhood of Steel funguje výborně (**59,9 FPS**) — **nezhoršit**.
* Snížení zátěže EE na 50 % **nic nezměnilo** → bottleneck není v hrubém výkonu
  EE, ale ve **VU1 / GS / synchronizaci mezi thready**.
* **Nesahat na takty!** Uživatel má **Ultrahand s governorem taktů na max**
  (naměřeno cpu 2703 MHz, emc 2666 MHz, gpu 1497 MHz) a jakýkoli zásah
  emulátoru do taktů mu shazoval systém. Čtení taktů je OK, zápis ne
  (`ci-clk.conf` je jen opt-in a **nemá se používat**).

## 2. Změřeno (build 49, log `e1b92bd`, GT3, 172 FPS oken)

| takty cpu/gpu/emc | oken | FPS medián | p10 |
|---|---|---|---|
| **2703 / 1497 / 2666** (governor na max) | 124 | **38,7** | 26,8 |
| **1020 / 307 / 1331** (governor dole) | 43 | **16,9** | 15,8 |
| 2703 / 307 / 1331 | 2 | 33,8 | 33,8 |
| 2703 / 1497 / 1331 | 2 | 34,2 | 33,8 |
| 2703 / **76** / 2666 (držený FastLoad) | 1 | 40,7 | 40,7 |

**Dva závěry, které šetří spoustu práce:**

1. **GT3 je CPU-bound, ne GPU-bound.** Dvojice řádků s *stejným* CPU a různou
   GPU to dokazuje přímo: `2703/307 → 33,8 FPS` vs `2703/1497 → 34,2 FPS`,
   tedy **+1 % za 4,9× vyšší GPU takt**. Optimalizovat GS (Vulkan) nemá cenu;
   cesta vede přes **VU1/EE/synchronizaci**.
2. **Zápis taktů z naší strany je jedovatý**: `FastLoad` boost drží GPU na
   **76 MHz** (potvrzeno v logu: `gpu=76` za běhu boostu!) a CPU boost se pere
   s governorem. Build 51 už žádný boost nezapisuje (viz HANDOFF §9 bod 2).

Doplňky:
* Stutter existuje i na max taktech: nejdelší frame **580 ms** (načítání/shader
  compile), medián 27 ms.
* **LSFG je vypnuté** (`lsfg=0` ve všech oknech; ve vulkan logu
  `lsfg_capable=0`, `lsfg_prepared=0`) — uživatel DLL má, ale netestoval.
* `[CI] apm: mode=0 handheld=0x20003 docked=0x10001` → **není** to konfigurace
  FastLoad (0x9222000A/0x92220009), Ultrahand si APM zjevně přepisuje sám.
* `[CI] stderr smerovanou do core logu: SELHAL (errno=5)` → na jeho konzoli
  **stderr přesměrovat nejde** (EIO). Mesa chyby jsou proto ztracené; naše
  diagnostika chodí na stdout (funguje).

## 3. Rozložení threadů (změřeno na kartě, build 49)

```
[CI] cores: mask=0xf -> hot=0x7 ee=0 work=1,2 bg=3
[CI] thread #1 (work: MTGS/VU1/worker) -> core=1
[CI] thread EE/VM -> core=0 (vyhrazene)
[CI] thread #2 (work: MTGS/VU1/worker) -> core=2
[CI] thread #3 (work: MTGS/VU1/worker) -> core=1
[CI] thread bg (audio/...) -> core=3
```

**4 jádra dostane** (mask 0xf; hbmenu by dal 3, ale uživatel startuje přes HOME
zástupce). Ale rozdělení **není** „1× EE, 2× VU, 1× GS":
jádro 0 = EE+VU0 (jeden thread, hard-pinned), jádra 1–2 = **MTGS (GS/Vulkan) +
VU1 (MTVU) + worker thready round-robin**, jádro 3 = audio.
→ **VU1 a GS se dělí o stejná dvě jádra** — to je hlavní podezřelý.

## 4. Kde v kódu hledat

| soubor | co tam je |
|---|---|
| `source/pthr.c` | přiřazení threadů na jádra (`ee_core` hard-pinned, work pool round-robin, `bg_core` = horní jádro při 4+) — **tady je největší páka** |
| `launcher/source/main.cpp` | `vuThread` (MTVU), `vu1Instant`, `vuFlagHack`, `EECycleRate`, `EECycleSkip`, `EnableFastBoot`, MTVU→`vuThread` |
| `source/main.c` | hlavní smyčka, `cpu_boost_present_limit` (60 framů — už vypnuto) |
| `source/util.c` | `cpu_boost()` — build 51 ji má jako prázdnou (NSX_NO_BOOST) |
| `ci/build-switch.sh` | patche (`ci/patches/*.py`), kde se dají dělat A/B buildy |
| `ci/analyze-core-log.py` | **analyzátor logu z karty** — FPS, takty, thready, dedup |

## 5. Hypotézy a experimenty (v tomto pořadí)

1. **MTGS a VU1 na vlastní jádra místo round-robinu** (`pthr.c`).
   Změna: work pool přiřazuje thready round-robin; MTGS a VU1 by měly dostat
   fixní jádra (např. VU1 → core 2, MTGS → core 1) a worker thready zbytek.
   Měření: `[CI] thread … -> core=N` + FPS medián (jen okna na max taktech!).
   **Hotovo v buildu 55** (`ci/patches/pthr_pin.{c,h,py}`): work #1 a #2 mají
   **exkluzivní** jádro (dřív jen preferované se sdílenou maskou → migrace),
   rozvržení řídí `ci-pin.conf` (`mode=auto|off|excl_all`, `order1/order2`,
   `JMÉNO=jádro|pool`). **Ale**: z pořadí vytvoření není dokázané, který
   thread je MTGS a který VU1 — proto build 55 zároveň loguje
   `prctl(PR_SET_NAME)` a `sched_setaffinity` (v portu to byly no-op stuby,
   takže jména threadů končila v koši). Jakmile jména uvidíme, přepneme
   v buildu 56 na pravidla `MTGS=1` / `VU1=2`.
2. **MTVU zapnuto/vypnuto** (`vuThread` v launcheru). U GT3 to může jít oběma
   směry; měřit izolovaně. Přepínač udělat markerem na SD
   (např. `ci-mtvu=0/1`), ať se dá testovat bez rebuildu — vzorem je
   `ci-clk.conf` (parser už v `ci/patches/ci_core_log.c` existuje).
   **Hotovo v buildu 55**: marker `ci-mtvu` (soubor s `0`/`1`) přepíše
   `EmuCore/Speedhacks/vuThread` v `run_startup_sequence()`; log hlásí
   `[CI] hack: … -> …`. Pozn.: s `ci-mtvu=0` VU1 thread nevznikne, takže
   pin pak sedí ještě čistěji (2 work thready na 2 jádra).
3. **`EECycleRate` / `EECycleSkip`** — uživatel to má přepnuté (log hlásí
   „Unsafe Settings: Cycle rate/skip is not at default"). Vrátit na default
   a porovnat; patchnout jako marker.
   **Aktualizace (log buildu 54):** tyhle dvě unsafe hlášky v logu **nejsou** —
   zůstaly jen *Hardware Download Mode is not set to Accurate* a *GPU Palette
   Conversion is enabled*. Cykly tedy nejspíš už defaultní jsou. Markery
   `ci-eecycle` / `ci-eeskip` (0–3) jsou v buildu 55 hotové pro A/B.
4. **`vu1Instant` / `vuFlagHack`** (VU1 instant = rychlejší, méně přesné).
   **Hotovo v buildu 55**: markery `ci-vu1instant` / `ci-vuflaghack` (`0`/`1`).
5. Teprve pak hlubší zásahy do jádra.

**Metodika (nutná, jinak se výsledky nedají srovnat):** měřit **jen okna se
stejnými takty** — governor uživatele přeskakuje mezi profily a rozdíl
38,7 vs 16,9 FPS je způsobený takty, ne hrou. `ci/analyze-core-log.py` to
dělá automaticky (tabulka „FPS podle taktů").

## 6. Jak měřit (pracovní postup)

```bash
# 1) build se spustí pushem do větve (workflow mesa-vk.yml)
git push origin HEAD:arena/01a0b2a1-test
gh run list -R berlint-hub/TEST --workflow mesa-vk.yml -L 1 --json databaseId,status,headSha

# 2) výsledek je v release, uživatel stahuje:
#    https://github.com/berlint-hub/TEST/releases/tag/nro-latest  (NetherSX2.nro)

# 3) uživatel nahraje logy do větve arena/01a0aad9-test → stáhnout a analyzovat:
git fetch origin arena/01a0aad9-test:refs/remotes/origin/logs
git show origin/logs:nethersx2-core.log > /tmp/core.log
python3 ci/analyze-core-log.py /tmp/core.log
```

## 7. Markery na SD (`/switch/nethersx2/`)

| soubor | efekt |
|---|---|
| `ci-logging.enabled` | zapne log do `nethersx2-core.log` (bez něj se neloguje) |
| `ci-rawlog.enabled` | vypne dedup řádků **a od buildu 52 taky plně bufferuje** (každý řádek hned na SD; pomalé — jen na pátrání po pádu) |
| `ci-nopin.enabled` | **(build 52)** vypne všechna `svcSetThreadCoreMask` — thready dědí masku procesu. Hlavní vypínač pinování (i pro build 55) |
| `ci-pin.conf` | **(build 55)** rozvržení work threadů: `mode=auto\|off\|excl_all`, `order1=N`, `order2=N`, `JMÉNO=N`, `JMÉNO=pool`. Default (bez souboru) = `mode=auto` → work #1 a #2 exkluzivně na svá jádra |
| `ci-mtvu` | **(build 55)** `0`/`1` → `EmuCore/Speedhacks/vuThread` (MTVU) |
| `ci-vu1instant` / `ci-vuflaghack` | **(build 55)** `0`/`1` → `EmuCore/Speedhacks/vu1Instant` / `vuFlagHack` |
| `ci-eecycle` / `ci-eeskip` | **(build 55)** `0`–`3` → `EmuCore/Speedhacks/EECycleRate` / `EECycleSkip` |
| `ci-clk.enabled` | **(build 54, opt-in)** zapne čtení taktů přes clkrst (od buildu 54 defaultně VYPNUTO — fatal v pcv při kolizi s governorem, viz HANDOFF §0b). Běží-li governor (sys-clk/hoc:clk), radši nepoužívat |
| `ci-clk.conf` | **opt-in zápis taktů** (`cpu=1785 gpu=460`); od buildu 54 navíc vyžaduje i marker `ci-clk.enabled` — **s governorem NEPOUŽÍVAT** |

Zrušené markery (už neexistují): `ci-keepboost.enabled`, `ci-noboost.enabled`.

**Build 52/54 do logu píše** `[CI] session start build=54 ts=… pid=…`
(začátek session, hned flush+fsync) a `[CI] session end (korektni exit)`
jen tehdy, když proces skončil korektně přes `exit()`. **Chybí-li `session
end` na konci session v logu, proces umřel tvrdě** (pád emulátoru nebo
systému) — přesně tak se rozliší, co vlastně padá při přehazování her.

## 8. Pasti, které už jednou draze vyšly (HANDOFF §8)

* `PcvModule_*` (0/1/56) ≠ `PcvModuleId_*` (0x4000000x) — záměna projde
  kompilací a projeví se jako nuly; CI to hlídá `-Werror=enum-conversion`.
* Názvy enumů v libnx: `ApmPerformanceMode_Normal/Boost`,
  `AppletOperationMode_Handheld/Console` — nic jako `_Docked` neexistuje.
* V Python patcheru `\n` vs `\\n` (rozbité C → `stray '\'`); patche jsou proto
  samostatné soubory v `ci/patches/`, ne heredocy.
* `grep -qa "[CI] cores:"` = znaková třída → vždy `grep -qaF --`.
* `api.github.com` nedělat prvním krokem stahování (rate limit shodil build 48);
  primárně `github.com/<repo>/releases/download/<tag>/<asset>`.
* Sandbox: `/tmp` se mezi kroky nepersistuje (používej `/home/user/work/`),
  lokální git stav se může ztratit (fetch + `git reset --mixed origin/mine`).
* Logy uživatele chodí do `arena/01a0aad9-test`, ne do naší větve.

## 9. Otevřené otázky pro uživatele

1. Máš v Ultrahandu nastavený **pevný profil** (ne auto governor)? Během hraní
   se takty měnily mezi 2703/1497/2666 a 1020/307/1331 — pro A/B měření by
   pomohlo, kdyby profil držel konstantní (nebo aspoň ať víme, proč skáče).
2. Chceš zkusit **LSFG** (má DLL)? Není to emulační rychlost, ale z 39 FPS by
   udělal plynulých ~60.
3. Máš zapnuté „Unsafe Settings → Cycle rate/skip"? (Log to hlásí.) Můžeme
   porovnat s defaultem.
