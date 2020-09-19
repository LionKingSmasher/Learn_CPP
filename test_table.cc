#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>


struct table{
  char text[256] = {0, };
  table *next;
};

int main(){
  table *T;
  char input[256] = { 0, };
  while(true){
    printf("%d\n", strlen(T->text));
    scanf("%s", input);
    if(!strcmp(input, "done"))
      break;
    else{
      if(strlen(T->text) < 10)
        strcpy(T->text, input);
      else
        strcpy(T->next->text, input);
    }
  }
  printf("저장: %s\n", T->text);
  printf("비둘기집으로 인한 저장: %s\n", T->next->text);
//free(T);
}
