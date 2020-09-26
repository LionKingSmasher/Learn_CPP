#include <iostream>
#include <functional>

typedef struct calc C;
struct calc{
  int Add() { }
  int Add(int num, std::function<int(int)> a, int b) { Add(a(num), b);}
  int Add(int a, int b) { return a+b; }
};

int main(){
  C c;
  std::cout << c.Add(9, [](int a) -> int{
    return a*=a;
  }, 4) << std::endl;
  std::cout << c.Add(81, 4) << std::endl;
}
