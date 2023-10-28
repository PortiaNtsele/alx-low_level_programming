#!/bin/bash
gcc -Wall -pedantio -Werror -Wextra -o *. C
ar -ro liball.a *. o
ranlib liball.a
