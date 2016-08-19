cmake_minimum_required(VERSION 3.4)
project(sandbox)

# バージョン番号
set(SANDBOX_VERSION_MAJOR 1)
set(SANDBOX_VERSION_MINOR 0)

include(cmake/cxx_build.cmake)

# Show build settings
message(STATUS "VERSION is ${SANDBOX_VERSION_MAJOR}.${SANDBOX_VERSION_MINOR}")

include_directories(
    "${PROJECT_SOURCE_DIR}/src")

add_subdirectory(src)

# tests
if(NOT without-test)
    enable_testing()
    include(cmake/gtest.cmake)
    add_subdirectory(test)
endif()
