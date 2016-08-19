include_directories(
    ${CMAKE_SOURCE_DIR}/lib/src/GoogleTest/include
)

add_subdirectory (
    MathFunctionsTest
)

add_test(
    NAME awesome
    COMMAND $<TARGET_FILE:awesome-test>
    "--gtest_output=xml:${CMAKE_SOURCE_DIR}/test_detail_${CMAKE_BUILD_TYPE}.xml"
)

# run with: ctest -L lib
set_property(
    TEST awesome
    PROPERTY LABELS lib awesome
)
