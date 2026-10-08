# Úkol pro Antigravity

> Než začneš: **`git pull`**. Tento soubor a `HANDOFF.md` se od tvého klonu liší.
> Čti `HANDOFF.md` jako kontext, tento soubor jako zadání.

---

## ⚠️ Nejdřív korekce: plán z `HANDOFF.md` §8 má díru

V handoffu stojí *„shared-handle import do D3D12"*. To **nejde tak, jak je to
napsané.** Ověřeno proti `crosire/reshade@v6.8.0`:

**`get_shared_handle` v ReShade 6.8.0 neexistuje.** Grep přes celý
`reshade_api_device.hpp` vrací nulu. Jediné API na shared handle je:

```cpp
// reshade_api_device.hpp:364
virtual bool create_resource(const resource_desc &desc,
                             const subresource_data *initial_data,
                             resource_usage initial_state,
                             resource *out_resource,
                             void **shared_handle = nullptr) = 0;
```

Dokumentace k parametru (řádek 362): když `shared_handle` ukazuje na
`nullptr`, **nastaví se na exportovaný handle nově vytvořeného zdroje**. Když už
platný handle obsahuje, zdroj se z něj **importuje**.

**Důsledek:** handle jde získat jen u zdroje, **který sis sám vytvořil**. Pro
Lumenite `tFlow` ani pro backbuffer hry žádný handle dostat nemůžeš. Přímý
import `tFlow` do privátního D3D12 device je tedy nemožný.

Druhá díra: **`NgxHost` nevlastní command queue, command allocator ani fence** —
ověřeno, jediné co bere je `ID3D12GraphicsCommandList *` jako parametr
`evaluate()`. Nikdo ho tedy nemá jak vyrobit a není čím synchronizovat frontu
hry s naší.

Obě díry jdou obejít. Existují dvě cesty a **cesta A je řádově méně práce.**

---

## Cesta A — doporučená: NGX na D3D11 device hry

NGX má **plnohodnotnou D3D11 větev**, ověřeno v `NVIDIA/DLSS include/nvsdk_ngx.h`:

```
:150/:168  NVSDK_NGX_D3D11_Init(..., ID3D11Device*, ...)
:278       NVSDK_NGX_D3D11_Shutdown(void)
:380       NVSDK_NGX_D3D11_AllocateParameters(NVSDK_NGX_Parameter**)
:544/:549  NVSDK_NGX_D3D11_CreateFeature(ID3D11DeviceContext*, NVSDK_NGX_Feature,
                                          const NVSDK_NGX_Parameter*, NVSDK_NGX_Handle**)
```

Plus `NGX_D3D11_CREATE_DLSS_EXT` / `NGX_D3D11_EVALUATE_DLSS_EXT` v
`nvsdk_ngx_helpers_d3d.h:85` / `:103`.

**Proč to řeší všechno najednou:** pokud hra běží na D3D11, inicializuješ NGX
přímo na **jejím** `ID3D11Device`. Pak:

- `tFlow` i backbuffer jsou **už na tom správném device** → žádné sdílení, žádný
  privátní device, žádný fence, žádná synchronizace mezi frontami.
- `ID3D11DeviceContext*` dostaneš z ReShade: `cmd_list->get_native()`.
- `ID3D11Device*` z `device::get_native()` (`reshade_api_device.hpp:275`,
  vrací `uint64_t`) + `QueryInterface`.

To je zhruba **desetina práce** oproti cestě B.

---

## Krok 0 — zjistit, na čem PCSX2 běží (udělej tohle první)

Celé rozhodnutí A vs B visí na tomhle. Zjisti to **na skutečném stroji**, ne
hádej:

```cpp
// v on_create_swapchain (src/addon.cpp:268) už signature bere device_api
reshade::api::device_api api   // ← tohle jen zaloguj
```

Napiš to do `ReShade.log` a **napiš nám, co to vrátilo**. `device_api::d3d11` →
cesta A. `device_api::vulkan` → cesta B.

Dokud tohle nevíme, je zbytečné psát kód.

---

## Krok 1 — rozšířit `NgxHost` o D3D11 větev

Přidej vedle D3D12 cesty druhou. Sdílej co nejvíc: tabulka `GetProcAddress`,
`result_name()`, parametry, `Info`.

Přesný tvar si odvod z existujícího `src/ngx_host.cpp` (283 řádků) — je tam
vzor pro `LoadLibraryW` + `GetProcAddress`, který **nelinkuje nic proti NVIDIA
binárkám**. Drž se ho, je to záměr: add-on se musí dát načíst i bez
`nvngx_dlss.dll`.

Nezapomeň na pasti z `HANDOFF.md` §6 — hlavně `#include <Windows.h>` a enum
konstanty s infixem `FAIL_`.

## Krok 2 — zaregistrovat správný hook

**`reshade::addon_event::reshade_finish_effects`**, podrobně v `HANDOFF.md` §8.
Žádný z pěti existujících hooků v `addon.cpp` (řádky 441–445) nedává
`effect_runtime*` **i** `command_list*` najednou — ověřeno tabulkou tamtéž.

## Krok 3 — upsampling `tFlow`

`tFlow` je **RG16F při 1/8 rozlišení** (`lumenite_QuantMotion.fx`, pyramida
128→64→32→16→8). DLSS čeká MV v rozlišení vstupu. `InMVScaleX/Y` škáluje
**velikost** vektorů, ne rozlišení textury — takže to samotné nestačí, musíš
reálně upsamplovat 8×. Confidence kanál DLSS neumí, ten se zahazuje.

## Krok 4 — až potom cesta B, pokud je PCSX2 na Vulkanu

Postup, který skutečně funguje (na rozdíl od přímého importu):

1. Vytvoř **vlastní** zdroj přes `create_resource(..., resource_flags::shared,
   &handle)` — handle dostaneš, protože je to tvůj zdroj.
2. Na command listu hry udělej `copy_resource(muj_shared, tFlow)` — oba jsou
   ReShade zdroje na stejném device, takže je to legální.
3. Na privátním D3D12 device `OpenSharedHandle` → `ID3D12Resource`.
4. **Musíš doplnit** command queue + command allocator + command list + fence do
   `NgxHost` a ručně synchronizovat s frontou hry. Tohle v kódu vůbec není.
5. Nejdřív zkontroluj `device_caps::shared_resource` /
   `shared_resource_nt_handle` (`reshade_api_device.hpp:156–163`) — bez nich
   `resource_flags::shared` nesmíš použít.

Stojí to kopii textury navíc každý snímek. Proto až jako druhá volba.

---

## Pravidla, která dodržuj

1. **Každou změnu ověř přes CI push.** Postup v `HANDOFF.md` §5. Chyby
   kompilátoru čti z **`build-log.txt` v repozitáři**, ne z Actions UI — tam
   nejsou dostupné. Ten log tam publishuje krok `Publish build log on failure`;
   nesmazat.
2. **`gh workflow run` nefunguje** (403). CI se spouští pushem, větev je v
   `on: push: branches:`.
3. **Nikdy netvrď, že něco funguje, jen protože to prošlo kompilátorem.**
   Kompilace ≠ upscaling. Jsi na stroji s RTX 4080 — **ty můžeš add-on skutečně
   spustit v PCSX2.** Dokud to neuděláš, piš „zkompilováno", ne „funguje".
4. **Před každým pushem `git fetch` + `git rebase origin/arena/96bb4b4c-test`.**
   Historie se mezi tahy resetuje a push jinak spadne na non-fast-forward.
5. **Pospiš si s krokem 0.** Dokud nevíme `device_api`, je každá další řádka
   kódu sázka.

---

## Kde přesně začít

```
src/addon.cpp:268   on_create_swapchain  → zaloguj device_api   (KROK 0)
src/addon.cpp:441   blok register_event  → přidej finish_effects (KROK 2)
src/ngx_host.cpp    283 řádků, vzor pro D3D11 větev             (KROK 1)
src/lumen_mv.cpp     91 řádků, hotové, nic neměň
```
