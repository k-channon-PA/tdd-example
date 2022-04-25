#pragma once

namespace kjc_ma {

class Buffer {
 public:
  using size_type = typename std::array<uint8_t, 16>::size_type;

  [[nodiscard]] constexpr size_type size() const noexcept { return _next_index; }
  [[nodiscard]] constexpr size_type capacity() const noexcept { return _data.size(); }
  void push(uint8_t val) { _data[_next_index++] = val; }

 private:
  std::array< uint8_t, 16 > _data;
  size_type _next_index{0};
};

}  // namespace kjc_ma
