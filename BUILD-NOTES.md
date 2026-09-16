# Poznámky k buildu (NetherSX2_nx · nxvk · devkitPro)

Zjištěno a **ověřeno běžením v GitHub Actions**, ne jen čtením README.

## Hlavní výsledek

`ci/build-switch.sh` + `.github/workflows/bundle.yml` vyrobí **finální
`NetherSX2.nro` = 55 586 951 B** (53 MB), tj. launcher + obě emulátorová jádra
+ emulator `.nro` v romfs. Stáhni ho z artifactu **`nethersx2-nro-bundle`**
na stránce runu (Actions → build / NetherSX2.nro → Artifacts).

Co to obnáší a co to dělá *jinak* než `build_all.sh`:

| | `build_all.sh` | `ci/build-switch.sh` |
|---|---|---|
| jádra | chce je nachystané v `CORES_DIR`, jinak abort | stáhne `NetherSX2-v2.2n-4248.apk` / `-3668.apk` z release `Trixarian/NetherSX2-{patch,classic}@2.2n`, vybalí `lib/arm64-v8a/libemucore.so` (12 162 984 B) + `assets/` |
| VK | builduje nejdřív VK a abortuje bez `vulkan/lib/libnvk.a` | VK přeskočí, GL jako jedinej render |
| launcher | `make` napřímo | `make` + **vlastní `pkg-config` shim**, viz níže |

**Zásadní omezení tohohle buildu:** chybí `NetherSX2_nx_vk.nro`, a default v
`nethersx2.ini` je `EmuCore/GS/Renderer = 14` (Vulkan). První spuštění tedy
musí v launcheru přepnout **Renderer na OpenGL**, jinak to narazí na
neexistující soubor. Jakmile exists Mesa/NVK SDK (viz níže), doplní se VK
jednoduše — skript na to má místo.

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
- ❌ release z workflow: repozitář má *Workflow permissions = read-only*.
  Zapne se v **Settings → Actions → General → Workflow permissions → Read and
  write permissions**; pak `gh release create` v jobu `publikuj .nro` projde.
- ⚠️ `secrets.*` v workflowch fungují, ale **nastavit je můžu jen ručně**, ne
  z tohohle přístupu.

## Licence (má důsledky)

`nxvk` je GPL-2.0-or-later na svých souborech a README explicitně říká, že
statickým linkem `libnvk.a` vzniká combined work — binary smíš šířit, ale
source musí být příjemci k dispozici. `NetherSX2_nx` je MIT, vendored
`third_party/lsfg-vk` je GPL-3.0-or-later. Emulátor core ani BIOS se
nedistribuuje.
