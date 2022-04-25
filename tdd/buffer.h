#pragma once

namespace kjc_ma {

class Buffer {
 public:
  using size_type = typename std::vector<uint8_t>::size_type;

  Buffer() : _data(16, 0) {}

  Buffer(std::initializer_list< uint8_t > x) : _data{std::move(x)}, _next_index{_data.size()} {};

  [[nodiscard]] size_type size() const noexcept { return _next_index; }
  [[nodiscard]] size_type capacity() const noexcept { return _data.size(); }
  void push(uint8_t val) { _data[_next_index++] = val; }

 private:
  std::vector< uint8_t> _data;
  size_type _next_index{0};


};



}  // namespace kjc_ma
