#include "fun.hh"

#include <gtest/gtest.h>

TEST(AddTest, TestCommutative) {
  EXPECT_EQ(fun::add(1, 2), 3);
  EXPECT_EQ(fun::add(2, 1), 3);
}
