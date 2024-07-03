#---------------------------------------------------------------------------------------------------
# CMake Build Configuration for the Ray Tracing Weekend Series
#
# See README.md for guidance.
#---------------------------------------------------------------------------------------------------

cmake_minimum_required ( VERSION 3.1.0...3.27.0 )

project ( ray_tracer
    VERSION 3.0.0
    LANGUAGES CXX
)

set ( CMAKE_CXX_STANDARD 26 )

set ( COMMON_ALL
    src/common/vec3.hpp
    src/common/color.hpp
)

set ( SOURCE_RAY_TRACER
    ${COMMON_ALL}
    src/ray_tracer/main.cpp
)

# Executables
add_executable(ray_tracer      ${SOURCE_RAY_TRACER})

include_directories(src/common)