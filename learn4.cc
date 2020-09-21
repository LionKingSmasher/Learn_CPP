//20200921 익명 함수 실습
#include <iostream>
#include <functional>

int test_lambda(int a, std::function<int(int)> f){
  return f(a);
}

int add(int a, int b){
  return a + b;
}

int main(){
  int a, b, result;
  std::cin >> a;
  /*
  auto calc = add(a, [&b](void) -> int {
    return b *= b;
  });
  std::cout << calc << std::endl;
  */
  result = test_lambda(a, [](int a) -> int {
    a *= a;
  });
  std::cout << result << std::endl;
}
