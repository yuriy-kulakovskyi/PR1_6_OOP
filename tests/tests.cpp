#include <gtest/gtest.h>
#include "../classes/RightAngle.h"

TEST(Tests, PerimeterTest) {
  class RightAngled::Triangle t1(3, 4, 5);
  ASSERT_EQ(t1.perimeter(), 12);
}