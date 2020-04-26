#include <vector>
#include <cmath>

namespace xmath
{
    template <class Integer>
    bool is_prime_number(Integer n)
    {
      if(n<=1)
        return false;
    
      if(n%2==0)
        return false;
  
      Integer divisor = 2;
  
      Integer root = (Integer)sqrt(n);
      while(divisor <= root)
      {
        if(n%divisor == 0)
          return false;
      
        divisor++;
      }
  
      return true;
    }

    std::vector<int> compute_prime_numbers_until(int n);
}
