#!/bin/sh

gcc -o 1 memcpy1.c
gcc -o 2 memcpy2.c
gcc -o 3 memcpy3.c
gcc -o 4 memcpy4.c
gcc -o 5 memcpy5.c

echo "Stevens algoritme"
time ./1
echo "Simpel algoritme"
time ./2
echo "Simpel Duffs device"
time ./3
echo "Complex Duffs device"
time ./4
echo "Native library"
time ./5