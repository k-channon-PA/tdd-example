#pragma once

namespace kjc_ma {

class Buffer {
 public:
  using value_type = uint8_t;

 private:
  using _container_type = std::vector< value_type >;

 public:
  using size_type = typename std::vector< value_type >::size_type;

  Buffer() : _data(16, 0) {}

  Buffer(std::initializer_list< value_type > x) : _data{std::move(x)}, _push_index{_data.size()} {};

  [[nodiscard]] size_type size() const noexcept { return _push_index - _pull_index; }
  [[nodiscard]] size_type capacity() const noexcept { return _data.size(); }
  void push(value_type val) { _data[_push_index++] = val; }
  value_type pull() {
    const auto out = _data[_pull_index++];
    return out;
  }

 private:
  _container_type _data;
  size_type _push_index{0};
  size_type _pull_index{0};
};

}  // namespace kjc_ma
