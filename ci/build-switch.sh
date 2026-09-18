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

# GitHub omezuje annotace na ~30 na job, takže lejzry poznámek nás trestaj:
# každá `note` putuje jen do logu a na povrch se dostanou jedině chyby a DIGEST.
# ANNOTATE_EVERY=1 to nechá zapnutý, kdyby se chtělo dívat do runu v UI.
note() {
  if [ "${ANNOTATE_EVERY:-0}" = "1" ]; then echo "::notice::$*"; else echo "$*"; fi
}
# klíčový čísla sbíráme do DIGESTU — GitHub annotace omezuje a middle se
# ztrácejí, proto je tady jedině na konci jednoho spojenejho bloku
key() { echo "$*" >> "${DIGEST:-/dev/null}" 2>/dev/null; }
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

# totéž co run(), jen nevolá die() — pro stage, který jsou volitelný
# Cesty v hláškách linkeru jsou delší než limit annotace, takže právě ten
# text chyby spadne z řádku ven. Zkrať je před vypisováním.
shortify() {
  sed -e 's|/opt/devkitpro/devkitA64/lib/gcc/aarch64-none-elf/[0-9.]*/../../../../aarch64-none-elf/bin/ld: |ld: |g' \
      -e 's|/opt/devkitpro/||g' -e 's|/__w/TEST/TEST||g' -e 's|\.ciwork/||g'
}

run_soft() {
  local label="$1"; shift
  local log rc
  log="$(mktemp "$WORK/logs/soft-XXXXXX.log")"
  note "▶ $label"
  "$@" > "$log" 2>&1
  rc=$?
  if [ $rc -ne 0 ]; then
    err "✗ $label rc=$rc (pokračuju bez toho)"
    # Filtrovat jen "error:" by nestačilo — linkerový hlášky typu
    # "region overflowed" ani "multiple definition" do ty kategorie nespadnou,
    # a právě takhle nám unikla příčina minulýho selhání. Proto i tail logu.
    { grep -E "error:|undefined reference|multiple definition|overflowed|cannot find -l|No such file|Error [0-9]|FAILED" "$log" \
        | shortify | sort -u | head -10
      echo "-- posledních 12 řádků $label --"
      tail -12 "$log" | shortify; } | bash "$HERE/annotate.sh" "error+" 22
    return $rc
  fi
  note "✓ $label"
  return 0
}

die() {
  echo "::error::končím kvůli: $1"
  echo "::error::DIGEST: $(tr '\n' ' ' < "$DIGEST" 2>/dev/null | cut -c1-180)"
  exit 1
}

HERE="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
ROOT="$(cd "$HERE/.." && pwd)"
cd "$ROOT"

DIGEST="$ROOT/ci-bundle-digest.txt"; : > "$DIGEST" 2>/dev/null || DIGEST=/dev/null

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
  # switch_rules skládá `$(PREFIX)pkg-config', ale PREFIX používá i na
  # $(PREFIX)g++ / objcopy (ověřeno: PREFIX= i PREFIX=<špatně> rozbijou
  # nástrojovej řetěz). Takže shim musí vedle SKUTEČNÝCH nástrojů, ne jen na PATH.
  shim "$SHIMS/aarch64-none-elf-pkg-config" && note "shim v $SHIMS (PATH)" || warn "shim do workspace nejde vytvořit"
  for d in "$DEVKITPRO/devkitA64/bin" "$DEVKITPRO/bin" "$DEVKITPRO/tools/bin"; do
    [ -d "$d" ] || continue
    if shim "$d/aarch64-none-elf-pkg-config"; then
      note "shim i v $d"
    else
      warn "do $d se psát nedá"
    fi
  done
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
# switch-libexpat/-zlib/-zstd: nxvk package recept je chce jako -lexpat -lz,
# libxmlconfig a Mesou kullaný zlib bez nich naprosto rozumně hlásí
# „cannot find -lexpat". Nejsou KRITICKY — bez nich zkusíme portlibs verzi.
for pair in "libEGL.a:switch-mesa" "libdrm_nouveau.a:switch-libdrm_nouveau" \
            "libexpat.a:switch-libexpat" "libz.a:switch-zlib" "libzstd.a:switch-zstd" \
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
key "upstream=$(git -C "$SRC" rev-parse --short HEAD)"

# nepovinnej vstup: plochý vulkan/ SDK z ci/build-mesa-sdk.sh (artifact
# 'mesa-sdk'). Bez něj se VK stage přeskočí — GL cesta to nepotřebuje.
VKSDK="${VULKAN_SDK_DIR:-}"
if [ -n "$VKSDK" ]; then
  if [ -d "$VKSDK/lib" ]; then
    rm -rf "$SRC/vulkan"; mkdir -p "$SRC/vulkan"
    cp -r "$VKSDK/." "$SRC/vulkan/"
    note "Vulkan SDK nasazen do $SRC/vulkan: $(ls "$SRC/vulkan/lib" | wc -l) archivů, $(find "$SRC/vulkan/include" -name '*.h' | wc -l) headerů"
    for a in libnvk.a libnir.a libcompiler.a libmesa_util.a; do
      [ -f "$SRC/vulkan/lib/$a" ] && note "  $a $(stat -c %s "$SRC/vulkan/lib/$a") B" || err "  v SDK chybí $a"
    done
  else
    err "VULKAN_SDK_DIR=$VKSDK neobsahuje lib/ -> VK přeskočím"
    VKSDK=""
  fi
fi

# ------------------------------------------------------ 6. deps + emulator (GL)
note "=== stage 6: libsmb2 + libusbhsfs ==="
DEPS="$SRC/launcher/dependencies"
run "cmake configure deps" cmake -S "$DEPS" -B "$DEPS/build" -G Ninja \
  -DCMAKE_TOOLCHAIN_FILE="$DEVKITPRO/cmake/Switch.cmake" -DCMAKE_BUILD_TYPE=Release
run "cmake build deps" cmake --build "$DEPS/build" --parallel "$JOBS"
ls -la "$DEPS/build/_deps/libsmb2-build/lib/libsmb2.a" 2>/dev/null | bash "$HERE/annotate.sh" notice 1

# VK_ONLY=1 → GL build se vůbec nespustí. Není to len úspora: dokud se
# NetherSX2_nx_vk.nro nelinkne, GL fallback vyrobil zelený run s 55 MB balíkem,
# který byl k ničemu — bez něj run spadne na místě a je hned vidět, co chybí.
VK_ONLY="${VK_ONLY:-0}"

# ------------------------------------------------- 7c. VK přes nxvk „package" + loader
# Preferovaná cesta k VK binárce. Důvod, proč bez generovanýho loaderu nic
# neprojde: nxvk z Mesa nezveřejňuje žádný public vk* jméno (viz komentář
# v ci/gen-vk-loader.py), kdežto port je volá natvrdo — na Androidu je dodá
# Vulkan loader, na Switchu v image žádný není. Takže si ho vyrobíme:
# forwardery na vk_icdGetInstanceProcAddr, který naopak exportuje.
nsx_vk_pkg() {
  local PKG="$VKSDK/pkg" GEN="$WORK/vk-shim"
  if [ ! -f "$PKG/libnvk.a" ] || [ ! -f "$PKG/libnvk_support.a" ]; then
    key "VK: $PKG/libnvk*.a nejsou — nxvk package se nepostavil"
    return 1
  fi
  local HDR="$VKSDK/include/vulkan/vulkan_core.h"
  if [ ! -f "$HDR" ]; then
    key "VK: chybí $HDR — loader se nedá vygenerovat"
    return 1
  fi
  mkdir -p "$GEN"
  local hdrs="$HDR" h
  for h in "$VKSDK"/include/vulkan/vulkan_vi.h "$VKSDK"/include/vulkan/vulkan_nn_vi_surface.h \
           "$PORTLIBS"/include/vulkan/vulkan_vi.h "$PORTLIBS"/include/vulkan/vulkan_nn_vi_surface.h; do
    [ -f "$h" ] && hdrs="$hdrs $h"
  done
  if ! python3 "$HERE/gen-vk-loader.py" $hdrs "$GEN/vk_loader_shim.c" > "$WORK/logs/vk-shim.log" 2>&1; then
    err "vk-loader: generování selhalo"
    tail -5 "$WORK/logs/vk-shim.log" | bash "$HERE/annotate.sh" error 5
    return 1
  fi
  key "vk-loader: $(grep -c '^VKAPI_ATTR' "$GEN/vk_loader_shim.c") forwarderů"
  local cflags="-O2 -ffunction-sections -fdata-sections -march=armv8-a+crc+crypto"
  cflags="$cflags -mtune=cortex-a57 -mtp=soft -fPIC -D__SWITCH__ -DVK_USE_PLATFORM_VI_NN"
  cflags="$cflags -I$VKSDK/include -Wall -Wno-unused-function"
  run_soft "aarch64-none-elf-gcc vk loader shim" \
    aarch64-none-elf-gcc -c $cflags -o "$GEN/vk_loader_shim.o" "$GEN/vk_loader_shim.c"
  if [ ! -f "$GEN/vk_loader_shim.o" ]; then
    err "vk-loader: kompilace selhala"
    grep -E "error:" "$WORK/logs/vk-shim.log" | head -8 | bash "$HERE/annotate.sh" error 8
    return 1
  fi
  if ! aarch64-none-elf-ar rcs "$GEN/libnsxvkloader.a" "$GEN/vk_loader_shim.o" >> "$WORK/logs/vk-shim.log" 2>&1; then
    err "vk-loader: ar rcs selhal"
    return 1
  fi
  key "vk-loader: libnsxvkloader.a $(stat -c %s "$GEN/libnsxvkloader.a") B"

  # Druhý soubor problémů: Mesa volá z disk cache a GL front-endu POSIX glue,
  # který newlib/libnx na Switchu nemaj (getuid, dirfd, fstatat, sysconf,
  # posix_memalign, getpwuid_r). Vzniklo to až teď, kdy se konečně odklanjlo
  # všechno okolo Vulkanu a EGL — to bylo vždycky ten skuteorej blokující
  # nedostatek a loader ho vyřešil ✓. Následující sady se proto chytaj jen
  # ty symboly, který v libc/libnk reálně nejsou — ať nic nepřebijime.
  local stubs="" sym nmlibs="$DEVKITPRO/libnx/lib/libnx.a"
  for l in libc.a libm.a libpthread.a; do
    nmlibs="$nmlibs $(aarch64-none-elf-gcc -print-file-name=$l 2>/dev/null)"
  done
  aarch64-none-elf-nm --defined-only $nmlibs 2>/dev/null | awk '{print $NF}' > "$GEN/libc.syms"
  for sym in dirfd fstatat getuid geteuid getgid getegid getpwuid_r \
             sysconf posix_memalign aligned_alloc fchmodat utimensat \
             futimens renameat linkat flock pthread_sigmask regcomp \
             regexec regfree posix_fadvise madvise fdatasync syncfs; do
    if grep -qx "$sym" "$GEN/libc.syms"; then
      note "posix: $sym je v libc/libnx -> nedefinujeme"
    else
      stubs="$stubs -DNSX_STUB_$(echo "$sym" | tr 'a-z' 'A-Z')"
    fi
  done
  if [ -n "$stubs" ]; then
    cat > "$GEN/posix_stubs.c" <<'POSIXSTUB'
/* Vygeneroval ci/build-switch.sh — POSIX lepidlo pro Mesa na Switchi.
 * Všechno slabě, ať to jde přebít ve chvili, kdy libnx/newlib něco
 * z toho dodá. Sémantika je „nejbezpečnější nic", ne simulace POSIXu:
 * bez HOME a s uid 0 se Mesa own disk cache sama vypne (viz
 * disk_cache_generate_cache_dir), což je na Switchi chovani, který
 * emulator beztak predbíhá vlastním shader cache. */
#include <dirent.h>
#include <errno.h>
#include <sys/time.h>
#include <sys/types.h>
#include <time.h>

/* Hlavičky jen pro ty stuby, co fakt generujeme: kdyby nektera v toolchainu
 * nebyla (regex je classickej pripad), at se nám rozbije *tenhle* stub,
 * ne cela VK vetev. __has_include na to staci. */
#if defined(NSX_STUB_REGCOMP) || defined(NSX_STUB_REGEXEC) || defined(NSX_STUB_REGFREE)
#  if defined(__has_include) && !__has_include(<regex.h>)
#    undef NSX_STUB_REGEXEC
#    undef NSX_STUB_REGFREE
#  else
#    include <regex.h>
#  endif
#endif
#ifdef NSX_STUB_PTHREAD_SIGMASK
#  include <signal.h>
#endif
#ifdef NSX_STUB_FLOCK
#  if defined(__has_include) && __has_include(<sys/file.h>)
#    include <sys/file.h>
#  endif
#endif
#include <fcntl.h>
#include <malloc.h>
#include <pwd.h>
#include <stdio.h>
#include <string.h>
#include <sys/stat.h>
#include <unistd.h>

#ifdef NSX_STUB_DIRFD
__attribute__((weak)) int dirfd(DIR *dirp) { (void)dirp; return -1; }
#endif

#ifdef NSX_STUB_FSTATAT
/* Meritko: Mesa tohlepoužíva na atime/porovnání souborů v cache. Bez /proc
 * se z DIR nedostane fd, takže jdeme přes cestu; zavolatel chybu řeší skipem. */
__attribute__((weak)) int fstatat(int fd, const char *path, struct stat *buf, int flags) {
  (void)fd; (void)flags;
  if (!path || !buf) { errno = EINVAL; return -1; }
  return stat(path, buf);
}
#endif

#ifdef NSX_STUB_GETUID
__attribute__((weak)) uid_t getuid(void) { return 0; }
#endif
#ifdef NSX_STUB_GETEUID
__attribute__((weak)) uid_t geteuid(void) { return 0; }
#endif
#ifdef NSX_STUB_GETGID
__attribute__((weak)) gid_t getgid(void) { return 0; }
#endif
#ifdef NSX_STUB_GETEGID
__attribute__((weak)) gid_t getegid(void) { return 0; }
#endif

#ifdef NSX_STUB_GETPWUID_R
__attribute__((weak)) int getpwuid_r(uid_t uid, struct passwd *pwd,
                                     char *buf, size_t buflen, struct passwd **result) {
  (void)uid; (void)pwd; (void)buf;
  if (result) *result = 0;
  (void)buflen;
  return ENOENT;   /* „žádnej user" -> Mesa si cache prostě nezačne dělat */
}
#endif

#ifdef NSX_STUB_SYSCONF
__attribute__((weak)) long sysconf(int name) {
  switch (name) {
    case _SC_PAGESIZE:            return 4096;
    case _SC_NPROCESSORS_CONF:    return 4;   /* Cortex-A57, 4 jádra */
    case _SC_NPROCESSORS_ONLN:    return 4;
    case _SC_CLK_TCK:             return 100;
    case _SC_PHYS_PAGES:          return 256 * 1024;  /* ~1 GB / 4 KiB */
    case _SC_THREAD_STACK_MIN:    return 8192;
    default:                      return 4096;
  }
}
#endif

#ifdef NSX_STUB_POSIX_MEMALIGN
__attribute__((weak)) int posix_memalign(void **memptr, size_t alignment, size_t size) {
  if (!memptr) return EINVAL;
  if (alignment < sizeof(void *) || (alignment & (alignment - 1)) != 0) return EINVAL;
  void *p = memalign(alignment, size);
  if (!p) return ENOMEM;
  *memptr = p;
  return 0;
}
#endif

#ifdef NSX_STUB_ALIGNED_ALLOC
__attribute__((weak)) void *aligned_alloc(size_t alignment, size_t size) {
  if (alignment < sizeof(void *) || (alignment & (alignment - 1)) != 0 || (size % alignment) != 0)
    return 0;
  return memalign(alignment, size);
}
#endif

#ifdef NSX_STUB_FCHMODAT
__attribute__((weak)) int fchmodat(int fd, const char *path, mode_t mode, int flags) {
  (void)fd; (void)path; (void)mode; (void)flags;
  return 0;
}
#endif

#ifdef NSX_STUB_UTIMENSAT
__attribute__((weak)) int utimensat(int fd, const char *path, const struct timespec times[2], int flags) {
  (void)fd; (void)path; (void)times; (void)flags;
  return 0;
}
#endif

#ifdef NSX_STUB_FUTIMENS
__attribute__((weak)) int futimens(int fd, const struct timespec times[2]) {
  (void)fd; (void)times;
  return 0;
}
#endif

#ifdef NSX_STUB_RENAMEAT
__attribute__((weak)) int renameat(int oldfd, const char *oldpath, int newfd, const char *newpath) {
  (void)oldfd; (void)newfd;
  return rename(oldpath, newpath);
}
#endif

/* Mesa si własną cache zamyká poradenčním flockem. Na Switchu existuje
 * jeden proces a jeden odkladací okruh, takže zámka nema co resit —
 * vracime „zámka drzena", jinak by disk_cache skočil na error cestu. */
#ifdef NSX_STUB_FLOCK
__attribute__((weak)) int flock(int fd, int operation) {
  (void)fd; (void)operation;
  return 0;
}
#endif

/* pthread.h v newlib tuhle funkci deklaruje, ale nobody ji implementoval.
 * Mesa ji volá jen proto, aby nova vlak nededil SIGINT — na Switchu
 * żadnej POSIX signal nikomu dorucen neni, takze je no-op presne
 * ekvivalentni. */
#ifdef NSX_STUB_PTHREAD_SIGMASK
__attribute__((weak)) int pthread_sigmask(int how, const sigset_t *set, sigset_t *oldset) {
  (void)how; (void)set;
  if (oldset)
    memset(oldset, 0, sizeof *oldset);   /* sigset_t je tu struct, tu scalar */
  return 0;
}
#endif

/* xmlconfig (drirc) páruje pravidla podle regexu jmena aplikace. Novlib
 * regexy nema vubec — proto trojice najednou: regcomp ohlási chybu, Mesa
 * si pravidlo nainstaluje bez regex predikaty, a tak se nikdy nespáruje
 * => Mesa zustane u defaultu. To je na Switchu jediny spravny nastavení
 * (na Switchu existuje jeden driver, žádny per-app workaround tam není). */
#ifdef NSX_STUB_REGCOMP
__attribute__((weak)) int regcomp(regex_t *preg, const char *regex, int cflags) {
  (void)regex; (void)cflags;
  if (preg)
    memset(preg, 0, sizeof *preg);
  return REG_ESPACE;   /* jakákoliv nula = „regex jsem nesehnil" */
}
#endif
#ifdef NSX_STUB_REGEXEC
__attribute__((weak)) int regexec(const regex_t *preg, const char *string, size_t nmatch,
                                  regmatch_t pmatch[], int eflags) {
  (void)preg; (void)string; (void)nmatch; (void)pmatch; (void)eflags;
  return REG_NOMATCH;
}
#endif
#ifdef NSX_STUB_REGFREE
__attribute__((weak)) void regfree(regex_t *preg) { (void)preg; }
#endif

/* Poradenská upozornění pro disk a paměť: nemáme MMU triky ani
 * advsi, a tvrzení „delam to" je pro Mesu nejskodlivejsi odpoved. */
#ifdef NSX_STUB_POSIX_FADVISE
__attribute__((weak)) int posix_fadvise(int fd, off_t offset, off_t len, int advice) {
  (void)fd; (void)offset; (void)len; (void)advice;
  return 0;
}
#endif
#ifdef NSX_STUB_MADVISE
__attribute__((weak)) int madvise(void *addr, size_t length, int advice) {
  (void)addr; (void)length; (void)advice;
  return 0;
}
#endif
#ifdef NSX_STUB_FDATASYNC
__attribute__((weak)) int fdatasync(int fd) { return fsync(fd); }
#endif
#ifdef NSX_STUB_SYNCFS
__attribute__((weak)) int syncfs(int fd) { (void)fd; return 0; }
#endif

#ifdef NSX_STUB_LINKAT
__attribute__((weak)) int linkat(int oldfd, const char *oldpath, int newfd, const char *newpath, int flags) {
  (void)oldfd; (void)oldpath; (void)newfd; (void)newpath; (void)flags;
  errno = ENOSYS;
  return -1;
}
#endif
POSIXSTUB
    run_soft "aarch64-none-elf-gcc posix stubs" \
      aarch64-none-elf-gcc -c $cflags $stubs -o "$GEN/posix_stubs.o" "$GEN/posix_stubs.c"
    if [ -f "$GEN/posix_stubs.o" ]; then
      aarch64-none-elf-ar rcs "$GEN/libnsxvkloader.a" "$GEN/posix_stubs.o" >> "$WORK/logs/vk-shim.log" 2>&1
      key "posix stubs:$(echo "$stubs" | sed 's/-DNSX_STUB_/ /g')"
    else
      err "posix stubs se nepodarilo zkompilovat"
      grep -E "error:" "$WORK/logs/vk-shim.log" | head -6 | bash "$HERE/annotate.sh" error 6
    fi
  fi

  # Recept přesně z nxvk nxvk.pc / build-nro.sh: driver whole-archive (kvůli
  # registraci), zbytek v --start-group kvůli cyklickýma závislostem, plus
  # -u,vk_icdGetInstanceProcAddr ať se ten řetězec fakt vytáhne.
  local libs="-Wl,--whole-archive $PKG/libnvk.a"
  [ -f "$PKG/libnvk_gl.a" ] && libs="$libs $PKG/libnvk_gl.a"
  libs="$libs -Wl,--no-whole-archive -Wl,--start-group $PKG/libnvk_support.a $GEN/libnsxvkloader.a"
  if have libexpat.a; then libs="$libs -lexpat"; fi
  if have libz.a; then libs="$libs -lz"; fi
  if have libEGL.a; then libs="$libs -lEGL -lGLESv2 -lglapi"; fi
  libs="$libs -Wl,--end-group -Wl,-u,vk_icdGetInstanceProcAddr"
  if ! python3 - "$SRC/Makefile" "$libs" <<'PKGLIBS'
import sys
mk, libs = sys.argv[1], sys.argv[2]
text = open(mk, encoding="utf-8", errors="surrogateescape").read()
if "NSX_VK_PKG" in text:
    print("Makefile: NSX_VK_PKG už sedí")
    sys.exit(0)
anchor = "-l:libnvk.a -l:libvulkan_lite_runtime.a"
if anchor not in text:
    print("Makefile: kotva flat LIBS nenalezena — přepisu skipuju")
    sys.exit(1)
start = text.rindex("LIBS", 0, text.index(anchor))
end = text.index("\n", text.index("-lnx -lstdc++ -lm", start))
tail = " $(STORAGE_LIBS) -lcurl -lz -lzstd -lnx -lstdc++ -lm"
block = ("# NSX_VK_PKG — LIBS přepsal ci/build-switch.sh (archivy z nxvk "
         "# `make package-gl` + loader z ci/gen-vk-loader.py). Původních "
         "# 23 -l: archivů nestačí: public vk* v nich nejsou a chybí GL/EGL.\n"
         "LIBS\t:= " + libs + tail)
open(mk, "w", encoding="utf-8", errors="surrogateescape").write(text[:start] + block + text[end:])
print("Makefile: LIBS -> nxvk pkg recept")
PKGLIBS
  then
    err "vk: přepis LIBS neprošel"
    return 1
  fi
  # Volitelně zapnout upstream VK diagnostiku: source/hooks/vk.c si pod
  # NETHERSX2_VK_DIAGNOSTIC píše /switch/nethersx2/nethersx2-vulkan.log —
  # jaký extenze jádro skutečně žádalo, výsledek CreateViSurfaceNN,
  # CreateDevice (queues/family/lsfg_capable) a jestli se ten soubor otevřel.
  #
  # POZOR, past která nás stála buildy 35 i 37: Makefile má na tuhle
  # diagnostiku VLASTNÍ přepínač
  #     ifneq ($(strip $(NETHERSX2_VK_DIAGNOSTIC)),)
  #     DEFINES += -DNETHERSX2_VK_DIAGNOSTIC
  #     endif
  # Dřív tu byl patch, který do Makefile přidával -DNETHERSX2_VK_DIAGNOSTIC
  # ručně — jenže jeho pojistka hledala v souboru string "NETHERSX2_VK_DIAGNOSTIC",
  # který je v Makefile i bez našeho zásahu (v tom ifneq). Patch se tedy tvářil
  # jako „už zapnutá", nic nepřidal, CI napsalo „DIAGNOSTIC zapnutej" a build
  # běžel BEZ diagnostiky. Správná cesta je předat tu proměnnou makeu.
  VKDIAG_MK=""
  if [ "${VK_DIAG:-0}" = "1" ]; then
    VKDIAG_MK="NETHERSX2_VK_DIAGNOSTIC=1"
    key "vk: DIAGNOSTIC zapnutej (make NETHERSX2_VK_DIAGNOSTIC=1)"
  fi

  make -C "$SRC" clean >/dev/null 2>&1
  # shellcheck disable=SC2086
  if run_soft "make emulator VK (nxvk pkg + loader)" make -C "$SRC" -j"$JOBS" RENDERER=VK LTOFLAGS= $VKDIAG_MK; then
    if [ -f "$SRC/NetherSX2_nx.nro" ]; then
      cp -f "$SRC/NetherSX2_nx.nro" "$SRC/NetherSX2_nx_vk.nro"
      key "vk=$(stat -c %s "$SRC/NetherSX2_nx_vk.nro") (nxvk pkg + loader)"
      # Velikost .nro se mezi buildy nehne (segmenty se zarovnávaj na stránky),
      # takže „stejná velikost" nic nedokazuje. Ověříme proto přímo v binárce,
      # že v ní jsou všechny tři věci, na kterých stojí VK běh — bez kterékoli
      # z nich build vypadá zeleně a na kartě se nic nedozvíme:
      #   NVK_I_WANT_A_BROKEN_VULKAN_DRIVER = povolení pro NVK (jinak nula zařízení)
      #   nsx-vk                            = novej loader se zapamatovanou instancí
      #   NetherSX2 Vulkan diagnostic       = VK diagnostika je vůbec zapnutá
      vkbin="$SRC/NetherSX2_nx_vk.nro"
      vkmiss=""
      for marker in "NVK_I_WANT_A_BROKEN_VULKAN_DRIVER" "nsx-vk" "NetherSX2 Vulkan diagnostic"; do
        grep -qa "$marker" "$vkbin" || vkmiss="$vkmiss [$marker]"
      done
      if [ -z "$vkmiss" ]; then
        key "vk: env patch + nový loader + diagnostika jsou v binárce"
      else
        err "vk: v binárce chybí:$vkmiss (build je zelenej, ale na kartě bude bez diagnostiky)"
      fi
      return 0
    fi
  fi
  key "vk: nxvk pkg recept neprošel — zkusím MESA_SDK_ROOT a flat větev"
  return 1
}

note "=== stage 7: emulátor (VK_ONLY=$VK_ONLY) ==="
make -C "$SRC" clean >/dev/null 2>&1

# ---------------------------------------------------- 7a. NVK: Tegra není „conformant"
# nxvk (PalindromicBreadLoaf/nxvk @ switch) odmítá Tegru, dokud nedostane
# NVK_I_WANT_A_BROKEN_VULKAN_DRIVER=1:
#   * nvk_is_conformant() (nvk_physical_device.c) vrací pro cokoli jinýho než
#     NV_DEVICE_TYPE_DIS false — a Switch se hlásí jako NV_DEVICE_TYPE_SOC,
#   * build je --buildtype release, takže NDEBUG větev vrátí
#     VK_ERROR_INCOMPATIBLE_DRIVER úplně bez hlášky (to je ta zákeřná část).
# enumerate_physical_devices_locked() v mesa runtime tenhle kód bere jako
# „tomuhle drveru nesedí, zkus DRM větev", drmGetDevices2() na Switchi nic
# nenajde a funkce vrátí VK_SUCCESS s PRÁZDNÝM seznamem zařízení. Core pak
# hlásí přesně to, co je v nethersx2-core.log z karty (build 35):
#   (EnumerateGPUs) vkEnumeratePhysicalDevices (1) failed:  (0: VK_SUCCESS)
# Vlastní appky nxvk si proměnnou nastavujou v main() (switch/README.md,
# switch/smoke/nvk_harness.h:138) — port na to zapomněl, takže ji doplňujeme
# tady. Podmíněný blok v C: GL build zůstává bit-za-bit upstream.
if python3 - "$SRC/source/main.c" <<'VKENV'
import sys
path = sys.argv[1]
text = open(path, encoding="utf-8", errors="surrogateescape").read()
if "NVK_I_WANT_A_BROKEN_VULKAN_DRIVER" in text:
    print("main.c: NVK env už patcheno")
    sys.exit(0)
anchor = "int main(void) {\n"
if anchor not in text:
    print("main.c: kotva 'int main(void) {' nenalezena")
    sys.exit(1)
block = (
    "int main(void) {\n"
    "#if defined(USE_VULKAN)\n"
    "  /* CI patch (ci/build-switch.sh), není součást upstreamu:\n"
    "   * nxvk nevydá ani jedno fyzický zařízení, dokud nedostane tenhle\n"
    "   * souhlas — nvk_is_conformant() odmítá Tegru (type=SOC) a v release\n"
    "   * buildu to dělá úplně bez hlášky. */\n"
    "  setenv(\"NVK_I_WANT_A_BROKEN_VULKAN_DRIVER\", \"1\", 1);\n"
    "#endif\n"
)
text = text.replace(anchor, block, 1)
open(path, "w", encoding="utf-8", errors="surrogateescape").write(text)
print("main.c: setenv NVK_I_WANT_A_BROKEN_VULKAN_DRIVER=1 (USE_VULKAN)")
VKENV
then
  key "vk: main.c -> NVK_I_WANT_A_BROKEN_VULKAN_DRIVER=1"
else
  err "vk: patch main.c pro NVK env neprošel — NVK zas vrátí 0 zařízení s VK_SUCCESS"
fi

# ---------------------------------------------------- 7b. log capture pro core
# Hláška z launchere je jen dohad; co dělá emulátor, se nedozvíme vůbec:
# source/imports.c mapuje __android_log_* na PRÁZDNÉ stuby, takže veškerý log
# Android coreu (PCSX2 ConsoleLog) na Switchu zmizí. Dodáme vlastní impl,
# ale zapnutej je jen pokud na kartě existuje /switch/nethersx2/ci-logging.enabled
# — bez toho souboru se build chová přesně jako upstream (žádnej fwrite navic).
mkdir -p "$SRC/source/hooks"
cat > "$SRC/source/hooks/ci_core_log.c" <<'CI_CORE_LOG_C'
/* CI log capture — vygeneroval ho ci/build-switch.sh, není část upstreamu. */
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>

#define CI_LOG_PATH  "/switch/nethersx2/nethersx2-core.log"
#define CI_MARK_PATH "/switch/nethersx2/ci-logging.enabled"

static int ci_enabled = -1;

static int ci_on(void) {
  if (ci_enabled < 0) {
    struct stat st;
    ci_enabled = (stat(CI_MARK_PATH, &st) == 0) ? 1 : 0;
    if (ci_enabled) {
      if (freopen(CI_LOG_PATH, "a", stdout))
        setvbuf(stdout, NULL, _IOLBF, 1024);
      /* Mesa (a tím i NVK) hlásí svoje chyby přes vk_errorf/mesa_log na
       * stderr a ten dosud nikam neved — přesně tam je důvod, proč driver
       * nevydá žádný zařízení. Zapisujeme do stejnýho souboru. */
      if (freopen(CI_LOG_PATH, "a", stderr))
        setvbuf(stderr, NULL, _IOLBF, 1024);
      /* Runtime důkaz, že patch z build-switch.sh (krok 7a) prošel až sem:
       * bez "1" tady NVK nevydá žádný fyzický zařízení. */
      {
        const char *nvk_env = getenv("NVK_I_WANT_A_BROKEN_VULKAN_DRIVER");
        fprintf(stdout, "[CI] log capture ON, NVK_I_WANT_A_BROKEN_VULKAN_DRIVER=%s\n",
                nvk_env ? nvk_env : "(nenastaveno)");
      }
    }
  }
  return ci_enabled;
}

/* main.c se přes to ptá, jestě má bejt Logging/* z ini (marker na kartě) */
int ci_logging_enabled(void) { return ci_on(); }

int ci_android_log_write(int prio, const char *tag, const char *text) {
  if (!ci_on()) return 0;
  fprintf(stdout, "[%d][%s] %s\n", prio, tag ? tag : "-", text ? text : "");
  return 0;
}

int ci_android_log_vprint(int prio, const char *tag, const char *fmt, va_list va) {
  if (!ci_on()) return 0;
  fprintf(stdout, "[%d][%s] ", prio, tag ? tag : "-");
  vfprintf(stdout, fmt, va);
  fputc('\n', stdout);
  return 0;
}

/* Silná verze: slabou definici v imports.c přebije i když ji upstream
 * nezjemnil, protože imports.c ji jen předává do import tabulky. */
int __android_log_print(int prio, const char *tag, const char *fmt, ...) {
  va_list va;
  va_start(va, fmt);
  int r = ci_android_log_vprint(prio, tag, fmt, va);
  va_end(va);
  return r;
}
CI_CORE_LOG_C

# imports.c: původní __android_log_print MUSÍ být weak, jinak dvě silný
# definice; a tabulka musí ukazovat na naše funkce (inak `static` →
# nedá se je přebit z cizího objektu).
if python3 - "$SRC/source/imports.c" <<'PYEOF'
import sys
path = sys.argv[1]
try:
    text = open(path, encoding="utf-8", errors="surrogateescape").read()
except OSError as exc:
    print(f"nelze číst {path}: {exc}")
    sys.exit(1)
subs = [
    # prototypy MUSÍ do imports.c taky — tabulka na sa bere adresa a bez
    # deklarace by to bylo „undeclared identifier"
    ("int __android_log_print(int prio, const char *tag, const char *fmt, ...) {",
     "extern int ci_android_log_write(int prio, const char *tag, const char *text);\n"
     "extern int ci_android_log_vprint(int prio, const char *tag, const char *fmt, va_list va);\n"
     "__attribute__((weak)) int __android_log_print(int prio, const char *tag, const char *fmt, ...) {"),
    ('{ "__android_log_vprint", (uintptr_t)&__android_log_vprint_fake },',
     '{ "__android_log_vprint", (uintptr_t)&ci_android_log_vprint },'),
    ('{ "__android_log_write", (uintptr_t)&__android_log_write_fake },',
     '{ "__android_log_write", (uintptr_t)&ci_android_log_write },'),
]
hits = 0
for find, replace in subs:
    if replace in text:
        hits += 1   # už patcheno — kontrola PRV, ať se prototypy nedvojnasoběj
    elif find in text:
        text = text.replace(find, replace, 1)
        hits += 1
open(path, "w", encoding="utf-8", errors="surrogateescape").write(text)
print(f"imports.c: patcheno {hits}/3")
sys.exit(0 if hits == 3 else 1)
PYEOF
then
  note "log capture jádro: imports.c patcheno"

  # Druhý zádrhel: source/main.c při KAŽDÝM startu vynuluje všech pět
  # Logging/* klíčů („Core logging off: the EE/IOP console formats a lot of
  # strings per frame"), takže je jedno, co máš v nethersx2.ini — vyhodí to
  # i prefs_save() zpět na kartu. Když je marker na kartě, ať ty hodnoty
  # zůstanou na ini anejou na 1, jinak se chováme jako upstream.
  python3 - "$SRC/source/main.c" <<'LOGMAIN'
import sys
path = sys.argv[1]
text = open(path, encoding="utf-8", errors="surrogateescape").read()
keys = ["EnableSystemConsole", "EnableFileLogging", "EnableVerbose",
        "EnableEEConsole", "EnableIOPConsole"]
first = 'prefs_set_string("Logging/EnableSystemConsole", "0");'
if "ci_logging_enabled" in text:
    print("main.c: už patcheno")
    sys.exit(0)
if first not in text:
    print("main.c: vzorek Logging/* nenalezen — log zůstane vypnutej")
    sys.exit(1)
text = text.replace(first,
    'extern int ci_logging_enabled(void);\n'
    '  const int ci_log = ci_logging_enabled();\n'
    '  prefs_set_string("Logging/EnableSystemConsole", ci_log ? "1" : "0");', 1)
for k in keys[1:]:
    text = text.replace('prefs_set_string("Logging/%s", "0");' % k,
                        'prefs_set_string("Logging/%s", ci_log ? "1" : "0");' % k, 1)
open(path, "w", encoding="utf-8", errors="surrogateescape").write(text)
print("main.c: Logging/* respektuje marker")
LOGMAIN
  [ $? -eq 0 ] || warn "main.c patch pro Logging/* neprošel — log bude stručnější"

else
  # Bez patche by naše silná definice narazila na tu upstreamovou a link by
  # selhal — raději captur stáhni celý, ať GL build projde i tak.
  rm -f "$SRC/source/hooks/ci_core_log.c"
  warn "log capture NEAPLIKOVÁN (imports.c vypadá jinak) — .nro se chová jako upstream"
fi

if [ "$VK_ONLY" = 1 ]; then
  key "GL build přeskočen (VK_ONLY=1) — ušetřeno ~4 min"
else
  run "make emulator GL" make -C "$SRC" -j"$JOBS" RENDERER=GL
  cp -f "$SRC/NetherSX2_nx.nro" "$SRC/NetherSX2_nx_gl.nro"
  key "gl=$(stat -c %s "$SRC/NetherSX2_nx_gl.nro")"
fi

if [ -n "$VKSDK" ]; then
  # GL a VK se nesmí linknout spolu (switch-mesa i NVK archivy obsahuj vlastní
  # kopie mesa util/nir/compiler) -> clean mezi nima, stejně jako build_all.sh.
  #
  # Podmíněnej build fix: source/switch/SwitchPosixCompat.cpp definuje writev
  # jen `#if !defined(USE_VULKAN) && !defined(USE_UNIFIED_MESA)`, jenže
  # $(STORAGE_LIBS) (libsmb2 -> smb2_write_to_socket) se ve VK linku objevuje
  # až ZA --start-group s Mesou, takže symbol nikdo nedodá a link padne na
  # "undefined reference to `writev'". Dodáme proto vlastní slabou variantu;
  # slabý znamená, že pokud ji Mesa nabízí taky, vyhraje Mesa.
  # Pozor na umístění: MUSÍ být v source/hooks, ne v source/switch —
  # launcher má SOURCES := source ../source/switch a přeložil by si shim taky.
  cat > "$SRC/source/hooks/ci_writev_shim.c" <<'SHIM'
/* CI shim, ne část upstreamu. Sémantiku (krátkej zápis => return s partial)
 * kopíruje přesně podle readv/writev v SwitchPosixCompat.cpp.
 * Header: picolibc nemá sys/uio.h, iovec žije v sys/_iovec.h (stejně jako
 * to dělá tenhle upstream soubor). */
#include <errno.h>
#include <sys/_iovec.h>
#include <sys/types.h>
#include <unistd.h>

__attribute__((weak))
ssize_t writev(int fd, const struct iovec *vectors, int count) {
    ssize_t total = 0;
    for (int index = 0; index < count; ++index) {
        const ssize_t result = write(fd, vectors[index].iov_base, vectors[index].iov_len);
        if (result < 0)
            return total ? total : -1;
        total += result;
        if ((size_t)result < vectors[index].iov_len)
            break;
    }
    return total;
}
SHIM
  note "psán weak writev shim pro VK link (source/hooks, ne source/switch)"

  # Dva symboly ve VK linku, který Mesa sama nedává, protože cross-build pro
  # Switch nemá Vulkan *loader*: vkEnumerateInstanceVersion a
  # vkEnumerateInstanceLayerProperties. Emulator je volá ještě *před*
  # vkCreateInstance, takže je dodáváme slabě s hodnotama, který na Switchi
  # platěj (1.3, nula vrstev).
  #
  # VK_KHR_SURFACE: TOHLE SE TÝKÁ — a proto jsme tu tu funkci odstranili.
  # Předchozí verze tohohle souboru měla i vkEnumerateInstanceExtensionProperties
  # vracející nula extenzí. Jenže upstream si přes tu samou funkci
  # (source/hooks/vk.c:998, vkEnumerateInstanceExtensionProperties_hook)
  # zjišťuje, jaký instance extenze smí vůbec povolit, a akorát do toho
  # seznamu přidá VK_KHR_android_surface (kterej CreateInstance_hook přejmenuje
  # na VK_NN_vi_surface). S naší nulou dostalo jádro prázdnnej seznam a
  # skončilo na „Vulkan: Missing required extension VK_KHR_surface“ — přesně
  # tak to hlásí nethersx2-core.log z hardware (GT3, EU/AU iso). Tuhle funkci
  # proto NEDEFINUJEME a necháme vygenerovat forwarder na Mesu, která
  # skutečnej seznam NVK umí vydat.
  cat > "$SRC/source/hooks/ci_vk_loader_shim.c" <<'VKSHIM'
/* CI shim, ne část upstreamu — sémantika je přesně ta, co vyžaduje Vulkan
 * spec pro loader-level funkce bez načtený instance: žádná vrstva, žádná
 * instance extension, verze 1.3 (co NVK na Switchu skutečně reportuje).
 *
 * Vědomě se nejmenujeme podle <vulkan/vulkan.h>: ten hlavičkový cestu vidí
 * jen VK build, GL build by se na shimu ulil na missing headeru. V C se
 * nepojmenujou, VkResult je enum => int32, VkLayerProperties/VkExtension-
 * Properties nikdy nepíšeme do paměti, takže stačí spránej podpis. */
#include <stdint.h>

typedef enum { VK_SUCCESS = 0, VK_INCOMPLETE = 5 } VkResult_t;
#define VK_API_VERSION_1_3 ((uint32_t)((1u << 22) | (3u << 12)))

__attribute__((weak))
VkResult_t vkEnumerateInstanceVersion(uint32_t *pApiVersion) {
    if (pApiVersion != 0)
        *pApiVersion = VK_API_VERSION_1_3;
    return VK_SUCCESS;
}

__attribute__((weak))
VkResult_t vkEnumerateInstanceLayerProperties(uint32_t *pCount, void *pProperties) {
    (void)pProperties;
    if (pCount == 0)
        return VK_INCOMPLETE;
    *pCount = 0; /* na Switchu žádná validation layer není */
    return VK_SUCCESS;
}

VKSHIM
  note "psán weak VK loader shim (instance version/layer/extension enumeration)"

  # ---------------------------------------------------------------- 7d. diag->stderr
  # Diagnostika portu píše do sdmc:/switch/nethersx2/nethersx2-vulkan.log, jenže
  # z karty (build 37) ten soubor nikdo nedostal — a přitom právě v něm je
  # „vkCreateViSurfaceNN window=… result=…". Zrcadlíme proto každý vk_diag_note
  # i na stderr: ten si ci_core_log.c přesměruje do nethersx2-core.log, který
  # z karty chodí spolehlivě. Navíc si vypíšeme, jestli se ten soubor vůbec
  # podařilo otevřít — to je jediné, co o té záhadě rozhodne.
  if python3 - "$SRC/source/hooks/vk.c" <<'VKDIAGMIRROR'
import sys

path = sys.argv[1]
text = open(path, encoding="utf-8", errors="surrogateescape").read()
if "NSX_VK_DIAG_STDERR" in text:
    print("vk.c: diag mirror už patchnuto")
    sys.exit(0)

done = 0

note_anchor = "void\nvk_diag_note(const char *format, ...) {\n"
note_patch = (note_anchor +
    "  /* NSX_VK_DIAG_STDERR: stejnou zprávu i na stderr — log capture na\n"
    "   * kartě ho bere do nethersx2-core.log, takže diag nezávisí na tom,\n"
    "   * jestli se povedlo otevřít nethersx2-vulkan.log. */\n"
    "  { va_list nsx_mirror; va_start(nsx_mirror, format);\n"
    "    fputs(\"[VK] \", stderr); vfprintf(stderr, format, nsx_mirror);\n"
    "    fputc('\\n', stderr); va_end(nsx_mirror); }\n")
if note_anchor in text:
    text = text.replace(note_anchor, note_patch, 1)
    done += 1

reset_anchor = ('    fprintf(vk_diag_file, "NetherSX2 Vulkan diagnostic %s\\n", '
                'NETHERSX2_VERSION);\n'
                "    fflush(vk_diag_file);\n"
                "    fsync(fileno(vk_diag_file));\n"
                "  }\n")
reset_patch = reset_anchor + (
    "  fprintf(stderr, \"[VK] diag soubor nethersx2-vulkan.log: %s\\n\",\n"
    "          vk_diag_file ? \"otevren\" : \"SE NEPOVEDLO OTEVRIT\");\n")
if reset_anchor in text:
    text = text.replace(reset_anchor, reset_patch, 1)
    done += 1

open(path, "w", encoding="utf-8", errors="surrogateescape").write(text)
print("vk.c: diag mirror patcheno %d/2" % done)
sys.exit(0 if done == 2 else 1)
VKDIAGMIRROR
  then
    key "vk: diag zrcadlena do stderr (nethersx2-core.log)"
  else
    warn "vk.c patch pro diag mirror neprošel — zůstává jen nethersx2-vulkan.log"
  fi
  # Unified větev Makefile linkuje -lvulkan -lEGL -lGLESv2 -lglapi + mesa util,
  # ALN z ní chybí -ldrm_nouveau / -lexpat / -lelf, který Mesa/NVK i switch-mesa
  # EGL implicitně čekaj. LIBS si přepsat netroufáme (je to := v Makefile a
  # duplikovat upstream list je křehký), místo toho ty archivy nacpeme do
  # libvulkan.a -- ar na tohle existuje precisely.
  # Unified větev Makefile má
  #   LIBS = --start-group -lvulkan -lEGL -lGLESv2 -lglapi -lmesa_util* …
  #          --end-group -lcurl -lelf -lexpat -lz -lzstd
  # tj. nxvk Mesu (libvulkan.a) a switch-mesa portlib libEGL.a v JEDNÉ groupě.
  # Oba obsahujou Mesa util/glsl/hash_table objekty -> „multiple definition of
  # _mesa_hash_data / glsl_type_* / half_float". První pomoc byla vyhodit
  # kolizní členy z libvulkan.a — selhalo, protože_membery nesou i unikátní
  # symboly (vkCreateDevice, vkGetInstanceProcAddr), jež pak chyběly. Správně
  # je nechat rozhodnout linker: -z muldefs vezme první definici, a tou je
  # díky pořadí v groupě nxvk Mesa, která k NVK driverovi patří ✓.
  #
  # LDFLAGS se nedaj rozšířit z příkazový řádky (přepsáním by zmizel
  # -specs=switch.specs), takže je potřeba je doplnit v Makefilu.
  if [ -f "$SRC/Makefile" ] && ! grep -q 'z,muldefs' "$SRC/Makefile"; then
    python3 - "$SRC/Makefile" <<'MULDEFS'
import sys
path = sys.argv[1]
text = open(path, encoding="utf-8", errors="surrogateescape").read()
needle = "LDFLAGS\t=\t-specs=$(DEVKITPRO)/libnx/switch.specs"
if needle in text:
    text = text.replace(needle, "LDFLAGS\t=\t-Wl,-z,muldefs -specs=$(DEVKITPRO)/libnx/switch.specs", 1)
    open(path, "w", encoding="utf-8", errors="surrogateescape").write(text)
    print("Makefile: LDFLAGS + -Wl,-z,muldefs")
    sys.exit(0)
print("Makefile: wzorec LDFLAGS nenalezen")
sys.exit(1)
MULDEFS
    [ $? -eq 0 ] && key "Makefile patchen o -z muldefs" || warn "-z muldefs do Makefile nešlo zapsat, VK pokus pravděpodobně spadne na duplicitách"
  fi

  # -lelf je v LIBS, ale žádná switch portlibs libelf nemaj — prázdrnej
  # archiv stačí, nikdo z něj symboly nevolá
  if [ ! -f "$VKSDK/lib/libelf.a" ] && [ ! -f "$PORTLIBS/lib/libelf.a" ]; then
    aarch64-none-elf-ar rcs "$VKSDK/lib/libelf.a" >/dev/null 2>&1
    key "prázdrnej libelf.a (LIBS chce -lelf, portlibs ho nemá)"
  fi

  # LIBS unified větve NEobsahuje -ldrm_nouveau, ale nouveau_wsi z MESA SDK ho
  # volá -> navážeme ho do libvulkan.a. Pozor: `create` v MRI archiv přepíše,
  # tudíž jako prvního člena musíme přidat ten stávající.
  if [ -f "$PORTLIBS/lib/libdrm_nouveau.a" ] && [ -f "$VKSDK/lib/libvulkan.a" ]; then
    m=$(mktemp)
    printf 'create %s/lib/libvulkan.a\naddlib %s/lib/libvulkan.a\naddlib %s/lib/libdrm_nouveau.a\nsave\nend\n' \
      "$VKSDK" "$VKSDK" "$PORTLIBS" > "$m"
    if aarch64-none-elf-ar -M < "$m" > "$WORK/logs/ar-extend.log" 2>&1; then
      key "libvulkan.a + libdrm_nouveau.a = $(stat -c %s "$VKSDK/lib/libvulkan.a") B"
    else
      echo "::error::navázání libdrm_nouveau.a selhalo"
      tail -3 "$WORK/logs/ar-extend.log" | shortify | bash "$HERE/annotate.sh" error 3
    fi
    rm -f "$m"
  fi

  make -C "$SRC" clean >/dev/null 2>&1
  # primárně unified SDK: má -lEGL/-lGLESv2/-lglapi z portlibs, kdežto flat
  # větev v Makefile žádný EGL link neobsahuje => egl* zůstanou nedefinovaný
  vk_ok=0
  # Pořadí zájmů: 1) nxvk package + vygenerovanej loader (nsx_vk_pkg),
  # 2) unified MESA_SDK_ROOT větev Makefile, 3) plochých 23 archivů.
  # Dvojka a trojka zůstávají jako pojistka pro případ, že by nám někdo
  # do artifactu naskladal jinej neţ nxvk-own SDK.
  if nsx_vk_pkg; then
    vk_ok=1
  else
    make -C "$SRC" clean >/dev/null 2>&1
    # LTOFLAGS= vypne -flto/-fuse-linker-plugin: archivy z Mesa SDK jsou LTO IR
    # z jinýho gcc, než je v imageu, a to produkuje „error op…“ bez textu.
    if run_soft "make emulator VK (MESA_SDK_ROOT)" make -C "$SRC" -j"$JOBS" RENDERER=VK MESA_SDK_ROOT="$VKSDK" LTOFLAGS= $VKDIAG_MK; then
      vk_ok=1
    else
      # bez cleanu by druhej pokus zdědil objekty s -DUSE_UNIFIED_MESA
      make -C "$SRC" clean >/dev/null 2>&1
      if run_soft "make emulator VK (flat vulkan/)" make -C "$SRC" -j"$JOBS" RENDERER=VK LTOFLAGS= $VKDIAG_MK; then
        vk_ok=1
      fi
    fi
  fi
  if [ "$vk_ok" = "1" ]; then
    cp -f "$SRC/NetherSX2_nx.nro" "$SRC/NetherSX2_nx_vk.nro"
    key "vk=$(stat -c %s "$SRC/NetherSX2_nx_vk.nro")"
  else
    # Konec hádání: kdo ty symboly má dodat. Projedeme všechny archivy v MESA SDK
  # i v portlibs, uděláme index definovaných symbolů (jedním nm průchodem, ne
  # 20×) a pro každý nevyřešenej symbol řekneme, kde leží — nebo že nikde, což
  # znamená, že nxvk Mesa ho při cross-buildu vůbec nevygeneroval.
  DEFS="$WORK/defs.idx"; : > "$DEFS"
  for a in "$VKSDK"/lib/*.a "$PORTLIBS"/lib/*.a; do
    [ -e "$a" ] || continue
    an=$(basename "$a")
    aarch64-none-elf-nm --defined-only --extern-only "$a" 2>/dev/null \
      | awk -v A="$an" '/ [TWViI] /{print $NF, A}' >> "$DEFS"
  done
  { echo "census: $(wc -l < "$DEFS" | tr -d ' ') definic v $(ls "$VKSDK"/lib/*.a "$PORTLIBS"/lib/*.a 2>/dev/null | wc -l | tr -d ' ') archivech"
    grep -ho "undefined reference to \`[A-Za-z0-9_]*'" "$WORK"/logs/soft-*.log 2>/dev/null \
      | sed "s/.*\`\([A-Za-z0-9_]*\)'/\1/" | sort -u \
      | awk '/^vk/{v[NR]=$0; next} {o[++n]=$0} END{for(i=1;i<=NR;i++) if(v[i]!="") print v[i]; for(i=1;i<=n;i++) print o[i]}' \
      | head -24 | while read -r sym; do
        [ -n "$sym" ] || continue
        hit=$(awk -v S="$sym" '$1==S{printf "%s ", $2}' "$DEFS" | sed 's/ *$//')
        echo "$sym -> ${hit:-NIKDE v SDK ani portlibs}"
      done; } | bash "$HERE/annotate.sh" "error+" 16

  if [ "$VK_ONLY" = 1 ]; then
    die "VK_ONLY=1 a žádná VK binárka neprošla (MESA_SDK_ROOT ani flat) — GL fallback neděláme"
  fi
  warn "VK build selhal — GL binárka zůstává, launcher bude potřebovat Renderer=OpenGL"
    key "vk=SELHAL"
    VKSDK=""
  fi
else
  if [ "$VK_ONLY" = 1 ]; then
    die "VK_ONLY=1, ale VULKAN_SDK_DIR/mesa-sdk je prázdný — bez Mesa SDK se VK nedá linknout"
  fi
  warn "VK binárka se nebuildí (chybí Mesa/NVK SDK) -> v launcheru je potřeba Renderer=OpenGL"
fi

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
if [ -f "$SRC/NetherSX2_nx_gl.nro" ]; then
  cp -f "$SRC/NetherSX2_nx_gl.nro" "$SRC/launcher/romfs/emu/NetherSX2_nx_gl.nro"
else
  key "romfs/emu bez GL binárky (VK_ONLY) — launcher musí bejt na Renderer=Vulkan"
fi
if [ -n "$VKSDK" ] && [ -f "$SRC/NetherSX2_nx_vk.nro" ]; then
  cp -f "$SRC/NetherSX2_nx_vk.nro" "$SRC/launcher/romfs/emu/NetherSX2_nx_vk.nro"
  note "romfs má oba rendery (GL + VK)"
fi
du -sh "$SRC/launcher/romfs" | bash "$HERE/annotate.sh" notice 1

# --------------------------------- 8b. launcher: povolit extrakci + vlastní diagnostiku
note "=== stage 8b: patch launcher ==="
LM="$SRC/launcher/source/main.cpp"

if [ -f "$LM" ]; then
  python3 - "$LM" <<'PYEOF'
import sys
path = sys.argv[1]
text = open(path, encoding="utf-8", errors="surrogateescape").read()

edits = [
    # (1) ensureEmu volá po extrakci JEŠTĚ sameNroBuild(src,dst) a když ten
    #     nesedí, launcher hlásí "Could not extract emulator files (SD full?)"
    #     — přestože soubor na kartě je a SD plná není (enoughFreeSpace se
    #     používá jen u paste ve file manageru, ne tady).
    ("  return extractFromRomfs(src,dst,true)&&sameNroBuild(src,dst);",
     "  return extractFromRomfs(src,dst,true);"),
    # (2) sameNroBuild čte NRO0 magic na 0x10, jenze tam sedi offset
    #     read-only segmentu; magic je na 0x0. Kontrola teda nemuze projit
    #     nikdy, tzn. 55 MB se kopiruje pri kazdym startu a protoze navic
    #     selze, viz (1).
    ("    bool ok=fseek(file,0x10,SEEK_SET)==0",
     "    bool ok=fseek(file,0x0,SEEK_SET)==0"),
    # (3) fsync() na souboru libnx/newlib-supported není; upstream ho má jako
    #     fatální, což zahodilo i jinak povedenej zápis. Synchronizace SD se na
    #     Switchu dělá přes fsdevCommitDevice("sdmc"), viz next edit.
    ("  if(fflush(out)!=0||fsync(fileno(out))!=0) ok=false;",
     "  if(fflush(out)!=0) ok=false;\n  (void)fsync(fileno(out));"),
    # (4) overlay volá beginUiFrame() -> appletMainLoop(); jestliže Horizon
    #     zrovne nechce frame (docking, applet přepnutí), g_setupAborted se
    #     zahozi do kopírovacího cyklu a ten ukončí UPROSTRED souboru.
    #     Vkládáme jen reset flagu: UI se příští chunk zkusí překreslit znova.
    ("    if(g_setupAborted){ ok=false; break; }",
     "    if(g_setupAborted) g_setupAborted=false;"),
    # (5) kontrola velikosti hned po fclose(): bez commitu umí FAT vrstvy
    #     vrátit starej st_size -> „size mismatch" a zahozenej soubor.
    ("  struct stat temporary{};",
     "  fsdevCommitDevice(\"sdmc\");\n  struct stat temporary{};"),
    # (6) jediny bod, kde jsou k dispozici vsechny tri priznaky + obe cesty
    ("    willChain=haveCore&&haveEmulator&&haveResources&&configSaved;",
     "    willChain=haveCore&&haveEmulator&&haveResources&&configSaved;\n"
     "    { extern void ciLaunchDiag(const char *,const char *,const char *,const char *,bool,bool,bool,bool);\n"
     "      ciLaunchDiag(coreSource.c_str(),coreDestination.c_str(),emulatorSource.c_str(),emulatorDestination.c_str(),\n"
     "                    haveCore,haveEmulator,haveResources,configSaved); }"),
]
done = 0
for find, repl in edits:
    if repl in text:
        done += 1          # uz patcheno (idempotentni re-run)
    elif find in text:
        text = text.replace(find, repl, 1)
        done += 1
open(path, "w", encoding="utf-8", errors="surrogateescape").write(text)
n_edits = len(edits)
print("main.cpp: patcheno %d/%d" % (done, n_edits))
sys.exit(0 if done == n_edits else 1)
PYEOF
  if [ $? -eq 0 ]; then
    key "launcher: ensureEmu uvolněn, seek 0x0, fsync/abort/commit opravy, diagnostika"
  else
    warn "launcher patch NEAPLIKOVÁN — upstream posunul řádky, .nro se chová jako upstream"
  fi

  cat > "$SRC/launcher/source/ci_launch_diag.cpp" <<'LAUNCH_DIAG_CPP'
#include <dirent.h>
#include <sys/stat.h>
#include <sys/statvfs.h>
#include <switch.h>            // fsdevCommitDevice("sdmc")
#include <unistd.h>            // fsync, fileno
#include <cerrno>
#include <cstdio>
#include <cstring>
#include <ctime>
#include <string>

namespace {
constexpr const char *DIAG_LOG = "sdmc:/switch/nethersx2/launcher-diag.log";

void hexHead(FILE *out, const char *label, const char *path) {
  FILE *f = std::fopen(path, "rb");
  if (!f) { std::fprintf(out, "  %-13s %s -> fopen selhalo (%s)\n", label, path, std::strerror(errno)); return; }
  unsigned char bytes[32] = {};
  const size_t got = std::fread(bytes, 1, sizeof(bytes), f);
  std::fclose(f);
  std::fprintf(out, "  %-13s prvnich %zu bajtu:", label, got);
  for (size_t i = 0; i < got; ++i) std::fprintf(out, " %02x", bytes[i]);
  std::fprintf(out, "  ascii:");
  for (size_t i = 0; i < got; ++i) std::fputc((bytes[i] >= 32 && bytes[i] < 127) ? bytes[i] : '.', out);
  std::fputc('\n', out);
}

void describe(FILE *out, const char *label, const char *path) {
  struct stat st {};
  if (path && *path && stat(path, &st) == 0 && S_ISREG(st.st_mode))
    std::fprintf(out, "  %-13s %s = %lld B\n", label, path, static_cast<long long>(st.st_size));
  else
    std::fprintf(out, "  %-13s %s CHYBI (%s)\n", label, path ? path : "(null)", std::strerror(errno));
}

void countIn(FILE *out, const char *label, const char *path) {
  DIR *dir = opendir(path);
  if (!dir) { std::fprintf(out, "  %-13s %s nejde otevrit (%s)\n", label, path, std::strerror(errno)); return; }
  int files = 0;
  while (readdir(dir)) ++files;
  closedir(dir);
  std::fprintf(out, "  %-13s %s = %d polozek\n", label, path, files > 2 ? files - 2 : files);
}

// Active sonda: totéž, co dělá extractFromRomfs(), krok po kroku. Důvod —
// „Could not extract emulator files (SD full?)" je jediná hláška, kterou
// launcher o selhání vypustí, a selhat může fopen/write/fflush/fsync/size/
// rename. Tohle rozliší, který z těch šesti to je, bez nutnosti logu coreu.
void probe(FILE *out, const char *dir) {
  std::fprintf(out, "  sonda %s:\n", dir);
  if (mkdir(dir, 0777) != 0 && errno != EEXIST) {
    std::fprintf(out, "    mkdir       = %s\n", std::strerror(errno));
    return;
  }
  const std::string tmp = std::string(dir) + "/.ci-probe.tmp";
  const std::string dst = std::string(dir) + "/.ci-probe";
  FILE *f = std::fopen(tmp.c_str(), "wb");
  if (!f) { std::fprintf(out, "    fopen wb    = %s\n", std::strerror(errno)); return; }
  std::fprintf(out, "    fopen wb    = ok\n");
  char buf[4096];
  std::memset(buf, 0x5a, sizeof(buf));
  const size_t wrote = std::fwrite(buf, 1, sizeof(buf), f);
  std::fprintf(out, "    fwrite      = %zu / %zu\n", wrote, sizeof(buf));
  const int flushed = std::fflush(f);
  const int synced = fsync(fileno(f));
  const int syncErrno = errno;
  const int closed = std::fclose(f);
  std::fprintf(out, "    fflush=%d fsync=%d(%s) fclose=%d\n", flushed, synced, std::strerror(syncErrno), closed);
  fsdevCommitDevice("sdmc");
  struct stat st {};
  const int st1 = stat(tmp.c_str(), &st);
  std::fprintf(out, "    stat tmp    = %d size=%lld\n", st1, static_cast<long long>(st.st_size));
  const int renamed = rename(tmp.c_str(), dst.c_str());
  std::fprintf(out, "    rename      = %d%s\n", renamed, renamed ? std::strerror(errno) : "");
  const int st2 = stat(dst.c_str(), &st);
  std::fprintf(out, "    stat dst    = %d size=%lld\n", st2, static_cast<long long>(st.st_size));
  remove(tmp.c_str());
  remove(dst.c_str());
  fsdevCommitDevice("sdmc");
}
} // namespace

extern void ciLaunchDiag(const char *coreSource, const char *coreDestination,
                         const char *emulatorSource, const char *emulatorDestination,
                         bool haveCore, bool haveEmulator, bool haveResources, bool configSaved) {
  FILE *out = std::fopen(DIAG_LOG, "a");
  if (!out) return;   // launcher kvuli tomu nesmi spadnout
  std::fprintf(out, "--- start hry %lld ---\n", static_cast<long long>(std::time(nullptr)));
  std::fprintf(out, "  priznaky: core=%d emu=%d zdrojaky=%d config=%d\n",
               haveCore ? 1 : 0, haveEmulator ? 1 : 0, haveResources ? 1 : 0, configSaved ? 1 : 0);
  describe(out, "core zdroj", coreSource);
  describe(out, "core cil", coreDestination);
  describe(out, "emu zdroj", emulatorSource);
  describe(out, "emu cil", emulatorDestination);
  countIn(out, "cores dir", "sdmc:/switch/nethersx2/cores");
  countIn(out, ".emu dir", "sdmc:/switch/nethersx2/.emu");
  struct statvfs fs {};
  if (statvfs("sdmc:/", &fs) == 0 && fs.f_frsize)
    std::fprintf(out, "  volno na karte = %llu MB\n",
                 static_cast<unsigned long long>(fs.f_bavail) * fs.f_frsize / (1024ULL * 1024ULL));
  else
    std::fprintf(out, "  volno na karte: statvfs selhalo (%s)\n", std::strerror(errno));
  hexHead(out, "emu zdroj", emulatorSource);
  hexHead(out, "emu cil", emulatorDestination);
  probe(out, "sdmc:/switch/nethersx2/cores");
  probe(out, "sdmc:/switch/nethersx2/.emu");
  std::fflush(out);
  std::fclose(out);
}
LAUNCH_DIAG_CPP
  key "launcher: ci_launch_diag.cpp zapsen ($(stat -c %s "$SRC/launcher/source/ci_launch_diag.cpp") B)"
else
  warn "launcher/source/main.cpp nenalezen — diagnostika se nepokouší"
fi

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
for attempt in "" "PREFIX=$DEVKITPRO/devkitA64/bin/aarch64-none-elf-"; do
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
cp -f "$SRC/NetherSX2_nx_vk.nro" "$OUT/" 2>/dev/null
key "nro=$(stat -c %s "$OUT/NetherSX2.nro")"

# Poslední pojištění, který nic nestojí: ověříme se v *exportovaným* souboru,
# že v něm opravdu jsou obě renderovací binárky. RomFS má tabulku jmen
# souborů v plaintextu, takže stací grep — hactool na to nepotřebujeme.
# Bez tohohle testu by nám uniklo třeba to, že romfs/emu zůstalo prázdný a
# launcher by na kartě hlásil „Could not extract emulator files" — přesně
# tu hlášku, se kterou sme tohle celý začínali.
for n in emu/NetherSX2_nx_vk.nro emu/NetherSX2_nx_gl.nro cores/libemucore.so \
         res/GameIndex.yaml; do
  name=$(basename "$n")
  if grep -qa "$name" "$OUT/NetherSX2.nro"; then
    note "  uvnitř .nro: $name"
  elif [ "$VK_ONLY" = "1" ] && [ "$name" = "NetherSX2_nx_gl.nro" ]; then
    note "  v .nro chybí NetherSX2_nx_gl.nro — v pořádku, VK_ONLY=1"
  else
    err "  V .nRO CHYBÍ $name — balík je nepoužitelný"
  fi
done
key "sha256=$(sha256sum "$OUT/NetherSX2.nro" | cut -c1-16)"
bash "$HERE/annotate.sh" "notice+" 40 < "$DIGEST"
note "SD layout: sdmc:/switch/NetherSX2.nro + sdmc:/switch/nethersx2/ (BIOS si kladeš sám)"
exit 0
