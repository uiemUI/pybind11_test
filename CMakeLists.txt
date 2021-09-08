cmake_minimum_required(VERSION 3.20)

project(pybind11_test CXX)

set(CMAKE_CXX_STANDARD 17)

include(FetchContent)
FetchContent_Declare(
  pybind11
  GIT_REPOSITORY https://github.com/pybind/pybind11.git
  GIT_TAG        v2.7.1
)

# 从github上下载 pybind11 ,也可以使用本地的
FetchContent_MakeAvailable(pybind11)
include_directories( ${PYTHON_INCLUDE_DIRS} ${PYBIND11_INCLUDE_DIR})

# add_library(dog SHARED dogClass.cc pymodule.cc)
pybind11_add_module(mytestlib  pymodule.cc dogClass.cc)

set_target_properties(mytestlib  PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
                    LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
                    ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)