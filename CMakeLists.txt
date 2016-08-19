cmake_minimum_required(VERSION 3.4)
project(sandbox)

# バージョン番号
set(SANDBOX_VERSION_MAJOR 1)
set(SANDBOX_VERSION_MINOR 0)

set(
    CMAKE_CXX_FLAGS
    "-std=c++11"
)

include_directories(
    "${PROJECT_SOURCE_DIR}/src")

add_subdirectory(src)
add_subdirectory(test)

set(
    CMAKE_INSTALL_PREFIX
    ${PROJECT_BINARY_DIR}/install
)

