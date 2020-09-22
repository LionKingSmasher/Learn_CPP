#include "sys.h"

std::string calc(std::string a, std::string b, char calc){
  int num1, num2;
  num1 = std::stoi(a);
  num2 = std::stoi(b);
  switch(calc){
  case '+':
    num1+=num2;
    break;
  case '-':
    num1-=num2;
    break;
  }
  return std::to_string(num1);
}

bool chk(char input){
  int i = input - '0';
  if(i <= 9 && i >= 0){
    return true;
  }
  else return false;
}
