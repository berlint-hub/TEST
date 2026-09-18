#!/usr/bin/env bash
# Rozhodne o výsledku buildu a vytiskne, co je potřeba, JAKO ANOTACE.
# Důvod: raw logy Actions jsou z našeho prostředí nedostupné (blob storage),
# annotace přes REST API ano.
#
#   bash ci/verdict.sh <log> <cesta-k-.nro> [extra .nro...]
set +e

LOG="$1"; shift
NRO="$1"; shift
EXTRA=("$@")

if [ -n "$NRO" ] && [ -f "$NRO" ]; then
    sz=$(stat -c '%s' "$NRO")
    echo "::notice::VÝSLEDEK OK — $(basename "$NRO") = $sz B"
    for f in "${EXTRA[@]}"; do
        [ -f "$f" ] && echo "::notice:: + $(basename "$f") = $(stat -c '%s' "$f") B"
    done
    rc=0
else
    echo "::error::finální .nro nevzniklo ($NRO chybí)"
    if [ -s "$LOG" ]; then
        echo "::error::posledních 30 řádků:"
        tail -30 "$LOG" | bash "$(dirname "$0")/annotate.sh" error 30
        echo "::error::chybové řádky:"
        grep -E "error:|Error [0-9]+|FAILED|No such file|cannot find -l|Bad substitution|syntax error|not found" "$LOG" \
            | sort -u | bash "$(dirname "$0")/annotate.sh" error 15
    else
        echo "::error::log $LOG je prázdný/neexistuje — skript ani nezačal běžet"
    fi
    rc=1
fi

# jedna souvislá věta, ať to projde i když ostatní annotace vypršej
printf '::notice::VERDICT: %s | log %s B\n' \
  "$([ -f "$NRO" ] && echo "OK $(basename "$NRO")" || echo "CHYBÍ $(basename "${NRO:-?}")")" \
  "$(stat -c '%s' "$LOG" 2>/dev/null || echo 0)"

# kolik staged souborů vlastně vzniklo, ať víme, do jaké fáze to došlo
for probe in .ciwork/cores/NetherSX2-v2.2n-4248/lib/arm64-v8a/libemucore.so \
             .ciwork/NetherSX2_nx/launcher/romfs/cores/emucore_4248.so \
             .ciwork/NetherSX2_nx/NetherSX2_nx_gl.nro \
             .ciwork/NetherSX2_nx/launcher/dependencies/build/_deps/libsmb2-build/lib/libsmb2.a; do
    if [ -f "$probe" ]; then
        echo "::notice::stadium $(basename "$(dirname "$probe")")/$(basename "$probe") = $(stat -c '%s' "$probe") B"
    elif [ "${VK_ONLY:-0}" = "1" ] && [ "${probe##*/}" = "NetherSX2_nx_gl.nro" ]; then
        # V balíku bez OpenGL tenhle soubor vzniknout nemá — není to chyba.
        echo "::notice::stadium vynecháno (VK_ONLY=1): $probe"
    else
        echo "::warning::stadium chybí: $probe"
    fi
done

exit $rc
