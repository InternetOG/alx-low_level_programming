#!/bin/bash
gcc -c -fPIC *.c
gcc -shared -o libball.so *.o
nm -D libball.so
