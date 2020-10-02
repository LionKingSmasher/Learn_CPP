#include <iostream>
#include <functional>

int main(){
  int a, b;
  std::cin >> a >> b;
  auto r = []<typename T>(T p) -> int{
    return p;
  };
  std::cout << r(a+b) << std::endl;
}
