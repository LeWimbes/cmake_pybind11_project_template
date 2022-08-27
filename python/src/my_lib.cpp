#include <pybind11/pybind11.h>
#include "../../cpp/include/my_lib/my_lib.hpp"

namespace py = pybind11;
using namespace pybind11::literals;

namespace my_lib {
    PYBIND11_MODULE(my_project, m) {
        m.doc() = "My Python module";

        m.def("set_int", &setInt, R"pbdoc(
        Store the given integer
        )pbdoc", "i"_a);

        m.def("get_int", &getInt, R"pbdoc(
        Get the stored integer
        )pbdoc");

        m.def("add", &add, R"pbdoc(
        Add i and j
        )pbdoc", "i"_a, "j"_a);
    }
}
