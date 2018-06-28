#!/bin/bash

set -eux

tcc -o cyclone boot/tools/cyclone/cyclone.c boot/library/compiler/*.c boot/library/compiler/inference/*.c boot/library/std/*.c boot/library/std/libc/*.c library/runtime/*.c library/banshee/*.c library/banshee/rlib/*.c -I library/std/cyc-lib -I library/banshee -I library/banshee/rlib -Ddeletes= -Dsameregion= -Dtraditional= -D_HAVE_PTHREAD_ -DCYC_STATIC_MAIN
