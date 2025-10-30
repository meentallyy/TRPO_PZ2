cmake_minimum_required(VERSION 3.10)
project(TRPO_PZ2)
add_executable(TRPO_PZ2
    main.cpp
    functions.cpp
)

enable_testing()
add_executable(tests
    functions.cpp
    tests.cpp
)