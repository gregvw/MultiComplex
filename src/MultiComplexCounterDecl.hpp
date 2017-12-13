#pragma once 

namespace details {
using namespace std;

template<class Element> class MultiComplex;

template<class V>
struct MultiComplexCounter {
  static constexpr size_t value{0};

  template<size_t, class Element>
  inline static void get_ptrs( const MultiComplex<N,Element>** ptrs, const V& v ) {
    ptrs[0] = reinterpret_cast<const MultiComplex<N,Element>*>(&v);
  }
};

} // namespace details

using details::MultiComplexCounter;
