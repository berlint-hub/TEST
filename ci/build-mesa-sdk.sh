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

# Jedna kompaktní anotace na konci: GitHub jich umí jen ~50 a middle se
# ztrácejí — DIGEST musí projít. Pozor, smí se odkazovat na $ROOT až když je
# je definovaný (proto je inicializace až za cd "$ROOT").
note() {
  if [ "${ANNOTATE_EVERY:-0}" = "1" ]; then echo "::notice::$*"; else echo "$*"; fi
}
key() { echo "$*" >> "${DIGEST:-/dev/null}" 2>/dev/null; echo "::notice::$*"; }
err()  { echo "::error::$*"; }
warn() { echo "::warning::$*"; }

HERE="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
ROOT="$(cd "$HERE/.." && pwd)"
cd "$ROOT"

DIGEST="$ROOT/ci-mesa-digest.txt"; : > "$DIGEST" 2>/dev/null || DIGEST=/dev/null

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
# Archivy SE TADY NEKOPÍROUJOU z build stromu. Meson je staví jako THIN —
# archiv obsahuje jen cesty na .o v build adresáři — a ten do artifactu
# nedorazí. Přetavujeme je na plné uvnitř imageu, kde objekty ještě jsou
# (viz .ci-stage-sdk.sh níže); počítá se to až po tom kroku.
want=$(printf '%s\n' $NEED | wc -w)

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

# NetherSX2_nx má dvě VK větve: flat `vulkan/lib` se 23 -l: archivy, anebo
# MESA_SDK_ROOT (unified) s `-lvulkan -lEGL -lGLESv2 -lglapi -lmesa_util*
# -lblake3 -lxmlconfig`. Flat větev v Makefile neobsahuje -lEGL ani vulkan
# loader, takže na ní zůstanou nedefinovaný egl*/vkEnumerate* (ověřeno během).
# Připravíme i unified tvar: jedinou libvulkan.a ze všech driverových archivů.
#
# Balí se UVNITŘ image: hostitelskej `ar` ani `llvm-ar` tenhle MRI skript
# nesežraly (první pokus na hostu selhal bez detailů), kdežto
# aarch64-none-elf-ar je přesně ten nástroj, na kterej spoléhá i nxvk own
# `package` target.
# Balí se UVNITŘ image: hostitelskej `ar` ani `llvm-ar` MRI skript nesežraly
# (první pokus na hostu selhal bez detailů), kdežto aarch64-none-elf-ar je
# přesně ten nástroj, na který spoléhá i nxvk own `package` target.
#
# Dvě věci se musí řešit najednou:
#   1. Meson dělá THIN archivy -> ld mimo build strom hlásí
#      „error opening thin archive member: No such file or directory".
#      Každou archivku proto přetavíme na plnou (MRI addlib to udělá sám).
#   2. Unified větev Makefile chce JEDNU libvulkan.a -> slejeme z fat kopií.
cat > "$SRC/.ci-stage-sdk.sh" <<'STAGE_EOF'
#!/usr/bin/env bash
set -uo pipefail
C=/work/switch/build/cross
D=/work/switch/build/sdk
AR=/opt/devkitpro/devkitA64/bin/aarch64-none-elf-ar
[ -x "$AR" ] || AR=ar
rm -rf "$D"; mkdir -p "$D/lib"

fat() {
  src="$1"; dst="$2"
  if [ "$(head -c 7 "$src")" = '!<thin>' ]; then
    m=$(mktemp)
    printf 'create %s\naddlib %s\nsave\nend\n' "$dst" "$src" > "$m"
    if "$AR" -M < "$m" > /dev/null 2>&1 && [ -s "$dst" ]; then
      :
    else
      cp -f "$src" "$dst"
      echo "FATFAIL $src" >&2
    fi
    rm -f "$m"
  else
    cp -f "$src" "$dst"
  fi
}

names="$1"
: > "$D/missing.txt"
for a in $names; do
  f=$(find "$C" -name "$a" -type f 2>/dev/null | head -1)
  if [ -z "$f" ]; then echo "$a" >> "$D/missing.txt"; continue; fi
  fat "$f" "$D/lib/$a"
done

mri="$D/bundle.mri"
{
  echo "create $D/lib/libvulkan.a"
  for a in $names; do [ -f "$D/lib/$a" ] && echo "addlib $D/lib/$a"; done
  echo save
  echo end
} > "$mri"
"$AR" -M < "$mri" || exit 1

echo "archivů v $D/lib: $(ls "$D/lib" | wc -l)"
du -sh "$D/lib" || true
STAGE_EOF

if stage "přetavit thin archivy + sbalit libvulkan.a uvnitř imageu" \
     docker run --rm -v "$SRC:/work" -w /work "$IMAGE" \
     bash /work/.ci-stage-sdk.sh "$(printf '%s ' $NEED)"; then
    cp -f "$SRC/switch/build/sdk/lib/"*.a "$SDK/lib/" 2>/dev/null
    cp -f "$SRC/switch/build/sdk/missing.txt" "$ROOT/stage-missing.txt" 2>/dev/null
fi

# ------------------------------------------------------- 4b. nxvk own packaging
# Plochejch 23 meson archivů na VK link STACHT nestačilo — sčítání symbolů
# (88 643 definic, 137 archivů) ukázalo, že public vk* jména v nich nejsou
# vůbec: nxvk z Mesa vědomě nestaví Vulkan loader a exportuje jedinou bránu
# vk_icdGetInstanceProcAddr (PUBLIC v src/nouveau/vulkan/nvk_instance.c).
# K tomu chybí GL/EGL front-end, který port taky odkazuje (source/imports.c
# má &eglGetConfigAttrib i ve VK režimu). nxvk si obojí balí sám targetem
# package / package-gl -> libnvk.a + libnvk_support.a + libnvk_gl.a, a přesně
# takový soubor archivů používá ve svým switch/build/build-nro.sh. Stáhnu
# je do $SDK/pkg a build-switch.sh je přednostně zlinkuje + doplní loader.
stage "make package-gl (zink GL front-end + nxvk archivy)" \
    "${DRUN[@]}" 'make CONTAINER= package-gl'
if [ -d "$SRC/switch/build/pkg/lib" ]; then
    mkdir -p "$SDK/pkg"
    cp -f "$SRC/switch/build/pkg/lib/"*.a "$SDK/pkg/" 2>/dev/null
    key "pkg: $(ls "$SDK/pkg" 2>/dev/null | tr '\n' ' ')"
else
    warn "make package-gl nic nestylovilo — zůstává jen plochejch archivů"
fi

have=$(ls "$SDK/lib" 2>/dev/null | wc -l)
key "archivy: $have / $want (v tom i libvulkan.a)"
missing=$(tr -d '\r' < "$ROOT/stage-missing.txt" 2>/dev/null | tr '\n' ' ')
[ -n "${missing:-}" ] && key "chyběj:$missing"
thin=""
for f in "$SDK"/lib/*.a; do
    [ -e "$f" ] || continue
    [ "$(head -c 7 "$f")" = '!<thin>' ] && thin="$thin $(basename "$f")"
done
if [ -n "$thin" ]; then
    err "pořád jsou thin:$thin"
else
    note "žádnej thin archiv nezbyl — ld je přečte i bez build stromu"
fi
if [ -f "$SDK/lib/libvulkan.a" ]; then
    key "libvulkan.a=$(stat -c %s "$SDK/lib/libvulkan.a")"
else
    err "libvulkan.a nevzniklo — MESA_SDK_ROOT větev neprojde"
fi

note "SDK velikost: $(du -sh "$SDK" | cut -f1), lib: $(ls "$SDK/lib" | wc -l) archivů"
ls -la "$SDK/lib" | tail -25 | bash "$HERE/annotate.sh" notice 25
tar czf "$ROOT/mesa-sdk.tar.gz" -C "$ROOT" mesa-sdk
key "SDK velikost $(du -sh "$SDK" | cut -f1), headerů $(find "$SDK/include" -name '*.h' | wc -l)"
echo "::notice::MESA DIGEST: $(tr '\n' ' ' < "$DIGEST" | cut -c1-190)"

# přísný konec: neúplné SDK nemá smysl posílat dál, ať je run červené
if [ "$have" -lt "$want" ] || [ ! -f "$SDK/lib/libvulkan.a" ]; then
    err "SDK je neúplné ($have/$want archivy, libvulkan.a $([ -f "$SDK/lib/libvulkan.a" ] && echo OK || echo NE))"
    exit 1
fi
exit 0
