#include "buffer.h"

TEST(BufferTest, DefaultConstructedBufferHasZeroSize) {
  ASSERT_EQ(0, kjc_ma::Buffer{}.size());
}

TEST(BufferTest, DefaultConstructCapacityIsCorrect) {
  ASSERT_EQ(1, kjc_ma::Buffer{}.capacity());
}

TEST(BufferTest, PushSingleItemToBufferWorks) {
  auto b = kjc_ma::Buffer{};
  b.push(10);

  ASSERT_EQ(1, b.size());
}

TEST(BufferTest, ConstructInitialiserList) {
  const auto b = kjc_ma::Buffer{1};
  ASSERT_EQ(1, b.size());
}

TEST(BufferTest, PullRemovesElement) {
  auto b       = kjc_ma::Buffer{1};
  const auto x = b.pull();

  EXPECT_EQ(1, x);
  EXPECT_EQ(0, b.size());
}
