#!/bin/bash
gcc -c *.c
ar -rc liball.a *.o
ar -rc liball.a
