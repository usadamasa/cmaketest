# For Versioning
configure_file(
    "version.h.in"
    "version.h"
)

set(
    SOURCE_FILES
    main.cpp
)

add_executable(
    sandbox
    ${SOURCE_FILES}
)

target_link_libraries(
    sandbox
    MathFunctions
)
