#include "buffer.h"

TEST(BufferTest, DefaultConstructedBufferHasZeroSize) {
  ASSERT_EQ(0, kjc_ma::Buffer{}.size());
}

TEST(BufferTest, DefaultConstructCapacityIsCorrect) {
  ASSERT_EQ(16, kjc_ma::Buffer{}.capacity());
}

TEST(BufferTest, PushSingleItemToBufferWorks) {
  auto b = kjc_ma::Buffer{};
  b.push(10);

  ASSERT_EQ(1, b.size());
}
