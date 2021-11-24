#!/bin/bash

if [ -e ./cpptestscan.bdf ]; then
  rm -f ./cpptestscan.bdf
fi

cpptesttrace --cpptesttraceTraceCommand=arm-none-eabi-gcc\|arm-none-eabi-g++ --cpptesttraceResponseFilePrefix=@ make
