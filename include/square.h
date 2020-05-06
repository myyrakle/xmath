#ifndef XMATH_SQUARE
#define XMATH_SQUARE

namespace xmath
{
  template <class Number>
  Number square(const Number& n)
  {
    return n*n;
  }

    template <class Float>
  Float square_root(const Float& n, size_t max = 20)
  {
    if(std::is_floating_point<Float>::value)
      return std::sqrt(n);
      
    //...
    
    return 0.;
  }

  //overloads for integer parameter
  //return float
  float square_root_single(signed char n)
  {
    return square_root((float)n);
  }
  float square_root_single(short n)
  {
    return square_root((float)n);
  }
  float square_root_single(int n)
  {
    return square_root((float)n);
  }
  float square_root_single(long n)
  {
    return square_root((float)n);
  }
  float square_root_single(long long n)
  {
    return square_root((float)n);
  }
  float square_root_single(unsigned char n)
  {
    return square_root((float)n);
  }
  float square_root_single(unsigned short n)
  {
    return square_root((float)n);
  }
  float square_root_single(unsigned int n)
  {
    return square_root((float)n);
  }
  float square_root_single(unsigned long n)
  {
    return square_root((float)n);
  }
  float square_root_single(unsigned long long n)
  {
    return square_root((float)n);
  }
  
  //overloads for integer parameter
  //return double
  double square_root(signed char n)
  {
    return square_root((double)n);
  }
  double square_root(short n)
  {
    return square_root((double)n);
  }
  double square_root(int n)
  {
    return square_root((double)n);
  }
  double square_root(long n)
  {
    return square_root((double)n);
  }
  double square_root(long long n)
  {
    return square_root((double)n);
  }
  double square_root(unsigned char n)
  {
    return square_root((double)n);
  }
  double square_root(unsigned short n)
  {
    return square_root((double)n);
  }
  double square_root(unsigned int n)
  {
    return square_root((double)n);
  }
  double square_root(unsigned long n)
  {
    return square_root((double)n);
  }
  double square_root(unsigned long long n)
  {
    return square_root((double)n);
  }
  
  //overloads for integer parameter
  //return long double
  long double square_root_long(signed char n)
  {
    return square_root((long double)n);
  }
  long double square_root_long(short n)
  {
    return square_root((long double)n);
  }
  long double square_root_long(int n)
  {
    return square_root((long double)n);
  }
  long double square_root_long(long n)
  {
    return square_root((long double)n);
  }
  long double square_root_long(long long n)
  {
    return square_root((long double)n);
  }
  long double square_root_long(unsigned char n)
  {
    return square_root((long double)n);
  }
  long double square_root_long(unsigned short n)
  {
    return square_root((long double)n);
  }
  long double square_root_long(unsigned int n)
  {
    return square_root((long double)n);
  }
  long double square_root_long(unsigned long n)
  {
    return square_root((long double)n);
  }
  long double square_root_long(unsigned long long n)
  {
    return square_root((long double)n);
  }
}

#endif
