#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic -fPIC *.C
gcc -shared -o liball.so *.o
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
