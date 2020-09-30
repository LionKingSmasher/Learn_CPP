#include <iostream>
#include <cstdio>

struct virus {
  char input[3] = {0,};
  int coin=5;
  operator unsigned() const { return coin; }
};

int main(){
  char input;
  struct virus v;
  system("clear");
  printf("카지노를 시작하겠습니다? [Y|N]: ");
  scanf("%c", &input);
  if(input=='N'||input=='n') exit(0);
  while(true){
    system("clear");
    printf("----------------------Welcome to Casino----------------------\n");
    printf("                    \u250F\u2501\u2513      \u250F\u2501\u2513      \u250F\u2501\u2513\n");
    printf("                    \u254A%c\u2549      \u254A%c\u2549      \u254A%c\u2549\n", 'a', 'b', 'c');
    printf("                    \u2517\u2501\u251B      \u2517\u2501\u251B      \u2517\u2501\u251B\n");
    printf("남은 코인 갯수: %d\n", v.coin);
    std::endl;
    std::endl;
    if(coin<=0) exit(0);
    printf("돌린다[Y|N]");
    scanf("%c", input);
  }
}
