#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -o *. C
ar -rc liball.a *.o
ranlib liball.a
