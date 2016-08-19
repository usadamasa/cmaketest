set(CMAKE_CXX_FLAGS
    "-std=c++11"
)
set(CMAKE_CXX_FLAGS_RELEASE
    "-Wall -O2"
)
set(CMAKE_CXX_FLAGS_DEBUG
    "-g"
)

if(NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE "Release" CACHE STRING
       "Choose the type of build, options are: Debug Release RelWithDebInfo MinSizeRel." FORCE)
endif(NOT CMAKE_BUILD_TYPE)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY
    ${CMAKE_SOURCE_DIR}/bin/${CMAKE_BUILD_TYPE}
)
