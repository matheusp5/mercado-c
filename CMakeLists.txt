cmake_minimum_required(VERSION 3.26)
project(Mercado C)

set(CMAKE_C_STANDARD 11)

add_executable(Mercado main.c
        auth.c
        user.c
        user.h
        product.c
        product.h
        auth.h
        screens.c
        screens.h)
