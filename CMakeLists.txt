cmake_minimum_required(VERSION 3.21)
project(cmake_pybind11_template)

set(CMAKE_CXX_STANDARD 23)

# Windows shared library fix. Only apply if output dirs haven't been set elsewhere (otherwise python bindings don't work).
# see: https://cmake.org/cmake/help/latest/guide/tutorial/Selecting%20Static%20or%20Shared%20Libraries.html
# and: https://cmake.org/pipermail/cmake/2016-April/063337.html
if (NOT CMAKE_RUNTIME_OUTPUT_DIRECTORY)
    set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${PROJECT_BINARY_DIR}/bin")
endif ()
if (NOT CMAKE_LIBRARY_OUTPUT_DIRECTORY)
    set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "${PROJECT_BINARY_DIR}/lib")
endif ()
if (NOT CMAKE_ARCHIVE_OUTPUT_DIRECTORY)
    set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY "${PROJECT_BINARY_DIR}/lib")
endif ()

set(LIB_NAME my_lib)
set(LIB_TESTS_NAME lib_tests)
set(LIB_EXAMPLE_NAME lib_run)

set(PYTHON_NAME my_project)

add_subdirectory(cpp)
add_subdirectory(python)
