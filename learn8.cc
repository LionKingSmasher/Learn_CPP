#include <cstdio>

#define T(X, Y) X->data = Y

struct WOW
{
    int data;
};

void t(struct WOW *u, int n);

int main(){
    struct WOW w;
    int a = 90;
    t(&w, a);
    printf("%d\n", w.data);
}

void t(struct WOW *u, int n){
    T(u, n);
}
