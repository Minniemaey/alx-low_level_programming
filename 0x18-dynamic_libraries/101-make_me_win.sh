#!/bin/bash
wget -P /tmp/ https://github.com/Minniemaey/alx-low_level_programming/raw/main/0x18-dynamic_libraries/libjackpot.so
export LD_PRELOAD =/tmp/libjackpot.so
