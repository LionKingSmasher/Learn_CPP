#include <iostream>

constexpr int sum(int n){
    int result = 0;
    for(int i = 1; i<=n; i++){
        result += i;
    }
    return result;
}

template<int ex>
struct A{
    int data = ex;
    operator unsigned() const { return data; }
};

int main(){
    struct A<sum(100)> a;
    std::cout << a << std::endl;
}