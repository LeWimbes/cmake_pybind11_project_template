#include "my_lib/my_lib.hpp"

namespace my_lib {
    int secret_int;

    void setInt(int i) {
        secret_int = i;
    }

    int getInt() {
        return secret_int;
    }

    int add(int i, int j) {
        return i + j;
    }
}
