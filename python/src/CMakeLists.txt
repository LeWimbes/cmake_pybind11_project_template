include(${CMAKE_SOURCE_DIR}/cmake/pybind11.cmake)

pybind11_add_module(${PYTHON_NAME} my_lib.cpp)
target_link_libraries(${PYTHON_NAME} PUBLIC ${LIB_NAME})
