cmake_minimum_required(VERSION 3.10.2)
project (merge-sort)

add_subdirectory(
    ${CMAKE_CURRENT_SOURCE_DIR}/../lib
    ${CMAKE_CURRENT_BINARY_DIR}/lib
)

set(GTEST_DIR ${CMAKE_CURRENT_SOURCE_DIR}/../lib/googletest)
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
add_executable(merge_sort_unittest ${SRCS})

find_package(Threads)
target_link_libraries(merge_sort_unittest Threads::Threads ${GTEST_LIBS})