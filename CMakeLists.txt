cmake_minimum_required(VERSION 3.13)
project(AP)

set(CMAKE_CXX_STANDARD 14)

find_package(GTest REQUIRED)

include_directories(include/)

add_executable(main
        src/main.cpp
        src/book_inventory.cpp
        src/regression.cpp
        src/unit_test.cpp
)
target_link_libraries(main
        GTest::GTest
        GTest::Main
)

configure_file(${CMAKE_SOURCE_DIR}/resources/inventory.txt ${CMAKE_CURRENT_BINARY_DIR}/inventory.txt COPYONLY)
configure_file(${CMAKE_SOURCE_DIR}/resources/fish.txt ${CMAKE_CURRENT_BINARY_DIR}/fish.txt COPYONLY)

