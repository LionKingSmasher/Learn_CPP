#include "BF.h"

int main(){
  char str[256];
  char *test;
  int a;

  printf("Enter string: ");
  scanf("%s" , str) ;
  test = BF(str);
  printf("%s\n", test);
  return 0;
}
