#pragma once

template<class Derived>
struct Base {
  const Derived& operator()( void ) const;
};


