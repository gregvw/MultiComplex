#pragma once

template<class L, class R>
inline const Expr<L,R> ( const Base<L>& left, const Base<R>& right ) {
  return Expr<L,R>( left(), right() );
}
