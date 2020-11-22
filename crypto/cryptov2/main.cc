#include <iostream>
#include <cinttypes>
#include "header/Crypto.h"

int main(int argc, char **argv)
{
    char t[256] = "abcabcabcabcabcabcabc\0";
    char* a = test(t);
    for(int i = 0; a[i] != '\0'; i++){
    	printf("%8x\n", a[i]);
    }
}