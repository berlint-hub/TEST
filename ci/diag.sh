#!/usr/bin/env bash
# Diagnostika nástrojové řetězce uvnitř GitHub Actions.
#
# Proč annotace: sandbox, ze kterého CI sledujeme, nedosáhne na raw logy
# (productionresultssa15.blob.core.windows.net je blokovaný), ale REST API s
# annotacemi ano. Každé zjištění se tedy tiskne i jako ::notice::/::error::.
set +e

NOTICE=0
ERR=0

note() { echo "::notice::$*"; }
err()  { echo "::error::$*"; ERR=$((ERR+1)); }

# $1 = popisek, zbytek = příkaz
probe() {
  local label="$1"; shift
  local out rc
  out=$("$@" 2>&1); rc=$?
  local first
  first=$(printf '%s\n' "$out" | grep -v '^[[:space:]]*$' | head -1)
  first=$(printf '%s' "$first" | tr -d '\r' | cut -c1-120)
  if [ "$rc" -eq 0 ] && [ -n "$first" ]; then
    note "$label = $first"
  else
    err "$label SELHALO (rc=$rc): $first"
  fi
}

dir() {
  local label="$1" path="$2"
  if [ -d "$path" ]; then
    note "$label OK ($(find "$path" -maxdepth 1 | wc -l) položek): $(ls "$path" 2>/dev/null | head -12 | tr '\n' ' ')"
  else
    err "$label CHYBÍ: $path"
  fi
}

echo "===== PROSTŘEDÍ ====="
echo "DEVKITPRO=${DEVKITPRO:-<nenastaveno>}"
echo "DEVKITA64=${DEVKITA64:-<nenastaveno>}"
echo "PORTLIBS=${PORTLIBS:-<nenastaveno>}"
env | grep -iE "devkit|portlibs|switch" | sort

echo
echo "===== PŘÍKAZY ====="
probe gcc     aarch64-none-elf-gcc --version
probe g++     aarch64-none-elf-g++ --version
probe ld      aarch64-none-elf-ld --version
probe make    make --version
probe cmake   cmake --version
probe ninja   ninja --version
probe python3 python3 --version
probe git     git --version
probe pkgconf aarch64-none-elf-pkg-config --version

echo
echo "===== ADRESÁŘE ====="
dir devkitA64 "${DEVKITPRO:-/opt/devkitpro}/devkitA64"
dir libnx     "${DEVKITPRO:-/opt/devkitpro}/libnx"
dir tools-bin "${DEVKITPRO:-/opt/devkitpro}/tools/bin"
dir portlibs  "${DEVKITPRO:-/opt/devkitpro}/portlibs/switch"

echo
echo "===== switch_rules (to, co používá Makefile NetherSX2_nx) ====="
if [ -f "${DEVKITPRO:-/opt/devkitpro}/libnx/switch_rules" ]; then
  note "switch_rules nalezen"
  grep -E "^(BUILD|TARGET|LIBNX|PORTLIBS|NRO|NPDMTOOL|ELF2NRO|NACPTOOL)" "${DEVKITPRO}/libnx/switch_rules" | head -14
else
  err "switch_rules CHYBÍ"
fi

echo
echo "===== BALÍČKY (co z toho build reálně potřebuje) ====="
PKGS=$(dkp-pacman -Q 2>/dev/null | grep -Ei "devkitA64|switch-tools|libnx|switch-mesa|switch-curl|switch-sdl2|switch-libdrm|switch-zstd|switch-zlib|switch-expat|elfutils|switch-turbojpeg|switch-jpeg|switch-png|switch-freetype")
if [ -n "$PKGS" ]; then
  echo "$PKGS"
  for want in devkitA64 switch-tools libnx switch-mesa switch-curl switch-sdl2 switch-libdrm_nouveau; do
    if echo "$PKGS" | grep -qi "$want"; then
      note "portlib $want: NAINSTALOVÁNO"
    else
      err "portlib $want: CHYBÍ (build ho chce)"
    fi
  done
else
  err "dkp-pacman vrátil nic — image bez portlibs?"
fi

echo
echo "===== KDO JSME ====="
echo "runner=$(uname -a)"
echo "cpu=$(nproc), mem=$(awk '/MemTotal/{printf "%.0f GB", $2/1048576}' /proc/meminfo)"
echo "disk=$(df -h / | awk 'NR==2{print $4" volné"}')"

exit $((ERR > 0 ? 0 : 0))
