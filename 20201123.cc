#include <iostream>
#include <vector>
#include <queue>
#include <functional>

int test(std::function<int(int, int)> f){
    return f(10, 10);
}

int main(){
    int a = test( [](int a, int b)->int{
        return a * b;
    });
    std::cout << a << std::endl;
}


