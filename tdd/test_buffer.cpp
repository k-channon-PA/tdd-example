#include "buffer.h"

TEST(BufferTest, DefaultConstructedBufferHasZeroSize) {
  ASSERT_EQ(0, kjc::Buffer{}.size());
}

TEST(BufferTest, DefaultConstructCapacityIsCorrect) {
  ASSERT_EQ(16, kjc::Buffer{}.capacity());
}
