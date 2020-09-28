#include <iostream>
#include <cstdio>
#include <cinttypes>

typedef uint_least32_t u32;

template<typename O=u32>
struct T {
  O num;
  T(int a=0) : num(a) { }
  operator unsigned() const { return num; }
  T& operator+(O v) { num += v; return *this; }
  T& operator++() { *this = *this + 1; }
  T& operator++(int) { T temp(num); ++*this; return temp;}
};

int main(){
  T t(3), test;
  test = t+4;
  std::cout << "++을 하기 전: " << t << std::endl;
  ++t;
  std::cout << "++을 한 후: " << t << std::endl;
  std::cout << "=========================" << std::endl;
  std::cout << "TEST: " << test << std::endl;
}
