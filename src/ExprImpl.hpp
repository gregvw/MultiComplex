#pragma once

template<class L, class R>
Expr<L,R>::Expr( const L& l, const R& r ) : 
  left(l), right(r) { }
