#pragma once

template<class Element>
class MultiComplex<1> : public Base<MultiComplex<1,Element>> {
private:
  Element x, y;
public:
  MultiComplex( const Element&, const Element& );
  MultiComplex( const MultiComplex& );
  const MultiComplex& operator=( const MultiComplex& );

  template<class L, class R> 
  MultiComplex(const Expr<L,R>& ex );

  template<class L, class R>
  const MultiComplex& operator = ( const Expr<L,R>& ex );

};

