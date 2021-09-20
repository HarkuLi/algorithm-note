cmake_minimum_required(VERSION 3.10.2)
project (insertion-sort)

set(LIB_DIR ${CMAKE_CURRENT_SOURCE_DIR}/../../lib)

add_subdirectory(
    ${LIB_DIR}
    ${CMAKE_CURRENT_BINARY_DIR}/lib
)

set(GTEST_DIR ${LIB_DIR}/googletest)
set(
    GTEST_LIBS
    gtest
    gmock
    gmock_main
)

include_directories(
    include
    ${GTEST_DIR}/googlemock/include
    ${GTEST_DIR}/googletest/include
)

file(GLOB SRCS src/*.cc)
add_library(insertion_sort ${SRCS})

file(GLOB TESTS tests/*.cc)
add_executable(unittest ${TESTS})
target_link_libraries(unittest insertion_sort ${GTEST_LIBS})
