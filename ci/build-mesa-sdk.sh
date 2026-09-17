#!/usr/bin/env bash
# Postaví nxvk (Mesa NVK pro Nintendo Switch) a poskládá z NĚJ plochý
# vulkan/{include,lib} strom, přesně ten tvar, jaký čeká NetherSX2_nx pro
# `make RENDERER=VK` (23 archivů odkazovaných jako -l:libX.a).
#
# Proč to neděláme přes `make package`: nxvk own packaging sloučí SUPPORT_LIBS
# do jedné `libnvk_support.a`, kdežto NetherSX2_nx linkuje jednotlivé archivy
# v jednom --start-group. Takže archivy bereme přímo z meson build adresáře.
#
# Běží NA HOSTU, ne uvnitř containeru — potřebuje Docker.

set -uo pipefail

note() { echo "::notice::$*"; }
err()  { echo "::error::$*"; }
warn() { echo "::warning::$*"; }

HERE="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
ROOT="$(cd "$HERE/.." && pwd)"
cd "$ROOT"

NXVK_REPO="${NXVK_REPO:-PalindromicBreadLoaf/nxvk}"
NXVK_TAG="${NXVK_TAG:-switch}"          # default branch of the fork = switch
WORK="${MESA_WORK:-$ROOT/.mesawork}"
SRC="$WORK/nxvk"
CROSS="$SRC/switch/build/cross"
SDK="$ROOT/mesa-sdk"
IMAGE=nxvk-ci
N="0"

logf() { N=$((N+1)); printf '%s/stage-%02d.log' "$WORK" "$N"; }

stage() {
    local label="$1" log rc
    shift
    log="$(logf)"
    note "▶ $label"
    "$@" > "$log" 2>&1
    rc=$?
    if [ "$rc" -ne 0 ]; then
        err "✗ $label rc=$rc"
        grep -E "error:|Error [0-9]|FAILED|No such file|not found|cannot find" "$log" \
            | sort -u | head -10 | bash "$HERE/annotate.sh" error 10
        tail -12 "$log" | bash "$HERE/annotate.sh" error 12
        return "$rc"
    fi
    note "✓ $label ($(du -h "$log" | cut -f1) log)"
    return 0
}

# archivy, které chce NetherSX2_nx pod vulkan/lib (přesně ty -l: názvy)
NEED="libnvk.a
libvulkan_lite_runtime.a libvulkan_runtime.a
libvulkan_lite_instance.a libvulkan_instance.a
libvulkan_util.a libvulkan_wsi.a
libnak.a libnak_rs.a libvtn.a libxmlconfig.a
libnil.a liblibnil_format_table.a libnouveau_mme.a
libnouveau_ws.a libnvidia_headers_c.a
libnir.a libcompiler.a libcompiler_c_helpers.a
libmesa_util.a libmesa_util_simd.a libblake3.a libmesa_util_c11.a"

mkdir -p "$WORK"
rm -rf "$SDK"; mkdir -p "$SDK/lib" "$SDK/include"

# ------------------------------------------------------------------ 0. docker
if ! command -v docker >/dev/null 2>&1; then
    err "na runneru není docker — tenhle job MUSÍ běžet bez container:"
    exit 1
fi
stage "docker version" docker version --format '{{.Server.Version}}' || exit 1
note "runner: $(nproc) CPU, volné místo $(df -h / | awk 'NR==2{print $4}')"

# ------------------------------------------------------------------- 1. clone
if [ ! -d "$SRC/.git" ]; then
    stage "clone $NXVK_REPO@$NXVK_TAG" \
        git clone -q --depth 1 --branch "$NXVK_TAG" "https://github.com/$NXVK_REPO.git" "$SRC" \
        || exit 1
fi
note "nxvk commit $(git -C "$SRC" rev-parse --short HEAD) ($(du -sh "$SRC" 2>/dev/null | cut -f1) na disku)"

# ------------------------------------------------------------------ 2. image
stage "docker build toolchain image" \
    docker build -t "$IMAGE" "$SRC/switch/docker" || exit 1
note "image $(docker image ls "$IMAGE" --format '{{.Size}}')"

DRUN=(docker run --rm -v "$SRC:/work" -w /work "$IMAGE" bash -lc)

# ------------------------------------------------- 3. native tools + sysroot
stage "build native tools (mesa_clc apod.)" \
    "${DRUN[@]}" 'bash switch/build/build-native-tools.sh' || exit 1
stage "rust std sysroot pro aarch64-switch-horizon" \
    "${DRUN[@]}" 'bash switch/rust/build-std-sysroot.sh' || exit 1

# ------------------------------------------------------- 4. configure + build
stage "meson configure (Vulkan/NVK)" \
    "${DRUN[@]}" 'bash switch/build/configure-mesa.sh' || exit 1

# Zeptáme se ninja samotný, jaký má .a targety, a postavíme jen ty, co
# NetherSX2_nx potřebuje. Vlastní cesty hádat nebudeme.
note "▶ hledám targety"
ALL=$(cd "$CROSS" && ninja -t targets all 2>/dev/null | awk -F: '/\.a:/{print $1}')
WANT=""
for a in $NEED; do
    hit=$(printf '%s\n' "$ALL" | grep -E "(^|/)${a}\$" | head -1)
    if [ -n "$hit" ]; then
        WANT="$WANT $hit"
    else
        warn "v buildu nenajden target pro $a"
    fi
done
note "nalezeno $(printf '%s\n' $WANT | wc -w) / $(printf '%s\n' $NEED | wc -w) targetů"

if [ -n "$WANT" ]; then
    # -k0: continue on errors. Link libvulkan_nouveau.so má spadnout — to je
    # dle README expected, archivy se berou i tak.
    stage "ninja driver archivy" \
        "${DRUN[@]}" "cp -r switch/docker/cross-include/. /opt/switch-cross-include/ 2>/dev/null || true; export PATH=\$(pwd)/switch/build/native-tools/bin:\$PATH; ninja -k0 -C switch/build/cross$WANT"
fi

# ----------------------------------------------------------------- 5. staging
note "=== staging plochýho vulkan/ SDK ==="
missing=""
for a in $NEED; do
    found=$(find "$CROSS" -name "$a" -type f 2>/dev/null | head -1)
    if [ -n "$found" ]; then
        cp -f "$found" "$SDK/lib/$a"
    else
        missing="$missing $a"
    fi
done
if [ -n "$missing" ]; then
    err "tyhle archivy se nepodařilo vyprodukovat:$missing"
else
    note "všech $(printf '%s\n' $NEED | wc -w) archivů na místě"
fi

# headers: mesa's vulkan + vk_video include dirs (stejně jako to dělá `make install`)
for d in include/vulkan include/vk_video; do
    if [ -d "$SRC/$d" ]; then
        cp -r "$SRC/$d" "$SDK/include/"
        note "headers $d ($(find "$SDK/include/$(basename "$d")" -name '*.h' | wc -l) souborů)"
    else
        err "adresář $d v nxvk neexistuje"
    fi
done
[ -f "$SDK/include/vulkan/vulkan_core.h" ] \
    && note "vulkan_core.h OK" || err "vulkan_core.h chybí — NetherSX2_nx ho kontroluje"

note "SDK velikost: $(du -sh "$SDK" | cut -f1), lib: $(ls "$SDK/lib" | wc -l) archivů"
ls -la "$SDK/lib" | tail -25 | bash "$HERE/annotate.sh" notice 25
tar czf "$ROOT/mesa-sdk.tar.gz" -C "$ROOT" mesa-sdk
note "mesa-sdk.tar.gz = $(stat -c '%s' "$ROOT/mesa-sdk.tar.gz") B"
note "hotovo — artifact 'mesa-sdk' se používá v bundle jobu přes VULKAN_SDK_DIR"
exit 0
