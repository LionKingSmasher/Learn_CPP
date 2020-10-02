#include <iostream>

constexpr int sum(int N){
    int total = 0;
    for(int i = 1; i<=N; i++){
        total+=i;
    }
    return total;
}

template<int ex>
struct T{
    operator unsigned() const { return ex; }
};

int main(){
    T<sum(100)> t;
    std::cout << t << std::endl;
}