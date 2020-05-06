#ifndef XMATH_POWER
#define XMATH_POWER

#include <cmath>
#include <type_traits>

namespace xmath
{
  template <class Integer>
  Integer power_int(const Integer& x, const Integer& y)
  {
    Integer sum = x;
    for(Integer count = y; count>1 ;count-=1)
    {
      sum*=x;
    }
  
    return sum;
  }

  template <class Float>
  Float power_float(const Float& x, const Float& y)
  {
    if(std::is_floating_point<Float>::value)
      return std::pow(x, y);
    
    Float sum = x;
    //... ToDo implement
  
    return sum;
  }
}

#endif
