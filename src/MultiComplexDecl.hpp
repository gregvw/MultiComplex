#pragma once

template<std::size_t N, class Element>
class MultiComplex : public Base<MultiComplex<N,Element>> {
private:
  Element x, y;
public:
  MultiComplex( const Element&, const Element& );
  MultiComplex( const MultiComplex& );
  const MultiComplex& operator = ( const MultiComplex& );

  template<class L, class R> 
  MultiComplex(const Expr<L,R>& ex );

  template<class L, class R>
  const MultiComplex& operator = ( const Expr<L,R>& ex );

  MultiComplex operator + ( const MultiComplex& );
  MultiComplex operator - ( const MultiComplex& );
  MultiComplex operator * ( const MultiComplex& );
  MultiComplex operator / ( const MultiComplex& );




}; // MultiComplex



