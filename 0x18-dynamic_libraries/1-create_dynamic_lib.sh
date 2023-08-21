#!/bin/bash
gcc -Wall -pedantic  -c -fPIC *.c
gcc -shared -o liball.so *.o
export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:/alx-low_level_programming/0x18-dynamic_libraries/
