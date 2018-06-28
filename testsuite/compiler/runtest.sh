#!/bin/sh

set -e

REF="$1"
OUT="$2"

diff -u "$REF" "$OUT"
