#include <iostream>
#include <string>
#include <regex>

static inline int operator ""_i(const char * in, std::size_t len){ //리터럴이 _i인 연산자를 생성하고, 입력은 string
    return std::atoi(in); //string을 수로 바꾸어 return하도록 함
}

int main(int argc, char **argv){
    auto test = "100"_i; //"100"_i는 리터럴 선언에 따라, int형 100으로 변한다
    std::cout << test << std::endl; //결과: 100
}