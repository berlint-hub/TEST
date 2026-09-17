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

note "=== stage 7: emulátor RENDERER=GL ==="
make -C "$SRC" clean >/dev/null 2>&1
# ---------------------------------------------------- 7a. log capture pro core
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
#include <sys/stat.h>

#define CI_LOG_PATH  "/switch/nethersx2/nethersx2-core.log"
#define CI_MARK_PATH "/switch/nethersx2/ci-logging.enabled"

static int ci_enabled = -1;

static int ci_on(void) {
  if (ci_enabled < 0) {
    struct stat st;
    ci_enabled = (stat(CI_MARK_PATH, &st) == 0) ? 1 : 0;
    if (ci_enabled && freopen(CI_LOG_PATH, "a", stdout))
      setvbuf(stdout, NULL, _IOLBF, 1024);
  }
  return ci_enabled;
}

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
else
  # Bez patche by naše silná definice narazila na tu upstreamovou a link by
  # selhal — raději captur stáhni celý, ať GL build projde i tak.
  rm -f "$SRC/source/hooks/ci_core_log.c"
  warn "log capture NEAPLIKOVÁN (imports.c vypadá jinak) — .nro se chová jako upstream"
fi

run "make emulator GL" make -C "$SRC" -j"$JOBS" RENDERER=GL
cp -f "$SRC/NetherSX2_nx.nro" "$SRC/NetherSX2_nx_gl.nro"
key "gl=$(stat -c %s "$SRC/NetherSX2_nx_gl.nro")"

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

  # Dva další chybějící symboly ve VK linku: vkEnumerateInstanceVersion a
  # vkEnumerateInstanceLayerProperties. Mesa je kompiluje jen když je v buildu
  # Vulkan *loader* — cross-build pro Switch žádnej loader nemá, proto je
  # nemaj ani libvulkan_runtime.a, ani plochejch 23 archivů. Emulator ale oba
  # volá ještě *před* vkCreateInstance (zjišťuje verzi a vrstvy), tudíž je
  # musíme dodat sami. Slabě, aby je Mesa přebila, až je dodá taky.
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

__attribute__((weak))
VkResult_t vkEnumerateInstanceExtensionProperties(const char *pLayerName,
                                                  uint32_t *pCount,
                                                  void *pProperties) {
    (void)pLayerName;
    (void)pProperties;
    if (pCount == 0)
        return VK_INCOMPLETE;
    *pCount = 0;
    return VK_SUCCESS;
}
VKSHIM
  note "psán weak VK loader shim (instance version/layer/extension enumeration)"
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
  # LTOFLAGS= vypne -flto/-fuse-linker-plugin v Makefilu: archivy z Mesa SDK
  # jsou LTO IR z jiného gcc než ten, co je zrovna v imageu, a přesně to
  # produkuje „ld: <archive>(<member>): error op…“ bez užitečnýho textu.
  if run_soft "make emulator VK (MESA_SDK_ROOT)" make -C "$SRC" -j"$JOBS" RENDERER=VK MESA_SDK_ROOT="$VKSDK" LTOFLAGS=; then
    vk_ok=1
  else
    # bez cleanu by druhej pokus zdědil objekty s -DUSE_UNIFIED_MESA
    make -C "$SRC" clean >/dev/null 2>&1
    if run_soft "make emulator VK (flat vulkan/)" make -C "$SRC" -j"$JOBS" RENDERER=VK LTOFLAGS=; then
      vk_ok=1
    fi
  fi
  if [ "$vk_ok" = "1" ]; then
    cp -f "$SRC/NetherSX2_nx.nro" "$SRC/NetherSX2_nx_vk.nro"
    key "vk=$(stat -c %s "$SRC/NetherSX2_nx_vk.nro")"
  else
    warn "VK build selhal — GL binárka zůstává, launcher bude potřebovat Renderer=OpenGL"
    key "vk=SELHAL"
    VKSDK=""
  fi
else
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
cp -f "$SRC/NetherSX2_nx_gl.nro" "$SRC/launcher/romfs/emu/NetherSX2_nx_gl.nro"
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
    # (3) jediny bod, kde jsou k dispozici vsechny tri priznaky + obe cesty
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
print("main.cpp: patcheno %d/3" % done)
sys.exit(0 if done == 3 else 1)
PYEOF
  if [ $? -eq 0 ]; then
    key "launcher: ensureEmu uvolněn + seek 0x0 + vložená diagnostika"
  else
    warn "launcher patch NEAPLIKOVÁN — upstream posunul řádky, .nro se chová jako upstream"
  fi

  cat > "$SRC/launcher/source/ci_launch_diag.cpp" <<'LAUNCH_DIAG_CPP'
// CI diagnostika launcheru — generuje ji ci/build-switch.sh, NENÍ část upstreamu.
// Důvod: „Could not extract emulator files (SD full?)" je jen dohad. Reálná
// příčina je v extractFromRomfs() (stat na romfs zdrojáku, chybějící adresář,
// rename, fsync) a launcher ji nikam nepíše. Tohle ji vypíše na kartu.
#include <dirent.h>
#include <sys/stat.h>
#include <sys/statvfs.h>
#include <cerrno>
#include <cstdio>
#include <cstring>
#include <ctime>

namespace {
constexpr const char *DIAG_LOG = "sdmc:/switch/nethersx2/launcher-diag.log";

void hexHead(FILE *out, const char *label, const char *path) {
  FILE *f = std::fopen(path, "rb");
  if (!f) { std::fprintf(out, "  %-13s %s -> fopen selhalo (%s)\n", label, path, std::strerror(errno)); return; }
  unsigned char bytes[32] = {};
  const size_t got = std::fread(bytes, 1, sizeof(bytes), f);
  std::fclose(f);
  std::fprintf(out, "  %-13s prvních %zu bajtů:", label, got);
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
    std::fprintf(out, "  %-13s %s CHYBÍ (%s)\n", label, path ? path : "(null)", std::strerror(errno));
}

void countIn(FILE *out, const char *label, const char *path) {
  DIR *dir = opendir(path);
  if (!dir) { std::fprintf(out, "  %-13s %s nejde otevřít (%s)\n", label, path, std::strerror(errno)); return; }
  int files = 0;
  while (readdir(dir)) ++files;
  closedir(dir);
  std::fprintf(out, "  %-13s %s = %d položek\n", label, path, files > 2 ? files - 2 : files);
}
} // namespace

extern void ciLaunchDiag(const char *coreSource, const char *coreDestination,
                         const char *emulatorSource, const char *emulatorDestination,
                         bool haveCore, bool haveEmulator, bool haveResources, bool configSaved) {
  FILE *out = std::fopen(DIAG_LOG, "a");
  if (!out) return;  // bez toho si launcher jen tak nepovzdechne
  std::fprintf(out, "--- start hry %lld ---\n", static_cast<long long>(std::time(nullptr)));
  std::fprintf(out, "  příznaky: core=%d emu=%d zdrojáky=%d config=%d\n",
               haveCore ? 1 : 0, haveEmulator ? 1 : 0, haveResources ? 1 : 0, configSaved ? 1 : 0);
  describe(out, "core zdroj", coreSource);
  describe(out, "core cíl", coreDestination);
  describe(out, "emu zdroj", emulatorSource);
  describe(out, "emu cíl", emulatorDestination);
  countIn(out, "cores dir", "sdmc:/switch/nethersx2/cores");
  countIn(out, ".emu dir", "sdmc:/switch/nethersx2/.emu");
  struct statvfs fs {};
  if (statvfs("sdmc:/", &fs) == 0 && fs.f_frsize)
    std::fprintf(out, "  volno na kartě = %llu MB (bloky %llu x %u B)\n",
                 static_cast<unsigned long long>(fs.f_bavail) * fs.f_frsize / (1024 * 1024),
                 static_cast<unsigned long long>(fs.f_bavail), static_cast<unsigned>(fs.f_frsize));
  else
    std::fprintf(out, "  volno na kartě: statvfs selhalo (%s)\n", std::strerror(errno));
  hexHead(out, "emu zdroj", emulatorSource);
  hexHead(out, "emu cíl", emulatorDestination);
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
key "sha256=$(sha256sum "$OUT/NetherSX2.nro" | cut -c1-16)"
bash "$HERE/annotate.sh" "notice+" 40 < "$DIGEST"
note "SD layout: sdmc:/switch/NetherSX2.nro + sdmc:/switch/nethersx2/ (BIOS si kladeš sám)"
exit 0
