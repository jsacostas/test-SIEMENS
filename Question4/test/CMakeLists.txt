cmake_minimum_required(VERSION 3.20.0)

set(This Question4Test)

set(Sources
    Question4Test.cpp
)

add_executable(${This} ${Sources})

target_link_libraries(${This} PUBLIC
    gtest_main
    Question4
)

add_test(
    NAME ${This}
    COMMAND ${This}
)