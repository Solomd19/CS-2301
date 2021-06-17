cmake_minimum_required(VERSION 3.17)
project(2020HW2starter C)

set(CMAKE_C_STANDARD 11)

include_directories(src)

add_executable(2020HW2starter
        src/2020HW3starter.c
        src/LinkedList+LetterNum.c
        src/LinkedList+LetterNum.h
        src/production.c
        src/production.h
        src/card.c
        src/card.h
        src/tests.c
        src/tests.h
        src/TMSName.h)
