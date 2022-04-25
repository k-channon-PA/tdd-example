#include "buffer.h"

TEST(BufferTest, DefaultConstructedBufferHasZeroSize) {
  const auto b = kjc::Buffer{};

  ASSERT_EQ(0, b.size());
}
