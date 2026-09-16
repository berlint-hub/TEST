# Poznámky k buildu (NetherSX2_nx · nxvk · devkitPro)

Zjištěno a **ověřeno běžením v GitHub Actions**, ne jen čtením README.

## Stav: co už funguje

| Věc | Důkaz |
|---|---|
| Actions v tomhle repozitáři startují | runy `35133736085`, `35142624639`, `35142624623` |
| `devkitpro/devkita64:latest` image se natáhne a je použitelná | gcc `15.2.0`, ld `2.45.1`, cmake `3.31.6`, ninja `1.11.1` |
| `libnx` + `switch_rules` + `elf2nro` + `nacptool` vyrobí `.nro` | `probe/hello` → `Hello.nro` **151 552 B** |
| `NetherSX2_nx` se reálně překladí a nalinkuje | upstream `f084dc1` → `NetherSX2_nx.nro` **7 101 315 B** (`make RENDERER=GL`) |
| `launcher/dependencies` (libsmb2 + libusbhsfs) se sestaví | `libsmb2.a` 2 819 092 B, `libusbhsfs.a` 1 562 258 B |

Artifact: **`nethersx2-nx-gl`** (obsahuje `.nro` + logy) — stahuje se z stránky runu.

## Build graf

```
devkitPro (toolchain)                PalindromicBreadLoaf/nxvk
  devkitA64, libnx, portlibs           Mesa fork, větev switch, Mesa 26.2.2
  switch-mesa, switch-libdrm_nouveau   make image -> docker
        |                              make       -> libnvk.a, libnvk_support.a
        |                              make gl    -> libnvk_gl.a  (+ .pc soubory)
        v                                    |
   NaGaa95/NetherSX2_nx  <-------------------+
     make RENDERER=GL   -> hotovo (portlibs stačí)
     make RENDERER=VK   -> potřebuje vulkan/{include,lib} nebo MESA_SDK_ROOT
     ./build_all.sh     -> NAVÍC potřebuje libemucore.so z APK 4248 + 3668
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
2. **Finální `NetherSX2.nro` (launcher s bundleem).** `build_all.sh` tvrdě
   abortuje bez `CORES_DIR/NetherSX2-v2.2n-4248/lib/arm64-v8a/libemucore.so`,
   `…-3668/…/libemucore.so` a `GameIndex.yaml`; ty se v upstreamu nedistribuu-
 `switch-sdl2{,_ttf,_image}` + `turbojpeg`.
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

## Jak to sledovat (proč annotace, ne logy)

Raw logy Actions se servírují z `productionresultssa*.blob.core.windows.net`,
které z build environmentu nedostupné. Kde je to potřeba, workflow tudíž
posílá zjištění jako workflow commands (`::notice::`, `::error::` — viz
`ci/annotate.sh`) a ty se čtou přes `GET /repos/{repo}/check-runs/{job_id}/annotations`.

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
