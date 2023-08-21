#!/bin/bash
gcc -c -fPIC *.c -o liball.o
gcc -shared -o liball.so liball.o
export LD_LIBRARY_PATH="$LD_LIBRARY_PATH:/alx-low_level_programming/0x18-dynamic_libraries/"
