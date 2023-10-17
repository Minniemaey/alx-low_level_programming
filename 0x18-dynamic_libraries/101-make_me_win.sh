#!/bin/bash
wget -P .. https://github.com/Minniemaey/alx-low_level_programming/raw/main/0x18-dynamic_libraries/libjackpot.so
export LD_PRELOAD="$PWD/../libjackpot.so"
