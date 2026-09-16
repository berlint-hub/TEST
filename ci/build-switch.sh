#!/usr/bin/env bash
# Finální NetherSX2.nro (launcher + emulátor + jádra) v GitHub Actions.
#
# Je to přepis build_all.sh, protože ten nejde použít přímo:
#   1) tvrdě abortuje, pokud neexistuje vulkan/lib/libnvk.a — VK cesta chce
#      Mesa/NVK SDK, které nxvk nevydává jako hotový archiv (samostatný build),
#   2) očekává jádra v CORES_DIR, ale upstream je z právních důvodů
#      nedistribuuje — tady se stahují z release Trixarian/NetherSX2-{patch,classic}.
#
# Vědomě BEZ `set -e`: ticho ukončený skript je k ničemu, protože raw logy
# Actions jsou z našeho prostředí nedostupné. Každá stage hlásí výsledek
# sama (::notice:: / ::error:: anotations) a padá jen přes die().
set -uo pipefail

note() { echo "::notice::$*"; }
err()  { echo "::error::$*"; }
warn() { echo "::warning::$*"; }

# run <popisek> <prikaz...> — anotuje výsledek, při chybě die
run() {
  local label="$1"; shift
  local log="$WORK/stage-$(printf '%s' "$label" | tr -c 'A-Za-z0-9' '-').log" rc
  note "▶ $label"
  "$@" > "$log" 2>&1
  rc=$?
  if [ $rc -ne 0 ]; then
    err "✗ $label rc=$rc"
    grep -E "error:|Error [0-9]|FAILED|No such file|cannot find -l|not found|CMake Error" "$log" \
      | sort -u | head -10 | bash "$HERE/annotate.sh" error 10
    tail -6 "$log" | bash "$HERE/annotate.sh" error 6
    die "$label"
  fi
  note "✓ $label"
  return 0
}

die() { echo "::error::končím kvůli: $1"; exit 1; }

HERE="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
ROOT="$(cd "$HERE/.." && pwd)"
cd "$ROOT"

: "${DEVKITPRO:=/opt/devkitpro}"
export DEVKITPRO
export DEVKITARM="$DEVKITPRO/devkitARM"
export DEVKITA64="$DEVKITPRO/devkitA64"
export PATH="$DEVKITA64/bin:$DEVKITPRO/tools/bin:$DEVKITPRO/bin:$PATH"

JOBS="${JOBS:-$(nproc)}"
CORE_TAG="${CORE_TAG:-main}"     # větev NaGaa95/NetherSX2_nx
APK_TAG="${APK_TAG:-2.2n}"      # tag release u Trixarian
WORK="${WORK:-$ROOT/.ciwork}"
CORES_DIR="${CORES_DIR:-$WORK/cores}"
PORTLIBS="${PORTLIBS:-$DEVKITPRO/portlibs/switch}"
SHIMS="$WORK/.shims"
# název adresáře NENÍ volitelný: root Makefile má TARGET := $(notdir $(CURDIR))
SRC="$WORK/NetherSX2_nx"

mkdir -p "$WORK" "$WORK/logs" "$CORES_DIR" "$SHIMS"

# ------------------------------------------------------------------ 1. prostředí
note "=== stage 1: prostředí ==="
note "DEVKITPRO=$DEVKITPRO"
if [ -w "$DEVKITPRO/bin" ]; then note "/opt/devkitpro/bin zapisovatelný"; else warn "/opt/devkitpro/bin NEZAPISOVATELNY ($(ls -ld "$DEVKITPRO/bin" 2>&1 | cut -c1-40))"; fi
for t in aarch64-none-elf-gcc make cmake ninja git python3 pkg-config; do
  if command -v "$t" >/dev/null 2>&1; then
    note "nástroj $t = $(command -v "$t")"
  else
    err "nástroj chybí: $t"
  fi
done

# -------------------------------------------------------------------- 2. pkgconf
# launcher/Makefile volá `$(PREFIX)pkg-config`, tj. buď
# aarch64-none-elf-pkg-config z PATH, nebo $DEVKITPRO/bin/aarch64-none-elf-pkg-config.
# devkitPro image tenhle wrapper nemá (ověřeno probe runem) -> děláme si vlastní.
note "=== stage 2: pkg-config ==="
export PKG_CONFIG_LIBDIR="$PORTLIBS/lib/pkgconfig"
export PKG_CONFIG_PATH="$PORTLIBS/lib/pkgconfig"
export PKG_CONFIG_DIR=""
export PKG_CONFIG_SYSROOT_DIR=""

shim() {
  local target="$1"
  mkdir -p "$(dirname "$target")" 2>/dev/null || return 1
  {
    echo '#!/bin/sh'
    echo "PKG_CONFIG_LIBDIR=\"$PKG_CONFIG_LIBDIR\" PKG_CONFIG_PATH=\"$PKG_CONFIG_PATH\" PKG_CONFIG_DIR=\"\" exec pkg-config \"\$@\""
  } > "$target" 2>/dev/null || return 1
  chmod +x "$target" 2>/dev/null
  [ -x "$target" ]
}

if command -v pkg-config >/dev/null 2>&1; then
  shim "$SHIMS/aarch64-none-elf-pkg-config" && note "shim v $SHIMS" || warn "shim do workspace nejde vytvořit"
  shim "$DEVKITPRO/bin/aarch64-none-elf-pkg-config" && note "shim i v $DEVKITPRO/bin" || warn "do $DEVKITPRO/bin se psát nedá (máme PATH shim)"
  export PATH="$SHIMS:$PATH"
  command -v aarch64-none-elf-pkg-config >/dev/null 2>&1 \
    && note "aarch64-none-elf-pkg-config na PATH = $(command -v aarch64-none-elf-pkg-config)" \
    || err "aarch64-none-elf-pkg-config pořád nedostupné"
  for p in sdl2 SDL2_ttf SDL2_image libcurl; do
    if pkg-config --exists "$p" 2>/dev/null; then
      note "pkgconfig $p = $(pkg-config --modversion "$p" 2>/dev/null)"
    else
      err "pkg-config nezná $p (dostupné: $(ls "$PORTLIBS/lib/pkgconfig" 2>/dev/null | tr '\n' ' ' | cut -c1-200))"
    fi
  done
else
  err "v image není ani pkg-config — launcher neposkládá flags"
fi

# --------------------------------------------------------------------- 3. portlibs
note "=== stage 3: portlibs ==="
have() { [ -f "$PORTLIBS/lib/$1" ]; }
dkp-pacman -Sy --noconfirm >/dev/null 2>&1 || warn "dkp-pacman -Sy selhal (nezávažné, image už balíčky má)"
INSTALL=""
for pair in "libEGL.a:switch-mesa" "libdrm_nouveau.a:switch-libdrm_nouveau" \
            "libcurl.a:switch-curl" "libSDL2.a:switch-sdl2" "libSDL2_ttf.a:switch-sdl2_ttf" \
            "libSDL2_image.a:switch-sdl2_image" "libturbojpeg.a:switch-turbojpeg"; do
  lib="${pair%%:*}"; pkg="${pair##*:}"
  if have "$lib"; then
    note "portlib $lib OK"
  else
    note "portlib $lib chybí → zvažuji $pkg"
    dkp-pacman -Si "$pkg" >/dev/null 2>&1 && INSTALL="$INSTALL $pkg"
  fi
done
[ -n "$INSTALL" ] && run "dkp-pacman -S$INSTALL" dkp-pacman -S --noconfirm $INSTALL

for f in libEGL.a libGLESv2.a libglapi.a libdrm_nouveau.a libcurl.a \
         libSDL2.a libSDL2_ttf.a libSDL2_image.a libturbojpeg.a libntfs-3g.a; do
  have "$f" || err "KRITICKY chybí $f"
done
[ -f "$DEVKITPRO/cmake/Switch.cmake" ] || err "chybí $DEVKITPRO/cmake/Switch.cmake (balíček cmake)"

# --------------------------------------------------------------- 4. jádra z APK
fetch_core() {
  local repo="$1" build="$2"
  local dir="$CORES_DIR/NetherSX2-v2.2n-$build"
  local asset="NetherSX2-v2.2n-$build.apk"
  local url apk
  mkdir -p "$dir"
  note "▶ stahuji $asset z $repo@$APK_TAG"
  url=$(curl -s --max-time 60 "https://api.github.com/repos/$repo/releases/tags/$APK_TAG" \
        | ASSET="$asset" python3 -c '
import json,os,sys
d=json.load(sys.stdin)
want=os.environ["ASSET"]
for a in d.get("assets",[]):
    if a["name"]==want:
        print(a["browser_download_url"]); break
' 2>>"$WORK/logs/dl.log")
  if [ -z "$url" ]; then
    err "asset $asset nenalezen v $repo@$APK_TAG"
    curl -s --max-time 60 "https://api.github.com/repos/$repo/releases/tags/$APK_TAG" \
      | python3 -c 'import json,sys; d=json.load(sys.stdin); print("assets:", [a["name"] for a in d.get("assets",[])])' \
      2>/dev/null | bash "$HERE/annotate.sh" error 1
    die "asset pro build $build"
  fi
  apk="$WORK/$build.apk"
  curl -sSL --retry 3 --max-time 900 -o "$apk" "$url" 2>>"$WORK/logs/dl.log"
  [ -s "$apk" ] || { err "stažená APK je prázdná"; die "download $build"; }
  stat -c "::notice::APK $build = %s B" "$apk"

  python3 - "$apk" "$dir" <<'PY' 2>>"$WORK/logs/unzip.log"
import os,sys,zipfile
apk,dir_=sys.argv[1:3]
z=zipfile.ZipFile(apk)
names=z.namelist()
so='lib/arm64-v8a/libemucore.so'
if so not in names:
    print(f"::error::v APK není {so}; .so: {[n for n in names if n.endswith('.so')][:5]}")
    sys.exit(1)
out=os.path.join(dir_,'lib','arm64-v8a','libemucore.so')
os.makedirs(os.path.dirname(out),exist_ok=True)
open(out,'wb').write(z.read(so))
assets=[n for n in names if n.startswith('assets/') and not n.endswith('/')]
for n in assets:
    dst=os.path.join(dir_,n)
    os.makedirs(os.path.dirname(dst),exist_ok=True)
    open(dst,'wb').write(z.read(n))
gi=os.path.join(dir_,'assets','GameIndex.yaml')
ok=os.path.exists(gi)
print(f"::notice::extracted {os.path.basename(dir_)}: libemucore.so {os.path.getsize(out)} B, {len(assets)} assets, GameIndex {'ANO' if ok else 'NE'}")
sys.exit(0 if ok else 2)
PY
  case $? in
    0) note "✓ jádro $build" ;;
    2) err "$build: v APK není assets/GameIndex.yaml"; die "GameIndex pro $build" ;;
    *) err "$build: extrakce selhala (viz $WORK/logs/unzip.log)"; die "extrakce $build" ;;
  esac
}

note "=== stage 4: jádra ==="
fetch_core Trixarian/NetherSX2-patch   4248
fetch_core Trixarian/NetherSX2-classic 3668

# -------------------------------------------------------------------- 5. upstream
note "=== stage 5: upstream ==="
if [ ! -d "$SRC/.git" ]; then
  run "git clone NetherSX2_nx@$CORE_TAG" \
    git clone -q --depth 1 --branch "$CORE_TAG" \
    https://github.com/NaGaa95/NetherSX2_nx.git "$SRC"
fi
note "upstream commit $(git -C "$SRC" rev-parse --short HEAD)"

# ------------------------------------------------------ 6. deps + emulator (GL)
note "=== stage 6: libsmb2 + libusbhsfs ==="
DEPS="$SRC/launcher/dependencies"
run "cmake configure deps" cmake -S "$DEPS" -B "$DEPS/build" -G Ninja \
  -DCMAKE_TOOLCHAIN_FILE="$DEVKITPRO/cmake/Switch.cmake" -DCMAKE_BUILD_TYPE=Release
run "cmake build deps" cmake --build "$DEPS/build" --parallel "$JOBS"
ls -la "$DEPS/build/_deps/libsmb2-build/lib/libsmb2.a" 2>/dev/null | bash "$HERE/annotate.sh" notice 1

note "=== stage 7: emulátor RENDERER=GL ==="
make -C "$SRC" clean >/dev/null 2>&1
run "make emulator GL" make -C "$SRC" -j"$JOBS" RENDERER=GL
cp -f "$SRC/NetherSX2_nx.nro" "$SRC/NetherSX2_nx_gl.nro"
stat -c "::notice::emulátor GL = %s B" "$SRC/NetherSX2_nx_gl.nro"
warn "VK binárka se nebuildí (chybí Mesa/NVK SDK) -> v launcheru je potřeba Renderer=OpenGL"

# ------------------------------------------------------------------ 8. romfs
note "=== stage 8: romfs bundling ==="
mkdir -p "$SRC/launcher/romfs/cores" "$SRC/launcher/romfs/emu"
for b in 4248 3668; do
  cp -f "$CORES_DIR/NetherSX2-v2.2n-$b/lib/arm64-v8a/libemucore.so" \
        "$SRC/launcher/romfs/cores/emucore_$b.so" || die "kopie jádra $b"
  rd="$SRC/launcher/romfs/res/$b"
  rm -rf "$rd"; mkdir -p "$rd"
  cp -rf "$CORES_DIR/NetherSX2-v2.2n-$b/assets/." "$rd/"
  rm -rf "$rd/dexopt"
done
cp -f "$SRC/NetherSX2_nx_gl.nro" "$SRC/launcher/romfs/emu/NetherSX2_nx_gl.nro"
du -sh "$SRC/launcher/romfs" | bash "$HERE/annotate.sh" notice 1

# ------------------------------------------------------ 9. forwarder + launcher
note "=== stage 9: forwarder + launcher ==="
make -C "$SRC/launcher/fwd" clean >/dev/null 2>&1
if make -C "$SRC/launcher/fwd" -j"$JOBS" > "$WORK/logs/fwd.log" 2>&1; then
  note "✓ forwarder"
else
  warn "forwarder selhal — launcher půjde bez HOME zástupců"
  grep -E "error:" "$WORK/logs/fwd.log" | head -4 | bash "$HERE/annotate.sh" warning 4
fi

launcher_done=0
for attempt in "" "PREFIX=" "PREFIX=$SHIMS/aarch64-none-elf-"; do
  make -C "$SRC/launcher" clean >/dev/null 2>&1
  note "▶ make launcher (varianta: ${attempt:-výchozí PREFIX})"
  # shellcheck disable=SC2086
  if make -C "$SRC/launcher" -j"$JOBS" $attempt > "$WORK/logs/launcher.log" 2>&1; then
    launcher_done=1
    note "✓ launcher ($attempt)"
    break
  fi
  err "✗ launcher varianta ${attempt:-default}"
  grep -E "error:|not found|No rule|was not found" "$WORK/logs/launcher.log" \
    | sort -u | head -6 | bash "$HERE/annotate.sh" error 6
done
[ "$launcher_done" -eq 1 ] || die "launcher"

mv -f "$SRC/launcher/NetherSX2.nro" "$SRC/NetherSX2.nro" || die "přesun NetherSX2.nro"

# ------------------------------------------------------------------- 10. export
note "=== stage 10: export ==="
OUT="${OUT:-$ROOT/out}"
mkdir -p "$OUT"
cp -f "$SRC/NetherSX2.nro" "$OUT/NetherSX2.nro" || die "kopie do out/"
cp -f "$SRC/NetherSX2_nx_gl.nro" "$OUT/" 2>/dev/null
stat -c "::notice::VÝSLEDEK %n = %s B" "$OUT/NetherSX2.nro"
note "sha256 $(sha256sum "$OUT/NetherSX2.nro" | cut -c1-64)"
note "SD layout: sdmc:/switch/NetherSX2.nro + sdmc:/switch/nethersx2/ (BIOS si kladeš sám)"
exit 0
