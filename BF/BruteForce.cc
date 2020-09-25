#include <iostream>
#include <cstdio>
#include <cstring>

extern "C" char* BF(char*);

int main(){
  char str[256];
  char* pre;
  int a;

  printf("Enter string: ");
  scanf("%s" , str) ;
  pre = BF(str);
  printf("Prefix array: %s\n", pre);
  return 0;
}
