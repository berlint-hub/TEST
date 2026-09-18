# Poznámky k buildu (NetherSX2_nx · nxvk · devkitPro)

> **Jsi nová session? Čti [`HANDOFF.md`](HANDOFF.md) napřed.** Tenhle soubor je
> deník zjištění; HANDOFF je stav, čísla, mrtvý cesty a mechanika sandboxu.
> Rozporuje-li se něco, platí HANDOFF.

Zjištěno a **ověřeno běžením v GitHub Actions**, ne jen čtením README.

## Hlavní výsledek

Aktuální finální `NetherSX2.nro` má **78 716 003 B**: launcher +
emulátorová jádra + oba rendery v romfs (CI build 35, run `35302673001`).
Stáhne se z release tagu `nro-latest`, historicky je má i artifact
`nethersx2-nro-vk-bundle` na stránce runu. Úplně první kompletní
GL-only balík měl 55 586 951 B — viz tabulka níže.

Co to obnáší a co to dělá *jinak* než `build_all.sh`:

| | `build_all.sh` | `ci/build-switch.sh` |
|---|---|---|
| jádra | chce je nachystané v `CORES_DIR`, jinak abort | stáhne `NetherSX2-v2.2n-4248.apk` / `-3668.apk` z release `Trixarian/NetherSX2-{patch,classic}@2.2n`, vybalí `lib/arm64-v8a/libemucore.so` (12 162 984 B) + `assets/` |
| VK | builduje nejdřív VK a abortuje bez `vulkan/lib/libnvk.a` | VK přeskočí, GL jako jedinej render |
| launcher | `make` napřímo | `make` + **vlastní `pkg-config` shim**, viz níže |

**Aktuální stav (2026-09-18):** `NetherSX2_nx_vk.nro` už v balíku **je** —
linkuje se přes nxvk Mesu (NVK) + námi generovaný Vulkan loader
(`ci/gen-vk-loader.py`, 766 forwarderů na `vk_icdGetInstanceProcAddr`).
Finální `.nro` má 78 716 003 B a obsahuje oba rendery, takže „přepni
Renderer na OpenGL" už není podmínka — default `EmuCore/GS/Renderer = 14`
(Vulkan) má co načíst a OpenGL je fallback v Settings.

**Aktuální stav: Vulkan na kartě jede** (build 38). Postupně se opravily tři
věci, každá o jednu úroveň hlouběji:

1. build 35 → `vkEnumeratePhysicalDevices` vrátil `VK_SUCCESS` s nula
   zařízeními; příčina v nxvk (conformant check odmítá Tegru, release build
   bez hlášky) → `NVK_I_WANT_A_BROKEN_VULKAN_DRIVER=1` (build 37),
2. build 37 → `vkCreateAndroidSurfaceKHR failed: (-3)`; náš generovanej loader
   se ptal s NULL instancí, takže WSI funkce „neexistovaly" → loader si
   instanci pamatuje (build 38),
3. build 38 → **hotovo**: `vkCreateInstance`/`vkCreateViSurfaceNN`/
   `vkCreateDevice`/`vkCreateSwapchainKHR`/`vkQueuePresentKHR` všechny
   `result=0`, `nvk wsi: zero-copy ENABLED`, GT3 běží.

Detail a všechna čísla v HANDOFF.md §0 a §3.

## Stav: co ověřeno

| Věc | Důkaz (run) |
|---|---|
| Actions v tomhle repozitáři startují | `35133736085` a dál |
| `devkitpro/devkita64:latest` je použitelná | gcc `15.2.0`, ld `2.45.1`, cmake `3.31.6`, ninja `1.11.1` |
| `libnx` + `switch_rules` + `elf2nro` + `nacptool` vyrobí `.nro` | `Hello.nro` **151 552 B** (`35147289472`) |
| emulator se přeloží a nalinkuje | `NetherSX2_nx.nro` **7 101 315 B** z `f084dc1` (`35147289351`) |
| `libsmb2` + `libusbhsfs` přes `cmake -G Ninja` + `Switch.cmake` | `libsmb2.a` 2 821 428 B |
| **celý bundle** | `NetherSX2.nro` **55 586 951 B** (`35147289521`) |

## Co jsme zjistili o prostředí (ušetří ti to hodiny)

- `$DEVKITPRO` image nastaví, ale **`$DEVKITPRO/bin` v ní vůbec neexistuje** a
  `aarch64-none-elf-pkg-config` taky ne. `make` přesto funguje, protože
  `switch_rules` si toolchain nachází sám. Přímá volání compileru proto chtějí
  `PATH=$DEVKITPRO/devkitA64/bin:$PATH` — v workflow přes `$GITHUB_PATH`.
- launcher `Makefile` volá `$(PREFIX)pkg-config` → bez shimu neprojde.
  `ci/build-switch.sh` proto píše wrapper do `.ciwork/.shims/` (do
  `/opt/devkitpro` se v image psát nedá) a nastavuje
  `PKG_CONFIG_LIBDIR=$PORTLIBS/lib/pkgconfig`; pak zkusí `make` ve třech
  variantách (`default`, `PREFIX=`, `PREFIX=<shim>/aarch64-none-elf-`).
- `switch-mesa`, `switch-libdrm_nouveau`, `switch-curl`, `switch-sdl2{,_ttf,_image}`
  **jsou** v devkitPro repo; `switch-zstd`, `switch-expat`, `switch-turbojpeg`,
  `switch-libjpeg-turbo` **ne** — ale their `.a` soubory v image už jsou, tak
  to není překážka. `libntfs-3g.a` (kvůli `STORAGE_LIBS` launcheru) taky je.
- runnér má v kontejneru **2 CPU**, ne 4 — whole bundle build trvá ~2,5 min.
- raw logy Actions se servírují z
  `productionresultssa*.blob.core.windows.net` a **download artifactů taky** →
  z tohohle prostředí jsou nedostupné (`EOF`). Čitelný je jen REST API, proto
  veškerá diagnostika letí přes `::notice::` / `::error::` anotace
  (`ci/annotate.sh`, `ci/verdict.sh`) a `GET /check-runs/{job}/annotations`.
- YAML kroky runner spouští `bash -e` → jakákoli logika za rourou
  (`cmd | tee log; rc=${PIPESTATUS[0]}`) se při neúspěchu prostě nevykoná a
  log zůstane ležet v `/tmp`. Odstaneno tak, že YAML je tupej a log teče
  `| tee ci-bundle.log || true` přímo do workspace; vyhodnocuje samostatny
  krok `ci/verdict.sh`.

## Build graf

```
Trixarian/NetherSX2-patch   @2.2n -> NetherSX2-v2.2n-4248.apk   -> libemucore.so
Trixarian/NetherSX2-classic @2.2n -> NetherSX2-v2.2n-3668.apk   ->   + assets/
      (AetherSX2-backup/AetherSX2-builds = archív AetherSX2 APK, bez GitHub
       releases — soubory leží přímo ve stromu po alfa(rangech), takže se dá
       sáhnout po konkrétní cestě, ale na Jádra tohle nepotřebujeme)
                                \
                                 v
                NaGaa95/NetherSX2_nx  (make RENDERER=GL)  -> NetherSX2_nx_gl.nro
                    ^                  \-> launcher/romfs/{cores,emu,res}
                    |                    \-> launcher (SDL2)  -> NetherSX2.nro
                devkitPro: devkitA64, libnx, switch-mesa,
                           switch-libdrm_nouveau, switch-{sdl2,curl,zlib}
```

## Co chybí a proč

1. **VK build.** Makefile očekává buď `vulkan/lib` s **23 statickými archivy**
   (`libnvk.a`, `libnak_rs.a`, `libnir.a`, `libcompiler.a`, …), nebo
   `MESA_SDK_ROOT` s jednotným SDK (`-lvulkan -lEGL -lGLESv2 -lglapi
   -lmesa_util* -lblake3 -lxmlconfig`). `nxvk` v tomhle tvaru nic nevydává —
   **nemá ani jeden release** a `make install` z něj dostane jen
   `libnvk.a` + `libnvk_support.a` (+ `libnvk_gl.a`). Takže VK cesta znamená
   stavět Mesu (`ninja -k0`, `switch/build/cross-zink`) a archivy poskládat.
   Pozor: `libvulkan_nouveau.so` link záměrně spadne, `|| true` je součást
   postupu — archivy se berou i tak.
2. **Hotovo: finální `NetherSX2.nro`.** `build_all.sh` sice abortuje bez jader,
   ale `ci/build-switch.sh` si obě APK vyžádá z release a vybere z nich
   `lib/arm64-v8a/libemucore.so` + `assets/` sám. Launcher (SDL2 + turbojpeg +
   ntfs-3g) se taky postaví, díky `pkg-config` shimu.
3. **Switch `pkg-config`.** Launcherovský Makefile volá `$(PREFIX)pkg-config`;
   `aarch64-none-elf-pkg-config` v image **není** (annotace to hlásí),
   takže launcher build si bude stěžovat na `switch-pkg-config` / `pkgconf`.

## Chytáky, na kterých to může spadnout

- `TARGET := $(notdir $(CURDIR))` — adresář **musí** být `NetherSX2_nx`, jinak
  je output `TEST.nro` a `build_all.sh` ho nenajde. V CI se klonuje do
  `NetherSX2_nx/` právě proto.
- image nastaví `DEVKITPRO`, ale **ne** `devkitA64/bin` na `PATH` (nelogin
  shell) — přímé volání `aarch64-none-elf-gcc` selže `command not found`,
  i když `make` funguje. Workflow to řeší přes `$GITHUB_PATH`.
- `libusbhsfs` se kontroluje `git rev-parse HEAD` proti pinu
  `625269b7…` a musí na něj projít 3 patche → CI potřebuje venkovní síť.
- GL a VK se **nedají linknout spolu** (switch-mesa i NVK archivy obsahují
  vlastní kopie mesa util/nir/compiler), proto `make clean` mezi `RENDERER=`.
- `switch-zstd`, `switch-expat`, `switch-turbojpeg` **nejsou** v pacman repo
  pod tímihle jmény — archivy ale v image jsou, takže to není překáža.

## Limity přístupu

Build běží pod `arena-ai-coding-agent[bot]` (GitHub App), ne pod tvým účtem:

- ✅ `contents: write` → push, workflow, artifacty
- ❌ `403` na `actions/permissions`, `actions/secrets`, `PATCH /repos/{repo}`
- ✅ release z workflow chodzi (run `35204967112`, tag `nro-20260917-092635`).
  Skutečnou příčinou dřívějšího selhání ale *nebyla* jen read-only oprávnění:
  `release` job nemá `actions/checkout`, takže `gh release create` nevěděl, do
  jakýho repa má jít. Bez `-R "$GITHUB_REPOSITORY"` to vypadá jako 403 perms a
  svede opravu na vedlejší kolej — proto job teď vylivá i stderr z `gh` do
  `::error::`. Workflow permissions přesto musí být *Read and write*
  (Settings → Actions → General), bez toho `gh release create` na privátním
  repu fakt nesmí zapsat.
- ❌ `workflow_dispatch` přes API z tohohole přístupu jde občas 403
  „Resource not accessible by integration" — proto `mesa-vk.yml` reaguje i na
  `push` na `arena/**` a spouští se samo. Na `main` záměrně ne: každej build
  je ~15 minut runner minut z měsíční kvóty privátního repa.
- ⚠️ `secrets.*` v workflowch fungují, ale **nastavit je můžu jen ručně**, ne
  z tohohle přístupu.

## Licence (má důsledky)

`nxvk` je GPL-2.0-or-later na svých souborech a README explicitně říká, že
statickým linkem `libnvk.a` vzniká combined work — binary smíš šířit, ale
source musí být příjemci k dispozici. `NetherSX2_nx` je MIT, vendored
`third_party/lsfg-vk` je GPL-3.0-or-later. Emulátor core ani BIOS se
nedistribuuje.

## Tři pasti Actions, který nám žeru čas (nejsou chyby upstreamu)

1. **Strop anotací.** GitHub jich zobrazí ~30 na job a zbytek zahodí *bez
   chyby*. Průlet stage po stage annotacemi proto přišel právě o text linkerový
   chyby. Řešení: `note()` se píše jen do logu, `key()` jen do
   `ci-bundle-digest.txt` a `ci/annotate.sh` umí režim `notice+`/`error+`, který
   z celého bloku udělá **jednu** anotaci (řádky spojený přes `%0A`).
2. **Runner spouští `run:` jako `bash -e`.** I když skript volá vlastní
   `exit 0`, jedno selhání uvnitř `n=$(find …)` (neexistující adresář) ukončí
   krok dřív. Kde si hrajeme s volitelnýma věcma, MUSÍ být `set +e`.
3. **`gh` CLI v `devkitpro/devkita64` není.** Jakákoli logika kolem Actions API
   musí běžet na host runneru (job `sdk-src`), ne uvnitř containeru; jinak
   tichounce vrátí prázdno. Přes `actions/download-artifact@v4` s `run-id:` se
   artifact cizího runu stáhne i bez `gh`.

## Vulkan renderer: kde jsme

- `mesa-vk.yml`: `sdk-src` (najde poslední run s `mesa-sdk`) → `mesa`
  (Docker, ~14 min, jen na explicitní dispatch) → `bundle` (devkitA64, ~4 min
  s reuse SDK). Mesa SDK artifact má 12 MB, rozbalenej 59 MB, 23 archivů.
- `libvulkan.a` se **nesmí** rozbíjet na hosti: `ar -M` na ubuntu-latest selže
  bez hlášky. Slije se `aarch64-none-elf-ar -M` uvnitř `nxvk-ci` imageu a
  do artifactu se zkopíruje hotový. Pozor: `create` v MRI skriptu archiv
  *přepíše*, takže rozšiřování o portlibs (`libdrm_nouveau.a`, `libexpat.a`,
  `libelf.a`, `libzstd.a`, `libz.a`) musí jako člena `addlib` přidat i ten
  originál z artifactu.
- Flat `vulkan/lib` cesta v Makefileu je **mrtvá napořád**: neobsahuje
  `-lEGL`, takže `eglGetError`/`eglGetConfigAttrib` nemůžou nikdy projít.
  jediná smysluplná cesta je `MESA_SDK_ROOT` + `-lvulkan`.
- VK link potřeboval doplnit i věci, který cross-build Mesy bez Vulkan
  *loaderu* generuje jen v loaderu: `vkEnumerateInstanceVersion` a
  `vkEnumerateInstanceLayerProperties` (dodáváme je slabě jako
  `source/hooks/ci_vk_loader_shim.c`, stejný trik jako pro `writev`, který
  picolibc na Switchu taky nemá) — a hlavně **všechna public `vk*` jména**,
  který nxvk neexportuje vůbec; ty dělá `ci/gen-vk-loader.py`.
- Kterou funkci se vyplatí *neskipnout*: `vkEnumerateInstanceExtensionProperties`
  jsme měli stubem s nulou položek a GS na hardwaru pak spadlo na
  „Missing required extension VK_KHR_surface“ — upstream si přes ni nechává
  vypsat seznam extenzí, co smí vůbec povolit. Detail v HANDOFF.md §3.
- **Loader si musí pamatovat instanci.** `vk_icdGetInstanceProcAddr` s NULL
  instancí vydá jen pět pre-instance entrypointů; mesa runtime má
  `if (instance == NULL) return NULL;` ve `vk_instance_get_proc_addr()`.
  Každý náš forwarder, který se ptal `(VkInstance)0`, tedy na WSI/device
  funkci vrátil fallback `VK_ERROR_INITIALIZATION_FAILED` (-3) — build 37 na
  kartě: `(CreateVulkanSurface) vkCreateAndroidSurfaceKHR failed: (-3)`,
  protože shim volá `vkCreateViSurfaceNN` přes forwarder. `ci/gen-vk-loader.py`
  proto od buildu 38 instanci z `vkCreateInstance` ukládá a používá ji
  v `nsx_sym()` i ve `vkGetDeviceProcAddr` (ten dřív vracel NULL na všechno).
- **Diagnostika portu se zapíná make proměnnou.** `make NETHERSX2_VK_DIAGNOSTIC=1`
  (Makefile má na to vlastní `ifneq`). Náš dřívější patch Makefile měl pojistku
  na string, který je v Makefile i bez zásahu → tiše nic nepřidal a buildy
  35/37 jely bez diagnostiky, proto se `nethersx2-vulkan.log` neobjevil.
- **Conformant check v NVK.** `nvk_is_conformant()`
  (`src/nouveau/vulkan/nvk_physical_device.c:91`) vrací false pro cokoli jinýho
  než `NV_DEVICE_TYPE_DIS` a Switch se hlásí jako `NV_DEVICE_TYPE_SOC`.
  `nvk_physical_device_create()` pak vrátí `VK_ERROR_INCOMPATIBLE_DRIVER` —
  jenže `--buildtype release` (NDEBUG) to udělá **bez hlášky**.
  `enumerate_physical_devices_locked()` ten kód spolkne jako „nesedí drver,
  zkus DRM větev", `drmGetDevices2()` na Switchi nic nenajde → `VK_SUCCESS`
  a prázdný seznam. Core to hlásí jako `(EnumerateGPUs)
  vkEnumeratePhysicalDevices (1) failed:  (0: VK_SUCCESS)`. Vlastní appky nxvk
  si v `main()` volaj `setenv("NVK_I_WANT_A_BROKEN_VULKAN_DRIVER", "1", 1)`
  (`switch/README.md`, `switch/smoke/nvk_harness.h:138`); port to zapomněl,
  takže to od buildu 37 dodělává `build-switch.sh` (krok 7a).
- Detektor VK v balíku už se nedělá z velikosti: stage 10 v `ci/build-switch.sh`
  grepne RomFS tabulku jmen přímo v `out/NetherSX2.nro` a hlásí
  `uvnitř .nro: NetherSX2_nx_vk.nro`, respektive `V .nRO CHYBÍ …`.

## Build 41 — FPS měřidlo i pro GL (2026-09-18)

`ci/build-switch.sh` (krok 7b2) vkládá do `source/hooks/egl.c` do
`eglSwapBuffersHook` stejné 1s okno jako má VK větev, jen s prefixem `[GL]`:

```
[GL] FPS 60.4 | 16.56 ms/frame | min 16.77 max 16.95 ms | 61 framu
```

Čas se čte z `mrs cntpct_el0/cntfrq_el0` (žádná hlavička ani knihovna navíc;
`lsfg_monotonic_ns()` je jen ve VK větvi). Blok je zamčený na
`#if GS_RENDERER == 12`, takže je **jen v GL `.nro`** — ověřeno CI greppem
markeru `[GL] FPS` (build 41 ho v `NetherSX2_nx_gl.nro` našel, velikost
zůstala 7 105 411 B, protože segmenty se zarovnávají na stránky).
VK část buildu 41 je shodná s buildem 40.

## Build 42 — diagnostika volby rendereru (2026-09-18)

Podnět z karty: uživatel tvrdil, že v předchozím buildu pustil Vulkan → GL →
GL Zink, ale log měl u všech tří běhů GL. Log nelhal: `launcher-diag.log`
i `nethersx2-core.log` (3× `EGL Version: 1.4`, `Created an OpenGL ES context`,
0× `[VK]`) shodně ukazují, že launcher 3× zkopíroval `NetherSX2_nx_gl.nro`.
Dvě ze tří voleb (12 NVC0, 13 Zink) přitom **mají** GL `.nro` použít — do
VK binárky vede jen volba 14. Co v logu chybělo, bylo *rozhodnutí*:

* `ci_launch_diag.cpp` dostal 6 nových parametrů a píše
  `[renderer-decision]` řádek s efektivní hodnotou `EmuCore/GS/Renderer`,
  hodnotou z globálního store, zvoleným `nro` a `Wrapper/GLDriver`, plus
  cestu k profilu hry (rozloženou stejně jako upstream: klíč → pathKey →
  legacyKey) a jestli existuje.
* `ci_core_log.c` má `ci_renderer_banner()` (volaný z `main.c` po `setenv`),
  takže každý core log začíná větou, které `.nro` to je — dosud se to
  odhadovalo z absence `[VK]` řádků.
* Stage 10 navíc greppem ověřuje marker `renderer-decision` v balíku.

## Build 43 — VK-only balík, LTO jako upstream, cache v loaderu (2026-09-18)

**1) OpenGL vyřazen z hlavního buildu.** `VK_ONLY: 1` v `mesa-vk.yml`
(viz `ci/build-switch.sh`, krok 7b2 se v tom režimu přeskočí a launcher patch
dostane dvě extra úpravy). Balík z 78 724 195 B spadl na **71 581 831 B**
a každý run ušetří ~4 minuty runneru. V nastavení launcheru zůstala jediná
volba `Vulkan (NVK)`, takže volba „OpenGL" nemůže poslat launcher po
neexistujícím `NetherSX2_nx_gl.nro`. Zpět = `VK_ONLY: 0`.

**2) Renderer je zamčený na vk i pro staré profily.** `renderer="vk"`,
`EmuCore/GS/Renderer` se přepíše na `"14"`. Důvod je v datech z karty
(upload 18. 9.): `launcher-diag.log` měl
`[renderer-decision] EmuCore/GS/Renderer=12 (global=14) -> nro=gl` —
uživatel tedy v globálním nastavení Vulkan měl, ale **profil hry** měl
`"12"`, a ten se čte přednostně. Všechny tři session proto jely GL.

**3) LTO zapnuto.** Upstream `build_all.sh` volá `make -j RENDERER=VK` bez
`LTOFLAGS`, takže jeho `.nro` má `-flto=auto -fuse-linker-plugin`
(`Makefile` default). My jsme LTO vypínali s odůvodněním „archivy jsou LTO IR
z jinýho gcc" — to byl omyl: meson archivy jsou **thin** (drží jen cesty do
build stromu) a „error op…" lezlo z toho. Po přebalení na plný archivy
(build-mesa-sdk.sh) LTO projde; build 43 hlásí `vk: LTO=ano` a VK `.nro` je
23 088 003 B (build 42: 23 124 867 B).

**4) Loader cachuje entry pointy.** `ci/gen-vk-loader.py` generoval forwardery,
které při KAŽDÉM volání dělaly `vk_icdGetInstanceProcAddr(instance, "vk…")`
(porovnávání jmen v mesa runtime). Upstream tenhle problém nemá: core si
pointery vytáhne jednou přes `vk_gipa_hook` (import tabulka v `source/imports.c`
má jen **6** vk jmen) a pak volá napřímo. Forwardery teď mají
`static nsx_pf_X nsx_cached_X` — úspěšný lookup se uloží, neúspěšný se
zkouší dál (aby se funkce volaná před vznikem instance nezafikovala).
Hostovský test s fake ICD: 10 000 volání `vkCmdDrawIndexed` = **1** lookup
(dřív 10 000), chybějící symbol se necachuje. `libnsxvkloader.a`
806 750 B (dřív 554 390 B).

**5) Kontrola `NaGaa95/NetherSX2_nx` („jeho VK jede líp").** Prošel jsem
commity, tagy, release notes, `Makefile`, `build_all.sh`, `configure-mesa.sh`,
`imports.c`, `launcher/source/main.cpp`, `.gitignore`, `source/switch/*`:
* `f084dc1` = tag `1.3.0` = HEAD; po něm žádný commit. Release notes 1.3.0:
  ikona, NTFS USB, „Updated to Mesa 26.2.2 Horizon SDK" — žádná práce na výkonu.
* `/vulkan/` je v `.gitignore`, takže autorův driver/SDK v repu **není** a jeho
  `.nro` se z repa nedá reprodukovat (jeho release má 99 073 123 B = oba
  renderery + oba cores).
* Jediné build-flag rozdíly, které šly najít: **LTO** (bod 3, vyřešeno)
  a **loader** (bod 4, vyřešeno). Zdrojáky i nxvk jsou identické.
* Uživatelovo „jeho VK je lepší" se dosud srovnávalo s NAŠÍM GL (viz bod 2) —
  naše VK ještě na kartě nezměřené nebylo.

---

## Build 46 — výkon GT3: žádný SD zápis na frame, držený boost, takty v logu

Uživatel: **Fallout Brotherhood of Steel jede 59,9 FPS, GT3 stojí na 31,6 FPS**
a „snížení EE na 50 % nic nezmění". Z logu z karty (`e8c6bb2`) vypadly dvě
konkrétní brzdy, které šly odstranit bez zásahu do emulace:

**1) Log zapisoval na SD kartu při každém framu.** GT3 volá `Timezone=` /
`SummerTime=` per frame — v jedné session **7 309** řádků. `ci_core_log.c` teď
píše přes `ci_emit`: opakující se řádky slije (`... predchozi radka se
opakovala Nx`) a stdout má **64 KiB buffer** (`_IOFBF`), takže se na kartu
nezapisuje po řádcích. Vypínatelné markerem `ci-rawlog.enabled`.

**2) Port sám shazoval CPU boost po 60 framech** (≈2 s, `source/main.c` ~2053).
Tehdy jsme ho drželi (`NSX_KEEP_BOOST`) — *(historické; v buildu 51 je boost
úplně zrušený, viz níž)*.
FPS řádka hlásí `boost=0/1`, takže je to z logu vidět.

**3) FPS řádka má takty** — `clkrst` session API (`NSX_CLK_API`, v CI se
zjišťuje compile probem, aby špatný odhad neshodil build):
`FPS 31.6 | 31.65 ms/frame | min … max … ms | N framu | lsfg=0 boost=1 |
cpu=1785 gpu=768 emc=1600 MHz`.

**4) Rozložení threadů na jádra do logu** (jen diagnostika, `pthr.c`):
`[CI] cores: mask=… -> hot=… ee=… work=… bg=…` + řádek za každý emulační
thread. Odpovídá na dotaz „4 jádra: EE, 2× VU, GS?" — viz HANDOFF §10.

**Build 45 selhal** (a není škoda): v generátoru patchů chybělo zdvojení
`\n`, takže se do `vk.c` dostalo doslovné `\n` a `make` spadl na
`stray '\' in program`. Přidána lex kontrola hned za patchem `vk.c`, která
tuhle třídu chyb zastaví za sekundu.

---

## Build 47 — oprava „GPU na minimu" + čtení/zápis taktů

Uživatel z karty: „**locknul jsi mi GPU takty na minimu** a CPU někdy kleslo
na 1000 MHz, a nebylo to teplotou." Měl pravdu a byla to naše chyba:

`ApmCpuBoostMode_FastLoad` (to, co port žádá na startu) podle libnx znamená
*„Boost CPU. **Additionally, throttle GPU to minimum**."* — tedy CPU 1785 MHz
a **GPU 76 MHz**. Build 46 ten boost držel celou hru, takže GPU bylo opravdu
sražené; sedí to i na čísla (GT3 medián 29,1 FPS proti 31,6 bez držení).

Co je v buildu 47:

1. **Držení boostu je opt-in** (`ci-keepboost.enabled`); default = upstream
   (boost se po 60 framech shodí, GPU zůstane normální). *(Historické —
   build 51 zrušil i tohle: boost se nevolá vůbec.)*
2. **NSX_CLK** (`ci/patches/ci_core_log.c`): čtení taktů CPU/GPU/EMC
   s Result kódy v logu (proč build 46 vracel nuly), fallback na starší
   službu `pcv`, a `[CI] apm:` řádek s režimem/konfigurací (0x92220009/0A
   = FastLoad = CPU nahoru + GPU na minimum).
3. **`ci-clk.conf`** na SD: `cpu=1785 gpu=460 emc=1600` (MHz) — aplikuje se
   jednou na startu, loguje před/po + Result. *(Historické: `ci-keepboost`
   v buildu 51 zrušen.)*
4. **Dedup logu zvládá střídavé vzory.** GT3 střídá `Timezone=`/`SummerTime=`,
   takže se nikdy neopakuje bezprostředně po sobě — tabulka 8 posledních
   vzorů to řeší (120 řádků/s → 1–2 souhrny/s). FPS řádky dedup míjejí.

Navíc: patchery `ci_core_log.c` a `vk.c` už nejsou heredocy v
`build-switch.sh`, ale soubory v `ci/patches/` — v Python řetězcích se
pletla zpětná lomítka a build 45 kvůli tomu spadl (`stray '\' in program`).

---

## Build 48 — CPU boost je pryč (ať si takty řídí governor)

Uživatel: *„Dej ten clock boost pryč, shazuje mi to systém, a navíc používám
Ultrahand, co má svůj governor na takty, který mám nastaven na max."*

Přesně proto: port volal `appletSetCpuBoostMode(FastLoad)` a `FastLoad` podle
libnx znamená „Boost CPU. **Additionally, throttle GPU to minimum**" — CPU
1785 MHz a GPU 76 MHz. Dva pány na takty (emulátor a governor) se perou;
uživateli to shazovalo systém.

Co je v buildu 48:

1. **`ci/patches/util_no_boost.py`** vyprázdnil `cpu_boost()` v `source/util.c`
   — je to **jediné** místo v celém portu, kde se takty nastavují (ověřeno
   i GitHub code searchem: `CpuBoostMode` je jen v `util.c`). Tím zmizely
   všechny `appletSetCpuBoostMode` volání: žádný boost na startu, žádné
   shazování po 60 framech.
2. **Žádné markery keep-boost už nejsou** (`ci-keepboost.enabled`,
   `ci-noboost.enabled` i celý `NSX_KEEP_BOOST` blok v log modulu jsou pryč).
3. **FPS řádka** už nenese `boost=`: `FPS 31.6 | 31.65 ms/frame | min … max …
   ms | N framu | lsfg=0 | cpu=1785 gpu=460 emc=1600 MHz` — takty jsou jen
   ke čtení, takže je vidět, co reálně drží systém.
4. **Zápis taktů** zůstává jen jako opt-in přes `ci-clk.conf` a v dokumentaci
   je výslovně řečeno, že s governorem (Ultrahand/sys-clk) se používat nemá.

**Build 48 poprvé spadl ve stage 4** (stahování jader): `api.github.com`
vrátilo odpověď bez assetů a `fetch_core` na tom `die()`. Kód ani release
v pořádku nebyly — stažení teď jde primárně přes kanonickou URL
`github.com/<repo>/releases/download/<tag>/<asset>` (CDN, bez API),
s `--retry 3 --retry-all-errors` a API jen jako fallback (s výpisem těla
odpovědi, když selže i to).

---

## Log z karty (build 49) — co ukázal a co z toho plyne

Uživatel poslal `nethersx2-core.log` z buildu 49 (4 sessions, GT3 + Fallout).
Analyzátor `ci/analyze-core-log.py` z něj vytáhl:

* **Takty se konečně čtou správně** (`clkrst init=0x0 open cpu=0x0 gpu=0x0
  emc=0x0 pcv=-1`) — oprava `PcvModuleId` z buildu 47 zabrala.
* **GT3 při Ultrahand governoru na max (cpu=2703 gpu=1497 emc=2666): medián
  38,7 FPS.** Když governor spadne na 1020/307/1331: **16,9 FPS.**
* **Přímý důkaz dřívější stížnosti**: při drženém `FastLoad` boostu bylo v logu
  `gpu=76` (GPU na minimu) — proto tehdy FPS spadlo.
* **GT3 je CPU-bound**: se stejným CPU (2703) dal GPU takt 1497 oproti 307
  jen **+1 %** FPS (34,2 vs 33,8). Optimalizovat GS/Vulkan nemá cenu.
* Stutter zůstává: nejdelší frame 580 ms, medián 27 ms.
* LSFG je vypnuté (`lsfg=0`, `lsfg_capable=0`).
* Dedup logu: v jedné session potlačeno **11 493** řádků → log 96 KB místo
  630 KB; `ci-rawlog.enabled` ho vypne.
* `stderr` přesměrovat na jeho konzoli nelze (`SELHAL (errno=5)`) — Mesa
  chyby se ztrácejí, naše diagnostika proto chodí na stdout.

Z toho plyne plán pro novou session: **`VU-GS-OPTIMALIZACE.md`** — VU1 +
synchronizace threadů, MTGS/VU1 na vlastní jádra.

---

## Build 52 — pád systému při přehazování her (GT3 ↔ Fallout)

Uživatel před buildem varoval: *„poslední build shazuje Horizon OS /
Atmosphere — zapnu GT3 a pak chci Fallout a hodí mi to error, že musím
vypnout Switch."* Následuje, co se dalo z logů v repu vyčíst a co build 52
dělá. **Výkonové chování je beze změny** — žádná z věcí níž nesahá na thready,
takty ani renderer za běhu.

### Co ukázaly nahrané logy (`nethersx2-core.log`, `launcher-diag.log`)

Čtyři starty her za ~17 minut (ts 1789731395 → 1789732414):
GT3 → Fallout → Fallout → GT3, každý s vlastní emulační session.

| session | hra | stopa v logu |
|---|---|---|
| 1 | GT3 | dlouhá, zdravá (FPS řádky, poslední 50,2 FPS na 2703/1497/2666) |
| 2 | Fallout | boot do `(AAudioMod) Starting stream...` + `Opening PAD` → **konec, nula FPS řádků** |
| 3 | Fallout | totéž |
| 4 | GT3 | totéž (přitom GT3 v session 1 běželo!) |

Interpretace: FPS řádky (i všechny `[VK]`/`[CI]` řádky) se flushují hned,
takže jejich absence znamená, že **žádný frame nebyl prezentován**. Fallout
i druhé GT3 tedy umřely během/záhy po startu VM — a GT3, které před chvílí
běželo, umřelo taky. To nedělá chyba jedné hry; sedí **degradace stavu
systému napříč procesy** (neco se po exitu starého procesu necistí: audout
stream, vi layer, nvdrv channel, clkrst session) nebo **pád sysmodulu**
(Atmosphere fatal == „vypni konzoli"). Konečný rozsudek bez Atmosphere crash
reportu vypadnout nemůže — ten pojmenuje modul a Result kód.

Log navíc diagnostiku aktivně ztěžoval:

* 64 KiB plně bufferovaný stdout = při tvrdém pádu zmizí celý konec logu
  (přesně proto session končí „vzduchem" za posledním flushnutým řádkem),
* starý proces flushuje zbytek bufferu až **po** startu nového → na hraně
  session je zápis prokládaný a roztrhaný (v logu vidět: řádek
  „…vzor se opakoval 32x" se slepil s bannerem další session).

### Co build 52 mění (vše jen v `ci/`)

1. `ci/patches/ci_core_log.c`:
   * `[CI] session start build=52 ts=<unix> pid=<pid>` hned po otevření logu,
     flush + fsync (začátek session přežije cokoli); `build=` se ručně zvedá
     s každým buildem (NSX_CI_BUILD) — na kartě tak poznáš konkrétní binárku.
   * `atexit` handler → `[CI] session end (korektni exit)` + fsync. **Chybí-li
     na konci session, proces umřel tvrdě** (segv/abort/fatal systému).
     Takhle se z logu pozná, jestli padá emulátor sám, nebo systém kolem.
   * `ci-rawlog.enabled` navíc přepne stdout i stderr na **nebufferovaný**
     zápis (`_IONBF`) — každý řádek hned na SD. Pomalé (per-line I/O), jen
     pro pátrání po pádu.
   * marker `ci-noclk.enabled`: clkrst sessions ani pcv se vůbec neotevřou
     (i čtení taktů vypne; FPS řádka bude mít nuly). Test kolize s governorem.
2. `ci/patches/pthr_diag.py` (nový soubor, dřív heredoc v build-switch.sh):
   * stávající NSX_CORE_DIAG (rozložení threadů) + **marker
     `ci-nopin.enabled`**: vypne všechna `svcSetThreadCoreMask`; thready
     dědí masku procesu. Audio thread tak nesedne na core 3 (jádro, kde
     žijou sysmoduly). Test bez rebuildu.
3. `.github/workflows/mesa-vk.yml`: jen aktivační komentář (spolehlivý
   trigger je push sahající na tento soubor, viz §5).

### Jak teď testovat (bez dalšího buildu)

1. Stáhnout `nro-latest` (= build 52), nahrát místo starého `.nro`.
2. Ověřit v logu `[CI] session start build=52 …`.
3. Přehazovat hry jako dřív. Když padne:
   * podívat se do `nethersx2-core.log`, jestli poslední session má
     `[CI] session end` (korektní exit) nebo se usekla (tvrdý pád),
   **zkontrolovat `sd:/atmosphere/crash_reports/` a
   `sd:/atmosphere/fatal_errors/`** a poslat nejnovější soubor,
   * případně přidat `ci-rawlog.enabled` (kompletní log i přes pád, za cenu
     FPS) a / nebo `ci-nopin.enabled` / `ci-noclk.enabled` a zkoušet znovu —
     podle toho, který marker pád zastaví, je známý viník.
