cmake_minimum_required(VERSION 3.13)

project(ADVENT4 C ASM)

add_subdirectory(tools)

add_executable(adventure)
rp6502_asset(adventure /advent1.txt troglobit/src/advent1.txt)
rp6502_asset(adventure /advent2.txt troglobit/src/advent2.txt)
rp6502_asset(adventure /advent3.txt troglobit/src/advent3.txt)
rp6502_asset(adventure /advent4.txt troglobit/src/advent4.txt)
rp6502_executable(adventure
    DATA 0x200
    RESET 0x200
)
target_include_directories(adventure PRIVATE
    ${CMAKE_CURRENT_LIST_DIR}/src
)
target_sources(adventure PRIVATE
    src/err.c
    troglobit/src/advent.c
    troglobit/src/database.c
    troglobit/src/english.c
    troglobit/src/itverb.c
    troglobit/src/turn.c
    troglobit/src/verb.c
)
