#!/usr/bin/env bash
# Pomůcka pro CI: přečte stdin, každý řádek ořízne a pošle jako annotation.
# Důvod: sandbox, co build sleduje, nedosáhne na raw logy Actions (Azure blob
# storage je blokovaný) — annotace přes REST API ano.
#
#   grep -E "error:" build.log | bash ci/annotate.sh error 12
#
# usage: annotate.sh <notice|error|warning> [max_lines]
lvl="${1:-notice}"
max="${2:-14}"

head -n "$max" | while IFS= read -r l; do
    # ořez, \% escape, jednoproměnný řádek
    l=$(printf '%s' "$l" | tr -d '\r\n' | tr -s ' ' | cut -c1-220 | sed 's/%/%25/g')
    [ -n "$l" ] && echo "::${lvl}::${l}"
done
