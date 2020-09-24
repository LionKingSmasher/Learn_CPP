#include <iostream>
#include <functional>
#include <string>
#include <cstdio>

/*
class TEST{
private:
  int a, b;
public:
  TEST(int a, int b) : a(a), b(b) { }
  void Show_Number(){
    std::cout << "num1: " << a << ", num2: " << b << std::endl;
  }
  TEST operator++()
  {
    a+=1;
    b+=1;
    return *this;
  }
};
*/

template<unsigned num>
struct TEST{
  float d[num];
  template<typename ...T>
  TEST(T... args) : d{args... } {}
  float operator[] (unsigned n) const { return d[n]; } //n은 배열 내의 인덱스 번호를 의미
};

int main(){
  TEST<3> xyz{1.f, 2.f, 3.f};
  std::cout << xyz[1] << std::endl;
}
