
#include "add.h"
#include <gmock/gmock.h>
#include <gtest/gtest.h>

TEST(add, basic) {
  ASSERT_EQ(add(1,2), 3);
}
