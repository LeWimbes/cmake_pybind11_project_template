cmake_minimum_required(VERSION 3.21)
project(cmake_pybind11_template)

set(LIB_NAME my_lib)
set(LIB_TESTS_NAME lib_tests)
set(LIB_EXAMPLE_NAME lib_run)

set(PYTHON_NAME my_project)

add_subdirectory(cpp)
add_subdirectory(python)
