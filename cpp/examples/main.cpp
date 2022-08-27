#include <iostream>
#include "my_lib/my_lib.hpp"

int main() {
    using namespace my_lib;

    std::cout << "Storing 7...\n";
    setInt(7);
    std::cout << "Stored Integer is: " << getInt() << "\n";

    std::cout << "1 + 2 = " << add(1, 2) << "\n";

}
