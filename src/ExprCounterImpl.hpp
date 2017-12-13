#pragma once

template<class U, class V>
struct Counter<Expr<U,V>> {
  static constexpr std::size_t value{ 1U+Counter<U>::value };
};
