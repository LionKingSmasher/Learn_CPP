#include <iostream>
#include <cstdio>

typedef unsigned long DWORD;

struct test_struct {
    DWORD data;
};

DWORD t1(int a1, struct test_struct* a2);

int main(){
    DWORD v1; //input
    DWORD v2;
    v2 = v1;
    test_struct strucT;
    scanf("%lu", &v1);
    printf("%lu\n", v1 + 0x11u);
    printf("%lu\n", (v1 + 0x11u) ^ (v1 + 0x01u));
    if(((v1 += 0x11u) ^= (v2 + 0x01u)) == t1(v2, &strucT)){
        puts("GOOD!\n");
    }
    else{
        printf("%lu %lu\n", v1, t1(v2, &strucT));
        puts("Nah...\n");
    }
    return 0;
}

DWORD t1(int a1, struct test_struct* a2){
    DWORD result;
    DWORD v1;
    v1 = a1;
    a2->data = v1 + 0x11u;
    a2->data ^= (v1 + 0x01u);
    result = a2->data;
    return result;
}