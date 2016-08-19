cmake_minimum_required(VERSION 2.8)

set(PRODUCT_SOURCE
    ${CMAKE_SOURCE_DIR}/src/sandbox/MathFunctions/Sqrt.cpp
)

add_executable(
    awesome-test
    main.cpp
    ${PRODUCT_SOURCE}
)

target_link_libraries(
    awesome-test
    gtest
    gtest_main
    pthread
)

