
#include "add.h"
#include <gmock/gmock.h>
#include <gtest/gtest.h>

TEST(add, basic) {
  ASSERT_EQ(add(1,2), 3);
}

TEST(add_op, basic) {
  ADD_OP a(5);
  ASSERT_EQ(a.Do(5), 10);
}
