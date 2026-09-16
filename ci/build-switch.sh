#!/usr/bin/env bash
# Finální NetherSX2.nro (launcher + emulátor + jádra) v GitHub Actions.
#
# Je to přepsaný build_all.sh, protože ten nejde použít přímo:
#   1) tvrdě abortuje, pokud neexistuje vulkan/lib/libnvk.a — VK chce Mesa SDK,
#      které nxvk nevydává jako hotový archiv (to je samostatný build),
#   2) očekává jádra v CORES_DIR, ale upstream je z právních důvodů
#      nedistribuuje — tady se stahují z release Trixarian/NetherSX2-{patch,classic}.
#
# Všechna zjištění letí jako ::notice::/::error:: anotations, ne do logu:
# sandbox, co to sleduje, nedosáhne na raw logy Actions.

set -euo pipefail

note() { echo "::notice::$*"; }
err()  { echo "::error::$*"; }
# kdyby selhala libovolná stage, ať víme kterou (log nečteme)
trap 'rc=$?; err "SELHALO na řádce $LINENO (rc=$rc)"' ERR

: "${DEVKITPRO:=/opt/devkitpro}"
export DEVKITPRO DEVKITARM="$DEVKITPRO/devkitARM" DEVKITA64="$DEVKITPRO/devkitA64"
export PATH="$DEVKITA64/bin:$DEVKITPRO/tools/bin:$DEVKITPRO/bin:$PATH"

JOBS="${JOBS:-$(nproc)}"
CORE_TAG="${CORE_TAG:-main}"        # větev NaGaa95/NetherSX2_nx
APK_TAG="${APK_TAG:-2.2n}"         # tag release u Trixarian
WORK="${WORK:-$PWD/.ciwork}"
CORES_DIR="${CORES_DIR:-$WORK/cores}"
PORTLIBS="${PORTLIBS:-$DEVKITPRO/portlibs/switch}"
# název adresáře NENÍ volitelný: root Makefile má TARGET := $(notdir $(CURDIR))
SRC="$WORK/NetherSX2_nx"

mkdir -p "$WORK" "$CORES_DIR"

# ---------------------------------------------------------------- 1. portlibs
note "=== stage 1: portlibs ==="
dkp-pacman -Sy --noconfirm >/dev/null 2>&1 || true

have_lib() { [ -f "$PORTLIBS/lib/$1" ]; }

need=()
have_lib libEGL.a           || need+=(switch-mesa)
have_lib libdrm_nouveau.a   || need+=(switch-libdrm_nouveau)
have_lib libcurl.a          || need+=(switch-curl)
have_lib libSDL2.a          || need+=(switch-sdl2 switch-sdl2_ttf switch-sdl2_image)
have_lib libturbojpeg.a     || need+=(switch-turbojpeg switch-libjpeg-turbo)

if [ "${#need[@]}" -gt 0 ]; then
  found=""
  for p in "${need[@]}"; do
    if dkp-pacman -Si "$p" >/dev/null 2>&1; then found="$found $p"; else note "$p není v repo, zkouším alternativy"; fi
  done
  # z dvojice turbojpeg aliasů bereme jen ten, co reálně existuje
  real=""
  for p in $found; do
    case "$p" in
      switch-turbojpeg|switch-libjpeg-turbo)
        [ -n "$real" ] && continue;;
    esac
    real="$real $p"
  done
  if [ -n "$real" ]; then
    note "instaluji:$real"
    dkp-pacman -S --noconfirm $real >/dev/null 2>&1 \
      && note "install OK" || err "install selhal pro:$real"
  else
    err "žádný z požadovaných balíčků není v devkitPro repo"
  fi
else
  note "všechny portlibs už v image jsou"
fi

for f in libEGL.a libGLESv2.a libglapi.a libdrm_nouveau.a libcurl.a libSDL2.a libturbojpeg.a; do
  if have_lib "$f"; then note "portlib $f OK"; else err "portlib chybí: $f"; fi
done

# launcher Makefile volá $(PREFIX)pkg-config == aarch64-none-elf-pkg-config,
# ten ale v devkitPro image není (ověřeno probe runem) -> děláme shim.
if ! command -v aarch64-none-elf-pkg-config >/dev/null 2>&1; then
  if command -v pkg-config >/dev/null 2>&1; then
    mkdir -p "$DEVKITPRO/bin"
    {
      echo '#!/bin/sh'
      echo "export PKG_CONFIG_LIBDIR=\"$PORTLIBS/lib/pkgconfig\""
      echo 'exec pkg-config "$@"'
    } > "$DEVKITPRO/bin/aarch64-none-elf-pkg-config"
    chmod +x "$DEVKITPRO/bin/aarch64-none-elf-pkg-config"
    note "vytvořen shim aarch64-none-elf-pkg-config"
  else
    err "pkg-config chybí úplně — launcher neposkládá flags"
  fi
fi

# ------------------------------------------------------------- 2. jádra z APK
fetch_core() {
  local repo="$1" build="$2" dir="$CORES_DIR/NetherSX2-v2.2n-$build"
  local asset="NetherSX2-v2.2n-$build.apk" url apk
  mkdir -p "$dir"
  url=$(curl -s --max-time 60 "https://api.github.com/repos/$repo/releases/tags/$APK_TAG" \
        | ASSET="$asset" python3 -c '
import json,os,sys
d=json.load(sys.stdin)
want=os.environ["ASSET"]
for a in d.get("assets",[]):
    if a["name"]==want:
        print(a["browser_download_url"]); break
')
  if [ -z "$url" ]; then err "asset $asset nenalezen v $repo@$APK_TAG"; exit 1; fi
  note "stahuji $asset"
  apk="$WORK/$build.apk"
  curl -sSL --retry 3 --max-time 900 -o "$apk" "$url"
  stat -c "::notice::APK $build = %s B" "$apk"

  python3 - "$apk" "$dir" <<'PY'
import os,sys,zipfile
apk,dir_=sys.argv[1:3]
z=zipfile.ZipFile(apk)
names=z.namelist()
so='lib/arm64-v8a/libemucore.so'
if so not in names:
    print(f"::error::v APK není {so}; .so soubory: {[n for n in names if n.endswith('.so')][:6]}")
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
print(f"::notice::extracted {so} ({os.path.getsize(out)} B) + {len(assets)} assets, GameIndex={'ANO' if os.path.exists(gi) else 'CHYBÍ'}")
if not os.path.exists(gi):
    print("::error::GameIndex.yaml v APK není — build_all.sh by na něm abortil")
    sys.exit(1)
PY
  note "jádro $build připraveno"
}

note "=== stage 2: emulátorová jádra ==="
fetch_core Trixarian/NetherSX2-patch   4248
fetch_core Trixarian/NetherSX2-classic 3668

# ------------------------------------------------------------- 3. upstream
note "=== stage 3: upstream ==="
[ -d "$SRC/.git" ] || git clone -q --depth 1 --branch "$CORE_TAG" \
  https://github.com/NaGaa95/NetherSX2_nx.git "$SRC"
git -C "$SRC" rev-parse --short HEAD | xargs -I@ note "NetherSX2_nx @"

# ------------------------------------------------------- 4. deps + emulátor
note "=== stage 4: libsmb2 + libusbhsfs ==="
cmake -S "$SRC/launcher/dependencies" -B "$SRC/launcher/dependencies/build" -G Ninja \
  -DCMAKE_TOOLCHAIN_FILE="$DEVKITPRO/cmake/Switch.cmake" \
  -DCMAKE_BUILD_TYPE=Release >/dev/null
cmake --build "$SRC/launcher/dependencies/build" --parallel "$JOBS" >/dev/null
note "deps OK"

note "=== stage 5: emulátor RENDERER=GL ==="
make -C "$SRC" clean >/dev/null 2>&1 || true
make -C "$SRC" -j"$JOBS" RENDERER=GL >/dev/null
cp -f "$SRC/NetherSX2_nx.nro" "$SRC/NetherSX2_nx_gl.nro"
stat -c "::notice::emulátor GL %n = %s B" "$SRC/NetherSX2_nx_gl.nro"
note "VK binárka se nebuildí (chybí Mesa/NVK SDK) -> launcher musí Renderer=OpenGL"

# --------------------------------------------------------- 6. romfs bundling
note "=== stage 6: romfs ==="
mkdir -p "$SRC/launcher/romfs/cores" "$SRC/launcher/romfs/emu"
for b in 4248 3668; do
  cp -f "$CORES_DIR/NetherSX2-v2.2n-$b/lib/arm64-v8a/libemucore.so" \
        "$SRC/launcher/romfs/cores/emucore_$b.so"
  rd="$SRC/launcher/romfs/res/$b"
  rm -rf "$rd"; mkdir -p "$rd"
  cp -rf "$CORES_DIR/NetherSX2-v2.2n-$b/assets/." "$rd/"
  rm -rf "$rd/dexopt"
done
cp -f "$SRC/NetherSX2_nx_gl.nro" "$SRC/launcher/romfs/emu/NetherSX2_nx_gl.nro"
du -sh "$SRC/launcher/romfs" | xargs -I@ note "romfs @"

# ------------------------------------------------------- 7. forwarder + launcher
note "=== stage 7: forwarder + launcher ==="
make -C "$SRC/launcher/fwd" clean >/dev/null 2>&1 || true
make -C "$SRC/launcher/fwd" -j"$JOBS" >/dev/null 2>&1 \
  && note "forwarder OK" || note "forwarder se nepodařil (pokračuju bez něj)"

make -C "$SRC/launcher" clean >/dev/null 2>&1 || true
make -C "$SRC/launcher" -j"$JOBS" >/dev/null
mv -f "$SRC/launcher/NetherSX2.nro" "$SRC/NetherSX2.nro"
stat -c "::notice::VÝSLEDEK %n = %s B" "$SRC/NetherSX2.nro"

# -------------------------------------------------------------- 8. export
OUT="${OUT:-$PWD/out}"
mkdir -p "$OUT"
cp -f "$SRC/NetherSX2.nro" "$OUT/NetherSX2.nro"
sha256sum "$OUT/NetherSX2.nro" | cut -c1-64 | xargs -I@ note "sha256 @"
note "hotovo: NetherSX2.nro v $OUT"
