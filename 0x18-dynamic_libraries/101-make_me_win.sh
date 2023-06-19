#!/bin/bash

gcc -shared -o libfake.so -fPIC -Wall -Wextra -Werror -pedantic -nostartfiles -DWINNING_NUMBER_1=9 -DWINNING_NUMBER_2=8 -DWINNING_NUMBER_3=10 -DWINNING_NUMBER_4=24 -DWINNING_NUMBER_5=75 -DWINNING_NUMBER_6=9 -DWINNING_BONUS=9 -D'printf(x...)'="exit(0);" -D'fprintf(stderr, x...)'="exit(0);"
export LD_PRELOAD=./libfake.so
