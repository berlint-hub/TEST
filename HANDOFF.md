# HANDOFF — co musí vědět další session

Nečti tohle jako tutorial. Je to seznam rozhodnutí a čísel, která bys jinak
objevoval znovu po 20 minutách drahých runner minut. Stav níže je **ověřený
během**, ne domněnka; kde se pochybuje, je to napsané.

Stav k 2026-09-18 (build 37): **Vulkan na kartě padal na nula fyzických
zařízeních — příčina nalezena a opravena** (chybějící
`NVK_I_WANT_A_BROKEN_VULKAN_DRIVER=1`, viz §3). Teď čeká na test z karty.
Cíl uživatele: reproducible CI, který vyrobí šiřitelné `.nro` s funkčním
Vulkan rendererem (LSFG), plus zpětná vazba z logů na kartě.

## 0. STAV: VULKAN NA KARTĚ FUNGUJE (2026-09-18, build 38)

Uživatel potvrdil „vulkan jede" a `nethersx2-vulkan.log` z karty to dokládá
celé: `vkCreateInstance result=0` → `vkCreateViSurfaceNN result=0` →
`vkCreateDevice result=0` → `vkCreateSwapchainKHR result=0` (3 images,
1280×720) → `vkAcquireNextImageKHR`/`vkQueueSubmit`/`vkQueuePresentKHR`
`result=0` opakovaně. `nethersx2-mesa.log` k tomu říká
`nvk wsi: zero-copy ENABLED` (scanout bez kopie) a
`shader cache: sdmc:/switch/mesa_shader_cache/cache.bin, 182 entries`.
Hra (GT3) běží. GL i VK větev jsou tím ověřené.

Zbývá: LSFG (frame generation) a výkon. Detaily níž.

## 1. Okamžité další kroky

1. **LSFG — uživatel DLL MÁ** (build 40 čeká na test). Postup, který mu byl
   poslán: `Lossless.dll` do `sdmc:/switch/nethersx2/lsfg/Lossless.dll`
   (přesně ten název, `lsfg_dll_path()` v `source/hooks/vk.c:192` i
   `LSFG_DLL_FILE` v launcheru jsou case-sensitive), v launcheru zapnout
   **"LSFG 2x (Vulkan only)"** (`Wrapper/LSFGEnabled`), volitelně
   `Flow resolution` (`Wrapper/LSFGFlowScale`, default 0.25) a
   `Performance mode` (`Wrapper/LSFGPerformance`, default true), spustit
   hru s Vulkanem a frame generation zapnout až **v quick menu (L+R+Plus)**.
   Port záměrně nechává u zdrojů 50/60 FPS normální cestu (aby se emulace
   nepůlila) — LSFG se chytá u 25/30 FPS zdrojů.
   V logu se to pozná podle `lsfg_prepared=1` (`vkCreateInstance`) a
   `lsfg_capable=1 family=<čísl>` (`vkCreateDevice`); pokud tam bude pořád 0,
   znamená to, že se nenašel soubor nebo je vypnutý přepínač.
2. **Výkon — měření je v buildu 40 (VK) a 41 (i GL).** `vk_diag_note` píše
   jednou za sekundu řádku
   `FPS %.1f | %.2f ms/frame | min %.2f max %.2f ms | %u framu | lsfg=%d`
   (patch v `build-switch.sh`, kotva `++vk_present_count;`). Je to **rate
   prezentací** = emulační framerate, s LSFG dvojnásobný; `max` ukáže stutter.
   Od buildu 41 má stejné okno i **GL větev**: patch 7b2 v `build-switch.sh`
   vkládá do `source/hooks/egl.c` (kotva `++egl_swap_count;` v
   `eglSwapBuffersHook`) blok, který píše do core logu
   `[GL] FPS … | %u framu`; čas čte přímo z `mrs cntpct_el0/cntfrq_el0`, protože
   `lsfg_monotonic_ns()` je jen ve VK větvi. Blok je zamčený na
   `#if GS_RENDERER == 12`, takže ve VK `.nro` **není** (marker `[GL] FPS`
   se v `NetherSX2_nx_vk.nro` hledat nemá).
   Uživatel zatím naměřil (na GL): CPU 2700 MHz, GPU 1400 MHz; **GPU na
   150 MHz nezměnilo FPS** → GPU není bottleneck, GT3 je CPU-bound.
   Emulační „speed %" core nikam neloguje (OnPerformanceMetrics v importech
   není), takže CPU/GPU bound se rozliší jedině přes OSD hry.
   Očekávání: NVK už jede optimální cestou (zero-copy WSI, perzistentní
   shader cache 182 položek), takže další zisky jsou hlavně v nastavení
   emulátoru a v taktech (sys-clk), ne v driveru.
3. **Nastavení pro výkon, které se má zkusit:** vypnout
   `GPU Palette Conversion` (core sám hlásí „reduce performance"),
   `Cycle rate/skip` zpět na default (core hlásí „Unsafe Settings"),
   zvážit `Hardware Download Mode`, v OSD zapnout FPS, a **při měření
   smazat `ci-logging.enabled`** (zapíná i EE/IOP console logging, což je
   per-frame formátování stringů).
4. **`[Logging]` marker z karty smazat, až nebude potřeba.** `ci-logging.enabled`
   v `/switch/nethersx2/` zapíná kromě našeho capture i `Logging/EnableEEConsole`
   a `EnableIOPConsole` v jádře, což je podle upstreamu „formats a lot of
   strings per frame" — na výkon to jde. Pro měření FPS tedy marker pryč
   (logy pak nebudou, ale to je při ladění výkonu jedno).
5. **Dočistit integraci:** od buildu 39 se `MESA_SHADER_CACHE_DIR` přesměrovává
   na `/switch/nethersx2/cache`, takže `sdmc:/switch/mesa_shader_cache` už
   nevzniká — starou složku může uživatel smazat.
7. **Volba rendereru se děje v launcheru, ne v `.nro`** (od buildu 42 to
   navíc logujeme). `launcher/source/main.cpp`:
   `renderer = (EmuCore/GS/Renderer=="14") ? "vk" : "gl"` — takže
   **14 → `NetherSX2_nx_vk.nro`, 12 i 13 → `NetherSX2_nx_gl.nro`**. Trojka
   „OpenGL (Zink/NVK)" (13) tedy běží GL binárku a Zink se zapíná uvnitř ní
   (`Wrapper/GLDriver=zink` → `source/main.c` nastaví
   `MESA_LOADER_DRIVER_OVERRIDE=zink`, ale jen pod `#if GS_RENDERER == OGL`;
   v našem GL `.nro` je switch-mesa z devkitPro portlibs, ne nxvk „unified"
   SDK, na které ten komentář míří — zda tam zink opravdu je, není ověřené).
   **Efektivní hodnota = profil hry přebíjí globální**:
   `sdmc:/switch/nethersx2/gamecfg/<klíč hry>.ini` (fallbacky: pathKey,
   legacyKey) má přednost před `sdmc:/switch/NetherSX2.ini`. Proto je klidně
   možné „v nastavení mám Vulkan, a stejně mi jede GL" — a přesně to se
   stalo v logu z 18. 9.: launcher 3× zkopíroval `NetherSX2_nx_gl.nro`
   (i když uživatel tvrdí, že první běh byl Vulkan).
   Build 42 to poprvé rozlišuje: `launcher-diag.log` má řádek
   `renderer      [renderer-decision] EmuCore/GS/Renderer=<efektivní> (global=<globální>) -> nro=<vk|gl>, GLDriver=<…>`
   + `game profil <cesta> = <velikost>/CHYBI`, a core log začíná
   `[CI] emulator nro: VK build (GS_RENDERER=14), NVK_I_WANT_A_BROKEN_VULKAN_DRIVER=1`
   nebo `GL build (GS_RENDERER=12) — Vulkan v tomhle .nro neni`.

6. **Diagnostika portu zrcadlená do core logu:** v buildech 37/38 se psala na
   `stderr`, jenže na kartě se přesměrovanej stderr do souboru **nepropsal**
   (stdout ano — všechny core logy chodí). Od buildu 39 jde mirror na stdout
   a `ci_core_log.c` navíc hlásí `[CI] stderr smerovan core logu: ok/SELHAL`.
   Ověřeno v `.nro` greppem markeru `diag soubor nethersx2-vulkan.log`.

## 2. Čísla a identifikátory, co se špatně dohledávají

| Věc | Hodnota |
|---|---|
| branch session | `arena/01a0b2a1-test` (nikdy nepushovat jinam; stará `arena/01a0aad9-test` už na remote není) |
| poslední pushnutý commit | `3bfc409` (diag: rozhodnutí o rendereru + které .nro běží), před ním `1b9cf7f` (docs), `52e1a88` (FPS i pro GL), `e5b4629`, `181f4ed` |
| rolling release URL | `https://github.com/berlint-hub/TEST/releases/download/nro-latest/NetherSX2.nro` |
| aktuální build | CI build 42, run `35318175938`, `NetherSX2.nro` = **78 724 195 B**, `sha256=87e79e84db10167d…` (41 = `417fc784fa4f1738…`, 40 = `12d60bbdd80448ad…`); CI greppem ověřuje `renderer-decision` v balíku |
| v balíku | `NetherSX2_nx_vk.nro` 23 124 867 B, `NetherSX2_nx_gl.nro` 7 105 411 B — **v buildech 40 i 41 stejné**, liší se jen obsahem (GL měřidlo), což CI ověřuje greppem `[GL] FPS`; pořadí verdiktů je v anotaci jobu `NetherSX2.nro (GL + VK)` (`check-runs/<id>/annotations`) |
| pozor na velikosti | buildy 34–37 maj **identickou** velikost (stránkový zarovnání segmentů) — rozlišuj podle `sha256` (35 = `b3a06739…`, 36 = `f6ea45cb…`, 37 = `c2d6aa7d…`). Build 38 povyrostl na 78 724 195 B, protože se konečně zkompilovala diagnostika |
| generovaný loader | 766 forwarderů, `libnsxvkloader.a` = 554 390 B |
| upstream refáček | `NaGaa95/NetherSX2_nx` @ `f084dc1`; `PalindromicBreadLoaf/nxvk` @ `switch` (`238e06f`) |
| ceny | Mesa od nuly ~25–35 min, bundle ~9 min, reuse SDK ~4 min; kvóta privátního repa ~2000 runner min/měsíc |
| uživatelovo hardware | BIOS `SCPH-90001_BIOS_V18_USA_230.ROM0`, iso `GT3 (Europe, Australia) (En,Fr,De,Es,It) (v2.00)`, volno na kartě 167 601 MB (SD plná tedy NENÍ) |

Artefakty: `nethersx2-nro-vk-bundle` (90 dní), `mesa-sdk` (SDK s `lib/`,
`pkg/`, `include/`).

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
