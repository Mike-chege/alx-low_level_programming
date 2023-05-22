#!/bin/bash
wget -O /tmp/libinjection.so https://github.com/mikechege01/alx-low_level_programming/raw/master/0x18-dynamic_libraries/libinjection.so
export LD_PRELOAD=/tmp/libinjection.so
