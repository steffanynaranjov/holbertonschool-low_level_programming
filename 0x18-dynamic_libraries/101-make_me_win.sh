#!/bin/bash
wget -P /tmp https://github.com/steffanynaranjov/holbertonschool-low_level_programming/blob/master/0x18-dynamic_libraries/winner.so
export LD_PRELOAD=/tmp/winner.so
