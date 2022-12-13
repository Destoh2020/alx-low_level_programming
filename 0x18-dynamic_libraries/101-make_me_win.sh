#!/bin/bash
wget -P .. https://raw.githubusercontent.com/Destoh2020/alx-low_level_programming/blob/master/0x18-dynamic_libraries/libdynamic.so
export LD_PRELOAD="$PWD/../libdynamic.so"
