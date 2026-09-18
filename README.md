# TEST

Reproducible CI buildy pro NetherSX2 na Nintendo Switch (GL + Vulkan/nxvk).

- **[`HANDOFF.md`](HANDOFF.md)** — stav, čísla, mrtvý cesty, mechanika
  sandboxu. Začni tady, hlavně jestli ses tu nová session.
- [`BUILD-NOTES.md`](BUILD-NOTES.md) — podrobný deník zjištění kolem buildu.
- `ci/` — `build-switch.sh` (build `.nro`), `build-mesa-sdk.sh` (nxvk/Mesa NVK
  SDK v Dockeru), `gen-vk-loader.py` (public `vk*` forwardery), `verdict.sh`,
  `annotate.sh`.
- `.github/workflows/` — `mesa-vk.yml` (GL+VK, publikuje `nro-latest`),
  `bundle.yml` (GL-only na vyžádání), `build.yml` a `probe-toolchain.yml`
  (jen dispatch).

Stahovatelný build: release tag `nro-latest`, soubor `NetherSX2.nro`.
