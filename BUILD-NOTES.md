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

Build 35 na kartě došel k `vkEnumeratePhysicalDevices` a dostal **VK_SUCCESS
s nula zařízeními**; příčina je v nxvk (conformant check odmítá Tegru a
release build to dělá bez hlášky) a řeší ji jediná proměnná
`NVK_I_WANT_A_BROKEN_VULKAN_DRIVER=1`, kterou build 37 nastavuje v `main()`.
Detail a všechna čísla v HANDOFF.md §3.

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
