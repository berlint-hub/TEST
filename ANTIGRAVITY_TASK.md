# Úkol pro Antigravity — Vulkan (aktualizováno)

> **`git pull` nejdřív.** Předchozí verze tohoto souboru doporučovala jako Cestu B
> Vulkan→D3D12 interop. **To už neplatí — byla to moje chyba.** Čti dál.
>
> Uživatel se rozhodl: **zůstáváme na Vulkanu.** Přepínat PCSX2 na D3D11 nechce.

---

## Oprava: NGX má nativní Vulkan API. Interop není potřeba.

V `NVIDIA/DLSS include/nvsdk_ngx_vk.h` (768 řádků) je kompletní vulkanová větev.
Prefix je **`NVSDK_NGX_VULKAN_` velkými písmeny** — proto ji předchozí hledání
minulo. Ověřeno:

```
:114  NVSDK_NGX_VULKAN_RequiredExtensions(uint *OutInstanceExtCount, const char ***OutInstanceExts,
                                          uint *OutDeviceExtCount,   const char ***OutDeviceExts)
:172  NVSDK_NGX_VULKAN_Init(u64 appId, const wchar_t *path, VkInstance, VkPhysicalDevice, VkDevice, ...)
:174  NVSDK_NGX_VULKAN_Init_Ext2(..., PFN_vkGetInstanceProcAddr GIPA, PFN_vkGetDeviceProcAddr GDPA, ...)
:286  NVSDK_NGX_VULKAN_Shutdown(void)          :288  _Shutdown1(VkDevice)
:382  NVSDK_NGX_VULKAN_AllocateParameters(NVSDK_NGX_Parameter **)
:447  NVSDK_NGX_VULKAN_DestroyParameters(NVSDK_NGX_Parameter *)
:479  NVSDK_NGX_VULKAN_GetScratchBufferSize(feature, params, size_t *)
:536  NVSDK_NGX_VULKAN_CreateFeature(VkCommandBuffer, NVSDK_NGX_Feature, const NVSDK_NGX_Parameter *, NVSDK_NGX_Handle **)
:537  NVSDK_NGX_VULKAN_CreateFeature1(VkDevice, VkCommandBuffer, ...)
:753  NVSDK_NGX_VULKAN_EvaluateFeature(VkCommandBuffer, const NVSDK_NGX_Handle *, const NVSDK_NGX_Parameter *, PFN_... = NULL)
```

Eval struktura `NVSDK_NGX_VK_DLSS_Eval_Params` (`nvsdk_ngx_helpers_vk.h:64`):

```cpp
NVSDK_NGX_Resource_VK *pInDepth;            // :67
NVSDK_NGX_Resource_VK *pInMotionVectors;    // :68
float InJitterOffsetX;                      // :69  "must be in input/render pixel space"
int   InReset;                              // :73  "Set to 1 when scene changes completely"
float InMVScaleX;                           // :74  "If MVs need custom scaling to convert to pixel space"
// + Feature.pInColor / Feature.pInOutput (:47-48)
```

**Co to znamená:** NGX běží **přímo na VkDevice hry** a evaluuje se na **jejím
VkCommandBuffer**. Odpadá privátní D3D12 device, `OpenSharedHandle`, fence,
timeline semaphore a kopie textury každý snímek. **Celý interop, který jsem ti
minule zadal, je k ničemu.**

---

## Nové omezení — tohle je teď ta skutečná práce

`NVSDK_NGX_VULKAN_Init` chce **`VkInstance` + `VkPhysicalDevice` + `VkDevice`**.
ReShade 6.8.0 vydává jen některé z nich. Ověřeno:

| Co potřebujeme | Odkud | Stav |
|---|---|---|
| `VkDevice` | `device::get_native()` (`reshade_api_device.hpp:275`) | ✅ vrací `VkDevice` |
| `VkCommandBuffer` | `command_list::get_native()` | ✅ vrací `VkCommandBuffer` |
| `VkInstance` | — | ❌ **ReShade nevystavuje** |
| `VkPhysicalDevice` | — | ❌ **ReShade nevystavuje** |

Grep přes `reshade_events.hpp` (1966 řádků) **nenachází** `init_instance` ani
`init_physical_device`. Dostupné device eventy jsou jen `init_device`
(`:33`, signature `void (api::device *device)`), `create_device` (`:55`),
`destroy_device` (`:71`). Grep na `physical` v `reshade_api_device.hpp` i
`reshade_api.hpp` — **nula výsledků**.

Druhý problém: `NVSDK_NGX_VULKAN_RequiredExtensions` vrací seznam instančních
a **device** rozšíření, která NGX vyžaduje. **Device extension nejde přidat do
už vytvořeného `VkDevice`.** Musí být zapnutá v okamžiku jeho vytvoření.

### Z toho plyne jediná cesta

**Hooknout `vkCreateInstance` a `vkCreateDevice` v `vulkan-1.dll`**, abys:

1. zachytil `VkInstance` a `VkPhysicalDevice`,
2. do `VkDeviceCreateInfo` přidal rozšíření z `NVSDK_NGX_VULKAN_RequiredExtensions`.

**Dobrá zpráva: na tomhle stroji to už někdo dělá.** Z `dlss5-feed.log`, který
jsi sám našel:

```
vkCreateDevice hook installed on vulkan-1!vkCreateDevice
vkCreateDevice #1: app asked for 12 extension(s), added 7
VK_KHR_external_memory ADDED
VK_KHR_external_semaphore ADDED
VK_KHR_timeline_semaphore ADDED
```

Takže vzor, který na RTX 4080 v PCSX2 prokazatelně funguje, máš přímo před nosem.
**Nespoléhej ale na to, že ta rozšíření přidá dlss5-feed za tebe** — musíš si
zjistit vlastní seznam přes `RequiredExtensions` a ověřit překryv.

---

## Postup

### Krok 1 — zjistit, co NGX skutečně chce

Zavolej `NVSDK_NGX_VULKAN_RequiredExtensions` a **vypiš oba seznamy do logu**.
Porovnej je s tím, co už přidává dlss5-feed. Bez toho nevíme, jestli hook
`vkCreateDevice` vůbec potřebujeme, nebo jestli rozšíření už zapnutá jsou.

Tohle je levné a rozhoduje to o rozsahu práce. **Udělej to první.**

### Krok 2 — hook Vulkan loaderu

Pokud krok 1 ukáže, že něco chybí: hook `vkCreateInstance` + `vkCreateDevice`
v `vulkan-1.dll`. Musí být nainstalovaný **před** vytvořením device — tedy co
nejdřív v životním cyklu add-onu (`DllMain` / `register_addon` v
`src/addon.cpp:421`).

### Krok 3 — Vulkan větev v `NgxHost`

Přidej ji vedle D3D12 cesty, **nemíchej je**. Sdílej tabulku `GetProcAddress`,
`result_name()` a `Info`. Vzor pro ruční `LoadLibraryW` + `GetProcAddress` je v
`src/ngx_host.cpp` (283 řádků) — **drž se ho, nelinkuj nic proti NVIDIA
binárkám**, to je záměr.

Pozor na pasti z `HANDOFF.md` §6: `#include <Windows.h>`, enum konstanty
s infixem `FAIL_`.

### Krok 4 — hook `reshade_finish_effects`

Podrobně v `HANDOFF.md` §8. Žádný z pěti existujících hooků v `addon.cpp`
(řádky 441–445) nedává `effect_runtime*` **i** `command_list*` najednou.

### Krok 5 — upsampling `tFlow`

`tFlow` je **RG16F při 1/8 rozlišení**. DLSS čeká MV v rozlišení vstupu;
`InMVScaleX/Y` škáluje **velikost** vektorů, ne rozlišení textury. Musíš reálně
upsamplovat 8×. Confidence kanál DLSS neumí.

---

## Pravidla

1. **Nepoužívej žádné GitHub tokeny.** Pushuje agent v tomto chatu. Ty odevzdej
   kód jako **diff** — uživatel ho předá dál.
2. **Každou změnu ověříme přes CI.** Chyby kompilátoru jsou v **`build-log.txt`
   v repozitáři**, ne v Actions UI.
3. **Nikdy netvrď „funguje", když to jen prošlo kompilátorem.** Máš RTX 4080 —
   můžeš to spustit v PCSX2. Dokud to neuděláš, piš „zkompilováno".
4. **`get_shared_handle` v ReShade 6.8.0 neexistuje** a interop už stejně
   nepotřebujeme. Nesahej na `src/shared_interop.cpp`.

---

## Kde začít

```
src/addon.cpp:421   register_addon      → sem patří hook loaderu   (KROK 2)
src/addon.cpp:441   blok register_event → přidej finish_effects    (KROK 4)
src/ngx_host.cpp    283 řádků, vzor pro Vulkan větev               (KROK 3)
src/lumen_mv.cpp     91 řádků, hotové, nic neměň
```
