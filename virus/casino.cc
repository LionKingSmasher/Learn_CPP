#include <iostream>
#include <cstdio>
#include <random>

struct virus {
  char input[3] = {0,};
  int coin=5;
  operator unsigned() const { return coin; }
};

template<typename T>
inline T random(T min, T max){
  std::random_device rd;
  std::mt19937 mt(rd());
  std::uniform_int_distribution<T> dist(min, max);

  return dist(mt);
}

char turn(int in){
  switch(in){
  case 0:
    return 'A';
  case 1:
    return 'B';
  case 2:
    return 'C';
  }
}

int main(){
  char input;
  struct virus v;
  system("clear");
  printf("카지노를 시작하겠습니다? [Y|N]: ");
  scanf("%c", &input);
  if(input=='N'||input=='n') exit(0);
  while(true){
    system("clear");
    for(int i = 0; i < 3; i++){
      v.input[i] = turn(random<int>(0, 2));
    }
    printf("----------------------Welcome to Casino----------------------\n");
    printf("                    \u250F\u2501\u2513      \u250F\u2501\u2513      \u250F\u2501\u2513\n");
    printf("                    \u254A%c\u2549      \u254A%c\u2549      \u254A%c\u2549\n", v.input[0], v.input[1], v.input[2]);
    printf("                    \u2517\u2501\u251B      \u2517\u2501\u251B      \u2517\u2501\u251B\n");
    printf("남은 코인 갯수: %d\n", v.coin--);
    printf("\n\n");
    if(v.coin<=0) exit(0);
    printf("돌린다[Y|N]");
    scanf("%c", &input);
    system("clear");
  }
}
