# Handoff — DLSS-SR add-on pro ReShade

> Tento dokument je pro **druhý AI agent** (Google Antigravity), který na tomto kódu
> pokračuje. Píše ho agent, který to rozpracoval. Cílem je, abys nemusel znovu
> objevovat věci, které už byly zjištěny — a hlavně abys neopakoval chyby, které už
> byly udělány.
>
> **Všechna tvrzení o stavu kódu v tomto dokumentu byla ověřena proti repozitáři.**
> Kde něco ověřeno není, je to výslovně napsáno.

---

## 1. Cíl

Uživatel chce **vlastní** ReShade 6.8.0 add-on (`*.addon64`), který:

1. pohání NVIDIA upscaling (DLSS Super Resolution),
2. bere motion vektory ze shaderu **LumeniteFX** (`lumenite_QuantMotion.fx`,
   textura `tFlow`),
3. takže funguje i v aplikacích, které nemají nativní DLSS.

Testovací hostitel: **PCSX2** (`D:\PCSX2\pcsx2-qt.exe`).
Hardware: **RTX 4080**, ReShade 6.8.0.

**Skutečný cíl uživatele není „používat CUDA/DLSS". Je to FPS.** Konkrétně: chce,
aby RTGI-style screen-space path tracer vypadal použitelně při nízkém počtu paprsků.
Každé rozhodnutí posuzuj podle toho, jestli to přidává snímky za sekundu.

Uživatel je **laik** („ne, nerozumím tomu, jsem laik") a chce přímé verdikty.
Komunikuje česky. Dlouhé tabulky API na něj nefungují — začni ANO/NE, pak krátké
vysvětlení.

---

## 2. Stav k 2026-10-08

Repozituář `berlint-hub/TEST`, větev `arena/96bb4b4c-test`, HEAD **`8c0674c`**.

### Hotové a **ověřené** kompilací pod MSVC

| Soubor | Řádků | Co to je |
|---|---|---|
| `src/lumen_mv.{hpp,cpp}` | 71 / 91 | `rt::LumenMotionVectors` — vytáhne `tFlow` z ReShade efektu |
| `src/ngx_host.{hpp,cpp}` | 102 / 283 | `rt::NgxHost` — DLSS-SR přes čisté NGX C API |

CI run **`37839146424` → `conclusion=success`**, artefakt `reshade_torch`,
**70 480 bajtů**. V build logu je `Building CXX object .../src/ngx_host.cpp.obj`
a finální link `reshade_torch.addon64`.

### Hotové, ale uzavřené (nerozpracovávej, dokud o to uživatel nepožádá)

TorchScript CUDA denoiser: `src/{cuda_runtime,d3d11_interop,shared_interop,torch_engine,addon}.cpp`,
`python/denoiser.py`, `python/train_denoiser.py`. Trénovaný model:
**23.58 → 26.67 dB (+3.09 dB)** na 8000 iteracích, 14 803 parametrů.

### ⚠️ Mrtvý kód — tohle je hlavní otevřený problém

**`NgxHost` ani `LumenMotionVectors` nikdo nevolá.** Ověřeno:

```
grep -rn "NgxHost\|LumenMotionVectors\|lumen_mv\|ngx_host" src/ \
  | grep -v "^src/ngx_host\|^src/lumen_mv"
→ (prázdné)
```

Obě třídy se kompilují a linkují, ale `src/addon.cpp` (454 řádků) je neinstanciuje.
**Add-on v současném stavu nic neupscaluje.** To je přesně ten kus, který zbývá.

### Co **není** ověřeno

- Že to skutečně upscaluje. **V sandboxu není GPU, není Windows, není MSVC.**
  Veškeré ověření je „prošlo to kompilátorem", ne „funguje to".
- Časy na snímkovou dobu (všechny odhady ~10 ms @1080p jsou **vymyšlené**, ne změřené).

---

## 3. Rozhodnutí o architektuře (už učiněná, neotvírej je znovu bez důvodu)

### Proč čisté NGX a ne Streamline

Streamline (`slInit`) **interponuje swapchain a vlastní prezentaci**, a `slInit` musí
proběhnout **před** vytvořením device a swapchainu. ReShade add-on se načítá až po
obojím — nemá šanci to stihnout. Nezávislé potvrzení z `ReShadeFrameGen`:
*„Streamline owns presentation"*, *„Do not try to call slInit a second time from a
late ReShade callback"*.

NGX je jen evaluátor feature nad device + command list, který už vlastníš. Žádný
souboj o prezentaci. **Proto tato cesta.**

### Proč privátní D3D12 device

Hra (PCSX2) může renderovat přes D3D11 nebo Vulkan. NGX potřebuje D3D12.
`NgxHost` si proto vytvoří vlastní `ID3D12Device` a textury hry se do něj musí
přenést přes shared handles. Stejný tvar používá `dlss5-bridge`.

**Důsledek:** musíš vyřešit bridging textur. To je netriviální a je to hlavní
technické riziko zbývající práce.

### Proč SR a ne Ray Reconstruction / DLSS-NR

| Feature | Binárka | Veřejné hlavičky | Jde z ReShade? |
|---|---|---|---|
| **SR** | ✅ `nvngx_dlss.dll` | ✅ `nvsdk_ngx.h` + `sl_dlss.h` | **ANO** |
| FG | ✅ `nvngx_dlssg.dll` | ✅ | ⚠️ chce Reflex + color bez HUD |
| **RR** | ✅ `nvngx_dlssd.dll` | ✅ | **NE** |
| **NR** | ✅ `nvngx_dlssnr.dll` | ❌ **nikde** | vstupy by šly, ale není API |

**RR je slepá ulička a uživatel to ví.** Ne kvůli chybějící DLL — proto, že
`kBufferTypeAlbedo`, `kBufferTypeSpecularAlbedo`, `kBufferTypeRoughness`,
`kBufferTypeSpecularHitDistance` **neexistují ve finálním obraze**. Post-process
je nemá odkud vzít. Uživateli bylo řečeno, že `nvngx_dlssd.dll` (48 MB, který si
tam sám nakopíroval) je mu k ničemu.

**DLSS-NR nemá veřejnou hlavičku nikde** — ani `sl_dlss_nr.h` ve Streamline, ani
nic `*dlssnr*` v `NVIDIA/DLSS`. Víme jen `kFeatureDLSS_NR = 1004`
(`sl_core_types.h:253`) a `"dlss_nr"` → `sl.dlss_nr.dll` (`sl_helpers.h:347`).
Struktury by se musely rekonstruovat z binárky. Odloženo.

---

## 4. Přesná API

### `rt::LumenMotionVectors` (`src/lumen_mv.hpp`)

```cpp
struct Result {
    bool valid = false;
    reshade::api::resource      resource{};
    reshade::api::resource_view view{};
    uint32_t width = 0, height = 0;
    reshade::api::format format = reshade::api::format::unknown;
};

void   configure(std::string effect_name, std::string variable_name);
Result resolve(reshade::api::effect_runtime *runtime, reshade::api::command_list *cmd_list);
const std::string &status() const;
```

Výchozí hodnoty: `"lumenite_QuantMotion.fx"` / `"tFlow"`.

Ověřený řetězec volání (vše z ReShade v6.8.0 hlaviček):

```cpp
auto var = runtime->find_texture_variable(effect.c_str(), variable.c_str());
runtime->get_texture_binding(var, &srv, &srv_srgb);
auto res  = cmd_list->get_device()->get_resource_from_view(srv);   // device, NE command_list!
auto desc = cmd_list->get_device()->get_resource_desc(res);
```

Null-kontrola přes `.handle != 0`. Re-resolve, když se změní ukazatel `runtime`.

### `rt::NgxHost` (`src/ngx_host.hpp`)

```cpp
enum class Quality : int { auto_=0, ultra_quality=1, quality=2, balanced=3,
                           performance=4, ultra_performance=5, dl_aa=6 };

bool init(uint32_t in_w, uint32_t in_h, uint32_t out_w, uint32_t out_h, Quality);
void shutdown();
bool evaluate(ID3D12GraphicsCommandList *cmd_list,
              ID3D12Resource *color_in, ID3D12Resource *color_out,
              ID3D12Resource *depth,    ID3D12Resource *motion_vectors,
              float jitter_x, float jitter_y,
              float mv_scale_x, float mv_scale_y, int reset);

ID3D12Device *device() const;
const Info   &info() const;   // dll_loaded, initialised, feature_created, w/h, status
```

Implementace: `LoadLibraryW(L"nvngx_dlss.dll")` + ruční tabulka `GetProcAddress`.
**Nic se nelinkuje proti NVIDIA binárkám** — add-on musí jít načíst i tam, kde DLL
není, a slušně se ohlásit.

---

## 5. Kritické: ověřovací smyčka

**Nikdy neříkej, že něco funguje, aniž to prošlo CI.** Uživatel to výslovně
požaduje („však použíj muj github actions a zkompiluj to").

```bash
# 1. push spustí CI (viz níž, proč ne workflow_dispatch)
git fetch origin arena/96bb4b4c-test
git rebase origin/arena/96bb4b4c-test      # historie se mezi tahy RESETUJE
git push origin arena/96bb4b4c-test

# 2. výsledek
gh run list --branch arena/96bb4b4c-test --limit 3
gh run view <run> --json conclusion,jobs --jq '.jobs[0].steps[] | "\(.conclusion)  \(.name)"'
gh api repos/berlint-hub/TEST/actions/runs/<run>/artifacts --jq '.artifacts[]|"\(.name) \(.size_in_bytes)"'

# 3. CHYBY KOMPILÁTORU — jediná cesta, jak je přečíst:
git fetch && git rebase origin/arena/96bb4b4c-test && grep -nE "error C[0-9]+|error LNK" build-log.txt
```

### `gh workflow run` **nefunguje** → `403 Resource not accessible by integration`

Nepokoušej se o dispatch API. Místo toho je v `.github/workflows/build.yml` větev
zapsaná přímo v `on: push: branches:` — push ji spustí.

### Logy Actions jsou ze sandboxu **nečitelné**

`gh run view --log`, `--log-failed` i `gh api .../jobs/<id>/logs` vrací 0 bajtů
a `EOF` — přesměrovávají na `blob.core.windows.net` /
`results-receiver.actions.githubusercontent.com`, kam není přístup.
Anotace přes `api.github.com` chyby kompilátoru **neobsahují** (jen obecné
„Process completed with exit code 1").

**Řešení, které je už v workflow:** krok `Build` teeuje výstup do `build-log.txt`
a krok `Publish build log on failure` (`if: failure()`) ho commitne zpět na větev
se `[skip ci]` v message. Proto ten log po neúspěšném runu najdete v repozitáři.
**Nesmaž to.**

### Lokální syntax-check (jen pro kód bez D3D12!)

```bash
g++ -fsyntax-only -std=c++20 -fpermissive -w \
    -include /tmp/rsinc/prefix.h -I/tmp/rsinc -Isrc src/lumen_mv.cpp
```

`-fpermissive` protože ReShade hlavičky mají `format format` / `compare_op compare_op`.
`__declspec(novtable)` musí být zabit na příkazové řádce (`-D'__declspec(x)='`),
protože `Windows.h` se includuje **až po** API hlavičkách.

**Tímto nejde ověřit `ngx_host.cpp`** — potřebuje `d3d12.h`, který na Linuxu není.

---

## 6. Pasti — věci, na kterých už jsem se spálil

1. **`nvsdk_ngx.h` nesahá po Win32 hlavičkách.** Bez `#include <Windows.h>` v
   `ngx_host.hpp` vidí MSVC `HMODULE` jako „unknown override specifier" a rozpadne
   se to kaskádovitě (16 chyb u jednoho členu).
2. **Enum konstanty NGX mají infix `FAIL_`:**
   `NVSDK_NGX_Result_FAIL_InvalidParameter`, `_FAIL_PlatformError`,
   `_FAIL_FeatureNotSupported`, `_FAIL_NotInitialized`, `_FAIL_MissingInput`,
   `_FAIL_OutOfDate`, `_FAIL_OutOfGPUMemory`, `_FAIL_UnsupportedFormat`.
   `NVSDK_NGX_Result_InvalidVersion` **neexistuje vůbec.**
3. **`IID_ID3D12Device` chce `dxguid`** v `target_link_libraries`. Bez toho LNK2019.
4. **Existují dvě rodiny param-maker.** `NVSDK_NGX_Parameter_*` jsou čitelné
   řetězce (`"Jitter.Offset.X"`), `NVSDK_NGX_EParameter_*` jsou kódované
   (`"#\x1e"`). Oficiální inline helpery používají **první** rodinu. Kód v
   `ngx_host.cpp` volá `params->Set(...)` s `NVSDK_NGX_Parameter_*` — drž se toho.
5. **Neexistují `NVSDK_NGX_D3D12_{Create,Evaluate}Feature_DLSS` helpery.**
   Co existuje jsou `NGX_D3D12_CREATE_DLSS_EXT` / `NGX_D3D12_EVALUATE_DLSS_EXT`
   (`nvsdk_ngx_helpers_d3d.h:275` / `:297`), ale ty volají importované
   `NVSDK_NGX_D3D12_CreateFeature` → vyžadovaly by `nvngx_dlss.lib`. Proto se
   parametry plní ručně.
6. **`get_resource_from_view` je na `device`, ne na `command_list`**
   (`reshade_api_device.hpp:396`, uvnitř `struct device` od řádku 327).
7. **ReShade 6.8.0 lookup API pro textury MÁ.** Tvrzení „ReShade nemá texture
   lookup API" bylo **chybné**. `find_texture_variable` / `get_texture_binding`
   existují.
8. **Git historie se mezi tahy resetuje.** Push spadl na non-fast-forward, protože
   lokální HEAD byl o dva commity pozadu. Vždy `git fetch` + `rebase` před pushem.
9. **`gh api search/code` vrací jen cesty k souborům, ne obsah.** „Hit" nedokazuje,
   že symbol je použitelný — vždy stáhni celý soubor.
10. **Přílohy od uživatele nedorazí.** `lumenite_Kernel.md` se dvakrát neobjevil,
    `/home/user/uploads/` vůbec neexistuje. Nestůj na tom — stáhni si zdroj z GitHubu.

---

## 7. Lumenite motion vektory — tvrdá omezení

`lumenite_QuantMotion.fx` (repo `umar-afzaal/LumeniteFX`, licence AGNYA):

- coarse-to-fine pyramida 128→64→32→16→8,
- nejfinálnější výstup **`tFlow` = RG16F při `BUFFER_WIDTH/8` × `BUFFER_HEIGHT/8`**,
- `tConfidence` = R16F, taky 1/8.
- **Plnorozlišený flow neexistuje.**
- Jediná technika: `Lumenite_QuantMotion`.

**Důsledky, se kterými musíš počítat:**

1. MV se musí **8× upsamplovat**, než je DLSS dostane.
2. Konvence flow se musí převést na DLSS-ovou.
3. DLSS **nemá slot pro confidence kanál** — ta informace se zahazuje.
4. `InMVScaleX/Y` musí odpovídat tomu, v jakém prostoru `tFlow` je.

**Uživatel tuhle ztrátu kvality výslovně přijal.** Nevracej se k tomu jako k blokátoru.

`lumenite_Kernel.fx` **není** producent MV — je to sdílený pre-effect
(`FOV 60.0`, `NEAR_PLANE 0.01`, `RES_SCALE = BUFFER_HEIGHT/2160.0` s komentářem
„DO NOT modify", ¼-res fog grid s 5stupňovou redukcí). Nespleť si to.

---

## 8. Co zbývá udělat (konkrétně)

V pořadí podle hodnoty:

1. **Propojit to.** `LumenMotionVectors::resolve()` → shared-handle import do
   D3D12 → `NgxHost::evaluate()`. Bez toho je celý add-on k ničemu.
   Existující mašinerie na shared handles je v `src/shared_interop.cpp` (386 řádků)
   — **prověř, jestli jde znovu použít pro D3D12**, byla psaná pro CUDA interop.
2. **Upsampling MV 8×.** Nejjednodušší je compute shader nebo reuse ReShade efektu.
3. **Zaregistrovat add-on v `src/addon.cpp`** — ReShade callbacks, overlay
   (`reshade_overlay.hpp`) pro status, `ReShade.ini` konfig.
4. **Znovu-rezoluce při změně rozlišení** — `init()` se musí zavolat znovu,
   feature vytvořená pro jiné rozlišení je nepoužitelná.
5. Až to poběží: změřit skutečné FPS. Bez toho nelze tvrdit, že to splnilo cíl.

Neuzavřené z dřívějška (nízká priorita): `cudaDeviceSynchronize` v
`src/d3d11_interop.cpp:234`/`:279` a `src/shared_interop.cpp:351` každým snímkem
vypouští pipeline. `ReaLtraCing.fx` se nepodařilo na GitHubu najít.

---

## 9. Uživatelův inventář DLL (`D:\PCSX2`, vedle `pcsx2-qt.exe`)

```
nvngx_dlss.dll     58 956 400      sl.common.dll        830 592
nvngx_dlssg.dll     7 453 808      sl.dlss.dll          421 504
nvngx_dlssnr.dll  165 840 496      sl.dlss_g.dll        625 792
nvngx_dlssd.dll    48 343 664      sl.dlss_nr.dll       401 024
                                   sl.interposer.dll    651 392
                                   sl.nis.dll         1 155 200
                                   sl.pcl.dll           360 064
                                   sl.reflex.dll        382 080
```
Datum 27. 08. 2026, plus `nis/nvngx_dlss/reflex.license.txt`.
Dále `Reshade/`, `streamline/`, `layer-x64/`, `D3D12/`, `dxcompiler.dll`,
`shaderc_shared.dll`, `ReShade.ini`, `ReShadePreset.ini`, `ReShade.log`.

**Rozložení je správné — nic se nemá přesouvat.** `nvngx_dlssnr.dll` (165 MB) a
`nvngx_dlssd.dll` (48 MB) jsou uživateli k ničemu, viz §3.

---

## 10. Build

`CMakeLists.txt` — `add_library(reshade_torch SHARED ...)` obsahuje 9 souborů:
`addon, config, log, cuda_runtime, d3d11_interop, shared_interop, torch_engine,
lumen_mv, ngx_host`.

Odkazuje `d3d12` a `dxguid`. Options: `RESHADE_DIR`, `TORCH_DIR`,
`CUDA_RUNTIME_INCLUDE_DIR`, `VULKAN_HEADERS_DIR`, `NGX_HEADERS_DIR`.
Na řádku 85 je `FATAL_ERROR` gate, pokud `nvsdk_ngx.h` není nalezen; obdobně pro
torch bez `torch_cuda.dll`.

CI (`.github/workflows/build.yml`, 11 kroků): checkout → setup-python →
install CUDA torch (cu130/cu128/cu126 fallback, assert na `torch_cuda.dll`) →
clone Vulkan headers → **clone `NVIDIA/DLSS`** (jen hlavičky) → locate paths →
clone ReShade SDK v6.8.0 → `ilammy/msvc-dev-cmd` → CMake+Ninja configure →
**Build (tee do `build-log.txt`)** → **Publish build log on failure** →
upload artefaktu `reshade_torch`.

---

## 11. Shrnutí pro tebe, pokud máš jen minutu

Dvě třídy jsou napsané, kompilují se a linkují pod MSVC — **ale nic je nevolá**.
Tvůj úkol je je propojit: ReShade textura `tFlow` (1/8 rozlišení, RG16F) →
upsamplovat 8× → dostat do D3D12 přes shared handle → předat
`NgxHost::evaluate()` spolu s color a depth. Každou změnu ověř přes CI push
(§5) — a chyby kompilátoru čti z `build-log.txt` v repozitáři, ne z Actions UI,
tam se nedostaneš.
