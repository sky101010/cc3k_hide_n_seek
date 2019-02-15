cmake_minimum_required(VERSION 3.13)
project(hide_n_seek)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(hide_n_seek
        baseEnemy.cpp
        baseEnemy.h
        baseEnemyDecorator.cpp
        baseEnemyDecorator.h
        controller.cpp
        controller.h
        game.cpp
        game.h
        grid.cpp
        grid.h
        humanPlayer.cpp
        humanPlayer.h
        item.cpp
        item.h
        main.cpp
        player.cpp
        player.h
        spot.cpp
        spot.h)
