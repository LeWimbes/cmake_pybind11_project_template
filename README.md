# CMake & pybind11 Project Template

Inspired by pybind11's official cmake template (https://github.com/pybind/cmake_example),
this project is intended to get you (and me) started with a C++ project
with a complex project structure and Python bindings using pybind11.

**This project has been tested only on Linux systems.**

## C++
### Build C++ library
`cmake -B ./cmake-build/`
`cmake --build ./cmake-build/`

### Run C++ tests
`./cmake-build/cpp/tests/lib_tests`

## Python
### Install Python bindings
`python -m pip install .`

### Using Python bindings without installation
Build C++ library and copy `python/src/my_project.cpython[...]` next to python files.

### Run Python tests
`python -m pytest python/`
