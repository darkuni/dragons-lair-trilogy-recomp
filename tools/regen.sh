#!/bin/sh
# rename + regenerate src/gen from config/symbols_raw.txt (discover.py output)
set -e
cd "$(dirname "$0")/.."
cp config/symbols_raw.txt config/symbols.txt
python3 tools/apply_refs.py
cd src && python3 recomp.py "${1:-../game/sys/main.dol}" ../config/symbols.txt gen 300 | tail -1
