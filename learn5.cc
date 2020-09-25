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
  inline TEST<3> add(TEST<3> b) { return TEST<3>{d[0]+b[0], d[1]+b[1], d[2]+b[2]}; }
};

int main(){
  TEST<3> xyz{1.f, 2.f, 3.f}, xyz2{2.f, 3.f, 4.f};
  TEST<3> result = xyz.add(xyz2); // result[0]=3.0, result[1]=5.0, result[2]=7.0
  std::cout << result[0] << std::endl; //출력 결과 3(3.0)
}
