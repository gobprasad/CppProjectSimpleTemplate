cmake_minimum_required(VERSION 3.15)

# Project Name, TODO Make sure to change this
project(SampleApp VERSION 1.0)

# Add config file, can be used to specify VERSION
configure_file(version.h.in version.h)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

include_directories(src)

add_subdirectory(src)
add_subdirectory(tests)
add_subdirectory(lib/googletest)
