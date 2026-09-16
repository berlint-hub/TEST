#!/usr/bin/env bash
# Obal kolem build-switch.sh: starost o export .nro do out/ a o počáteční
# informace, které musíme vidět i kdyby build spadl na půlce.
#
# V YAML kroku se schválně nedělá nic chytrého — runner spouští `bash -e`
# a jakákoli logika za neúspěšným pipe by se prostě nevykonala.
set +e

ROOT="$(cd "$(dirname "$0")/.." && pwd)"
cd "$ROOT"
mkdir -p out

echo "::notice::run.sh začíná, CWD=$ROOT, $(nproc) CPU, volno $(df -h / | awk 'NR==2{print $4}')"

bash ci/build-switch.sh
rc=$?

SRC="${SRC:-$PWD/.ciwork/NetherSX2_nx}"
for f in "$SRC/NetherSX2.nro" "$SRC/NetherSX2_nx_gl.nro" "$SRC/NetherSX2_nx_gl.elf"; do
    [ -f "$f" ] && cp -f "$f" out/ 2>/dev/null
done

if [ "$rc" -ne 0 ]; then
    echo "::error::build-switch.sh skončil s rc=$rc"
fi
ls -la out/ 2>/dev/null | tail -6
exit "$rc"
