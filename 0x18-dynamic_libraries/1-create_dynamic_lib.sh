#!/bin/bash
gcc -c -fPIC func.c -o func.o
gcc -shared -o liball.so func.o
export LD_LIBRARY_PATH="$LD_LIBRARY_PATH:/alx-low_level_programming/0x18-dynamic_libraries/"
