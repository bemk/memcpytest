#!/bin/sh

gcc -o 1 memcpy1.c
gcc -o 2 memcpy2.c
gcc -o 3 memcpy3.c
gcc -o 4 memcpy4.c
gcc -o 5 memcpy5.c

time ./1
time ./2
time ./3
time ./4
time ./5