#include <iostream>
#include <cinttypes>

typedef uint_least8_t u8; //unsigned char
typedef uint_least16_t u16; //unsgined short
typedef uint_least32_t u32; //unsigned int

template <typename T> T test_template(T val){
  return val;
}

int main(){
  u32 a = test_template<u32>(9999);
  u16 d = test_template<u16>(888);
  u8 b = test_template<u8>(226);
  std::cout << a << std::endl;
  std::cout << d << std::endl;
  std::cout << b << std::endl;
}
