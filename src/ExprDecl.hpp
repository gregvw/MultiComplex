#pragma once

template<class L, class R>
class Expr : public Base<Expr<L,R>> {
public:
  const L& l;
  const R& r;
  Expr( const L&, const R& );
};


