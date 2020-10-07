#include <iostream>

/*
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
*/

template<int ex>
struct A{
    int data[ex];
    template<typename ...T>
    A(T... args) : data{args...} { }
    auto add(int n){
        if constexpr (ex == 1){
            return data[0] += n;
        }
        if constexpr (ex == 2){
            data[0] += n;
            data[1] += data[0];
            return A<2>{data[0], data[1]};
        }
        if constexpr (ex == 3){
            data[0] += n;
            data[1] += data[0];
            data[2] += data[1] + data[0];
            return A<3>{data[0], data[1], data[2]};
        }
    }
};

int main(){
    struct A<3> a{1, 2, 3};
    std::cout << a.data[2] << std::endl;
    struct A<3> b = a.add(1);
    std::cout << b.data[2] << std::endl;
}