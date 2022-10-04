#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -c *.c
ar rcs liball.a *.o
ar -rc liball.a *.o
ranlib liball.a
