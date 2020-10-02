#include <iostream>
#include <compare>

int main(){
  int a, b;
  std::cin >> a >> b;
  if ((a<=>b) > 0) std::cout << "1" << std::endl;
  else if((a<=>b) == 0) std::cout << "0" << std::endl;
  else if((a<=>b) < 0) std::cout << "-1" << std::endl;
  std::cout << "end" << std::endl;
}
