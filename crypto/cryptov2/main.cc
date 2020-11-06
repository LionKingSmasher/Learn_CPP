#include <iostream>
#include <cinttypes>

extern "C" {
    char* test(char* input);
}

int main(int argc, char **argv)
{
    char t[256] = "abcabcabc\0";
    char* a = test(t);
    printf("%s\n", a);
}