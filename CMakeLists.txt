cmake_minimum_required(VERSION 3.1)
project(demo)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED TRUE)

add_definitions(-DWITH_OPENSSL)
add_definitions(-DWITH_NONAMESPACES)
add_definitions(-DWITH_DOM)
add_definitions(-fno-use-cxa-atexit)
add_definitions(-fexceptions)
add_definitions(-DSOAP_DEBUG)

add_definitions(-Wno-unused-function)
add_definitions(-Wno-unused-variable)
add_definitions(-Wno-sign-compare)
add_definitions(-Wno-reorder)
add_definitions(-Wno-unused-but-set-variable)
add_definitions(-Wno-misleading-indentation)
add_definitions(-fPIC)
add_definitions(-fpermissive)

set(CMAKE_BUILD_TYPE  "Debug")
SET(CMAKE_CXX_FLAGS_DEBUG "$ENV{CXXFLAGS} -O0 -Wall -g2 -ggdb")  
SET(CMAKE_CXX_FLAGS_RELEASE "$ENV{CXXFLAGS} -O3 -Wall")

SET(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib)
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)

INCLUDE_DIRECTORIES(/usr/local/cuda/include)
INCLUDE_DIRECTORIES(/usr/local/include)
include_directories(../include)
LINK_DIRECTORIES(/usr/lib/x86_64-linux-gnu)
LINK_DIRECTORIES(/usr/local/cuda-11.1/lib64)

find_package(CUDA REQUIRED)

add_executable(demo main.cpp CUDACtxMan.cpp CUDACtxMan.h)
target_link_libraries(demo cudart nppig cuda nvcuvid -pthread)