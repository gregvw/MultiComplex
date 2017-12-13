#pragma once

template<class Derived>
const Derived& Base<T>::operator()( void ) const {
  return static_cast<const Derived&>(*this);
}
