cmake_minimum_required(VERSION 3.13)

project(ADVENT4 C ASM)

add_subdirectory(tools)

add_executable(advent)
rp6502_asset(advent /advent1.txt troglobit/src/advent1.txt)
rp6502_asset(advent /advent2.txt troglobit/src/advent2.txt)
rp6502_asset(advent /advent3.txt troglobit/src/advent3.txt)
rp6502_asset(advent /advent4.txt troglobit/src/advent4.txt)
rp6502_executable(advent
    DATA 0x200
    RESET 0x200
)
target_include_directories(advent PRIVATE
    ${CMAKE_CURRENT_LIST_DIR}/src
)
target_sources(advent PRIVATE
    src/err.c
    troglobit/src/advent.c
    troglobit/src/database.c
    troglobit/src/english.c
    troglobit/src/itverb.c
    troglobit/src/turn.c
    troglobit/src/verb.c
)
