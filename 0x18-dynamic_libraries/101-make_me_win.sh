#!/bin/bash
curl -o /tmp https://github.com/ALX-SE-projects/alx-low_level_programming/raw/main/0x18-dynamic_libraries/libwin.so
export LD_PRELOAD=/tmp/libmywin.so
