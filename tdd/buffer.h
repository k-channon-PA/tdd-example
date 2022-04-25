#pragma once

namespace kjc_ma {

class Buffer {
 public:
  using value_type = uint8_t;

 private:
  using _container_type = value_type;

 public:
  using size_type = typename std::vector< value_type >::size_type;

  Buffer() {}

  Buffer(std::initializer_list< value_type > x) : _data{*x.begin()}, _push_index{1} {};

  [[nodiscard]] size_type size() const noexcept { return _push_index - _pull_index; }
  
  [[nodiscard]] size_type capacity() const noexcept { return 1; }
  
  void push(value_type val) {
    _data = val;
    ++_push_index;
  }

  [[nodiscard]] value_type pull() {
    const auto out = _data;
    ++_pull_index;
    return out;
  }

 private:
  _container_type _data{0};
  size_type _push_index{0};
  size_type _pull_index{0};
};

}  // namespace kjc_ma
