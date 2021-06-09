#!/bin/bash

set -euxo pipefail

g++-11 -std=c++20 -fmodules-ts -x c++-system-header iostream
g++-11 -std=c++20 -fmodules-ts guinyote.scripting.scripting_engine.cpp guinyote.scripting.cpp main.cpp -o main
