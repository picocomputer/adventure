cmake_minimum_required(VERSION 3.13)

project(ADVENT4 C ASM)

add_subdirectory(tools)

add_executable(advent)
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
