#ifndef XMATH_FACTORIAL
#define XMATH_FACTORIAL

#include <exception>

namespace xmath
{
    template <class Integer>
    Integer factorial(const Integer& n)
    {
      Integer count = n;

      if(n<0)
      {  
        return -1;
      }
  
      Integer sum = 1;
  
      while(n!=0)
      {
        sum *= count;
        count-=1;
      }
  
      return sum;
    }
}

#endif
