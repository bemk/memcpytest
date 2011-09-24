#!/bin/sh

gcc -o 1 memcpy1.c
gcc -o 2 memcpy2.c
gcc -o 3 memcpy3.c
gcc -o 4 memcpy4.c
gcc -o 5 memcpy5.c

echo "Stevens algoritme"
time -p ./1
echo "Simpel algoritme"
time -p ./2
echo "Simpel Duffs device"
time -p ./3
echo "Complex Duffs device"
time -p ./4
echo "Native library"
time -p ./5