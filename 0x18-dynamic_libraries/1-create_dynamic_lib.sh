#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -fPIC *.c
gcc -shared -o liball.so *.o
