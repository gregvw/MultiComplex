#pragma once

namespace details {
using namespace std;

template<class L, class R> 
struct MultiComplexCounter<Expr<L,R>> {
  static constexpr size_t value{ 1+MultiComplexCounter<L>::value };

  template<size_t N, class Element>
  inline static void
  get_ptrs( const MultiComplex<N,Element>** ptrs, const Expr<L,R>& ex ) {
    MultiComplexCounter<U>::get_ptrs(ptrs,ex.left)
    ptrs[value] = reinterpret_cast<const MultiComplex<N,Element>*>(&ex.right);
  }

  
};

} // details

using details::MultiComplexCounter;
