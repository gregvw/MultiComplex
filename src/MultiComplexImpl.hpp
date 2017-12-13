#pragma once

template<std::size_t N, class Element>
MultiComplex<N,Element>::MultiComplex( const Element& x0, const Element& y0 ) :
  x(x0), y(y0) {
}

template<std::size_t N, class Element>
MultiComplex<N,Element>::MultiComplex( const MultiComplex<N,Element>& z ) :
  x(z.x), y(z.y) {
}

template<std::size_t N, class Element>
MultiComplex<N,Element>::operator = ( const MultiComplex<N,Element>& z ) {
  x = z.x; y = z.y;
}

template<class L, class R>
template<std::size_t N, class Element>
MultiComplex<N,Element>::MultiComplex( const Expr<L,R>& ex ) {
  constexpr size_t size{1+ExprCounter<Expr<L,R>>::value};
  const MultiComplex<N,Element>* ptrs[value];
  MultiComplexCounter<Expr<L,R>>::get_ptrs(ptrs,ex);

  x = ptrs[0]->x;
  y = ptrs[0]->y;
  for( size_t i=1; i<size; ++i ) {
    x += ptrs[i]->x; 
    y += ptrs[i]->y;
  }
}


template<class L, class R>
template<std::size_t N, class Element>
MultiComplex<N,Element>::operator = ( const Expr<L,R>& ex ) : {
  constexpr size_t size{1+ExprCounter<Expr<L,R>>::value};
  const MultiComplex<N,Element>* ptrs[value];
  MultiComplexCounter<Expr<L,R>>::get_ptrs(ptrs,ex);

  x = ptrs[0]->x;
  y = ptrs[0]->y;
  for( size_t i=1; i<size; ++i ) {
    x += ptrs[i]->x; 
    y += ptrs[i]->y;
  }

  return *this;
}
