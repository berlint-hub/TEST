#!/usr/bin/env bash
# Pomůcka pro CI: přečte stdin, každý řádek ořízne a pošle jako annotation.
# Důvod: sandbox, co build sleduje, nedosáhne na raw logy Actions (Azure blob
# storage je blokovaný) — annotace přes REST API ano.
#
#   grep -E "error:" build.log | bash ci/annotate.sh error 12
#   ... | bash ci/annotate.sh "error+" 14     # JEDNA anotace, řádky spojené %0A
#
# usage: annotate.sh <notice|error|warning>[+] [max_lines]
#
# Proč ten režim "+": GitHub zobrazuje max ~30 anotací na job a přebytný
# tichounce zahodí — právě tak nám zmizela střední část hlášení. Spojením
# celého bloku do jedné anotace strop obejdeme.
lvl="${1:-notice}"
max="${2:-14}"

case "$lvl" in
  *+) join=1; lvl="${lvl%+}";;
  *)  join=0;;
esac

if [ "$join" = 1 ]; then
  head -n "$max" \
    | awk '{ sub(/\r$/, ""); if (length($0) > 230) $0 = substr($0, 1, 230); gsub(/%/, "%25", $0);
             printf "%s%s", sep, $0; sep = "%0A" } END { printf "\n" }' \
    | { IFS= read -r joined
        [ -n "$joined" ] && echo "::${lvl}::${joined}"
        exit 0; }
  exit 0
fi

head -n "$max" | while IFS= read -r l; do
    # ořez, \% escape, jednoproměnný řádek
    l=$(printf '%s' "$l" | tr -d '\r\n' | tr -s ' ' | cut -c1-220 | sed 's/%/%25/g')
    [ -n "$l" ] && echo "::${lvl}::${l}"
done
