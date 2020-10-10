#include <iostream>
#include <fstream>
#include <cstdio>
#include <vector>

int main(int argc, char* argv[]){
    std::vector<int> custom_key;
    FILE *in;
    bool key_loop = true;
    int ch;
    if((in = fopen(argv[1], "rb")) == NULL){
        puts("실패!\n");
        exit(0);
    }
    while((ch = fgetc(in)) != EOF){
        if(key_loop && ch==0xFE)
            key_loop = false;
        if(key_loop){
            custom_key.push_back(ch);
        }
        else{
            for(int i = custom_key.size() - 1; i >= 0; i--){
                ch ^= custom_key[i];
            }
        }
        std::cout << ch << std::endl;
    }
}