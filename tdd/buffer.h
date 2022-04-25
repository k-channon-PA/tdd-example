#pragma once

namespace kjc {

  class Buffer {
 public:
   using size_type = size_t;

   [[nodiscard]] size_type size() const noexcept { return 0; }
  };

}
