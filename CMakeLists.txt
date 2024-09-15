cmake_minimum_required(VERSION 3.10)
project(DSA VERSION 1.0)
add_executable(DSA main.cpp)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)
configure_file(DSAConfig.h.in DSAConfig.h)
target_include_directories(DSA PUBLIC
                           "${PROJECT_BINARY_DIR}"
                           "${PROJECT_SOURCE_DIR}/MathFunctions")

add_subdirectory(DataStructures)
target_link_libraries(DSA PUBLIC DataStructures)