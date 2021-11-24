SET(CMAKE_SYSTEM_NAME Linux)
set(CMAKE_C_COMPILER arm-none-eabi-gcc)
set(CMAKE_CXX_COMPILER arm-none-eabi-g++)
#set(CMAKE_EXE_LINKER_FLAGS_INIT "-ffunction-sections -fdata-sections --specs=rdimon.specs -Wl,--gc-sections -Wl,-Map=FlowAnalysis.map" CACHE STRING "Linker Flags")

set(CMAKE_SHARED_LIBRARY_LINK_C_FLAGS "-mthumb -mcpu=cortex-m0 -flto -ffunction-sections -fdata-sections --specs=rdimon.specs -Wl,--gc-sections -Wl,-Map=FlowAnalysis.map" CACHE STRING "Linker Flags")
set(CMAKE_SHARED_LIBRARY_LINK_CXX_FLAGS "")
