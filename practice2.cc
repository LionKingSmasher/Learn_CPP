#include <iostream>
#include <cinttypes>

typedef uint_least32_t u32;

template<unsigned no, typename T=u32>
struct MATH
{
  u32 imaginary = 0;
  u32 real = 0;
  MATH(u32 i, u32 r) : imaginary(i), real(r) { }
  MATH& operator+(MATH& second)
  {
    imaginary += second.imaginary;
    real += second.real;
    return *this;
  }
  MATH& operator-(MATH& second)
  {
    imaginary -= second.imaginary;
    real -= second.real;
    return *this;
  }
};

/*
template<unsigned no, typename T=u32>
struct Test{
  T data = 0;
  Test& operator=(int val)
  {
    data = val;
    return *this;
  }
};
*/

int main(){
  MATH<0> first(5, 3), second(4, 2);
  MATH<0> result = first - second;
  std::cout << "<" << first.imaginary << "," << result.real << ">" << std::endl;
}
