#include <cstdio>

#define LA(X, Y) X->addr = &Y //Load Address
#define ARROW 224
#define LEFT 75
#define RIGHT 77

struct WOW
{
    int data;
    struct WOW *addr = NULL; //Address
};

void Load_Adress(struct WOW *u, struct WOW w);

int main(){
    struct WOW w;
    struct WOW u;
    w.data = 1;
    u.data = 2;
    Load_Adress(&w, u);
    printf("%d\n", w.addr->data);
}

void Load_Adress(struct WOW *u, struct WOW w){
    LA(u, w);
    return;
}