# TEST

Reproducible CI buildy pro NetherSX2 na Nintendo Switch (Vulkan/nxvk; OpenGL je
od buildu 43 vypnutý).

**Kam začít:** [`VU-GS-OPTIMALIZACE.md`](VU-GS-OPTIMALIZACE.md) — zadání
a plán pro optimalizaci CPU/VU/GS (změřená FPS podle taktů, rozložení threadů,
hypotézy v pořadí, jak měřit). Aktuální build: **89 = X1 lab** (build 88 +
volitelné jádro „X1 lab“ v launcheru + sync spin na semaforech EE/VU1/GS,
ovládací `ci-sync.conf`; viz BUILD-NOTES.md, sekce „Build 89“).

- **[`CORE-BUILD-VERDICT.md`](CORE-BUILD-VERDICT.md)** — proč NEjde kompilovat
  vlastní libemucore.so ze zdrojáků (LGPL drop nemá ARM64 dynarecy) a co místo
  toho je „vlastní jádro pro Tegru X1".
- **[`VU-GS-OPTIMALIZACE.md`](VU-GS-OPTIMALIZACE.md)** — co optimalizovat
  a proč (GT3 je CPU-bound, GS ne), experimenty, metodika měření.
- **[`HANDOFF.md`](HANDOFF.md)** — stav, čísla, mrtvé cesty, mechanika
  sandboxu a CI. Reference; §8 jsou pasti, které už jednou draze vyšly.
- [`BUILD-NOTES.md`](BUILD-NOTES.md) — podrobný deník zjištění kolem buildu.
- `ci/` — `build-switch.sh` (build `.nro` + patche portu), `patches/`
  (`ci_core_log.c` = log modul + čtení taktů, `vk_diag.py`, `util_no_boost.py`),
  `analyze-core-log.py` (analýza logu z karty), `build-mesa-sdk.sh`,
  `gen-vk-loader.py`, `verdict.sh`, `annotate.sh`.
- `.github/workflows/` — `mesa-vk.yml` (VK build, publikuje `nro-latest`),
  `bundle.yml`, `build.yml`, `probe-toolchain.yml`.

Stahovatelný build: release tag `nro-latest`, soubor `NetherSX2.nro`.
