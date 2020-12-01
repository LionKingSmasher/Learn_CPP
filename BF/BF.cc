#include "BF.h"

char* BF(char* input)
{
    char *result;
    char *chk = (char*)malloc(1024);
    memset(chk, 0, 1024); //char chk[1024] = { 0, }; 
    int cnt = strlen(input); //count
    while(TRUE)
    {
        if(!strcmp(chk, input))
        {
            result = chk;
            break;
        }
        else
        {
            int i = 0;
            do
            {
                __asm__ __volatile__("");
            }while(chk[i] != 0)
        }
    }
    free(chk); //free memory
    return result;
}


