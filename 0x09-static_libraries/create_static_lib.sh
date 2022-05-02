#!/bin/sh
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -c *.c
ar rc liball.a *.o
chmod +x liball.a

