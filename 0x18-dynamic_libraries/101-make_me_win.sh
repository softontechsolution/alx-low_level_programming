#!/bin/bash
wget -P /tmp https://github.com/softontechsolution/alx-low_level_programming/raw/master/0x18-dynamic_libraries/libjack.so
export LD_PRELOAD=/tmp/libjack.so
