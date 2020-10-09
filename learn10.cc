#include <cstdio>
#include <iostream>

int main(){
    int a = ({
        std::cout << "Test" << std::endl;
        int a;
        std::cin >> a;
        a++;
        std::cout << a << std::endl;
        a;
    });
    std::cout << a << std::endl;
}