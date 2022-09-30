#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -c *.c
<<<<<<< HEAD
ar rcs liball.a *.o
=======
ar -rc liball.a *.o
>>>>>>> 06a7c2f6ce272f0fc3c42f2810d349f0cae33b98
ranlib liball.a
