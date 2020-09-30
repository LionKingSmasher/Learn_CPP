#include <iostream>
#include <cstdio>

struct virus {
  char input[3] = {0,};
};

int main(){
  char input;
  system("clear");
  printf("카지노를 시작하겠습니다? [Y|N]: ");
  scanf("%c", &input);
  if(input=='N'||input=='n') exit(0);
  system("clear");
  printf("----------------------Welcome to Casino----------------------\n");
  printf("                    \u250F\u2501\u2513      \u250F\u2501\u2513      \u250F\u2501\u2513\n");
  printf("                    \u254A%c\u2549      \u254A%c\u2549      \u254A%c\u2549\n", 'a', 'b', 'c');
  printf("                    \u2517\u2501\u251B      \u2517\u2501\u251B      \u2517\u2501\u251B\n");
}
