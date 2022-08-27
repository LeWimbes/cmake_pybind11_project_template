#include "gtest/gtest.h"
#include "my_lib/my_lib.hpp"

using namespace my_lib;

TEST(MyLibTests, Store) {
    setInt(7);
    ASSERT_EQ(7, getInt());
}

TEST(MyLibTests, Add) {
    ASSERT_EQ(3, add(1, 2));
}
