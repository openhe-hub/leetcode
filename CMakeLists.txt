cmake_minimum_required(VERSION 3.0.0)
project(leetcode VERSION 0.1.0)

enable_testing()

add_executable(leetcode main.cpp)

add_executable(49-group-anagrams src/sort/49-group-anagrams.cpp)
add_executable(75-color-sort src/sort/75-sort-color.cpp)
add_executable(179-largest-num src/sort/179-largest-num.cpp)
add_executable(378-kth-smallest src/sort/378-kth-smallest.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
