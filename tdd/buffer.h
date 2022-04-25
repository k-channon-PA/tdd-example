#pragma once

namespace kjc {

  class Buffer {
 public:
   using size_type = size_t;

   [[nodiscard]] constexpr size_type size() const noexcept { return 0; }
   [[nodiscard]] constexpr size_type capacity() const noexcept { return 16; }
  };

}
