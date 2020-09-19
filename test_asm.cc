#include <iostream>
#include <cstdint>

int64_t fibo(int64_t);

int main(){
  int64_t input = 0;
  std::cin >> input;
  std::cout << fibo(input) << std::endl;
}
