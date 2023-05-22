#!/bin/bash
# compile all .c files in the current directory
gcc -c -Wall -Werror -fpic *.c
# create the dynamic library from object files
gcc -shared -o liball.so *.o
# cleanup the object files
rm *.o
