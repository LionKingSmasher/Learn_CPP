#include <iostream>
#include <functional>
#include <vector>

int main(int argc, char *argv[]){
    std::vector<int> a;
    a.push_back(2);
    std::cout << a[0] << std::endl;
    std::vector<int> b = [=]<typename T>(std::vector<T> d){
        d.push_back(3);
        return d;
    };
    for(int i : b){
        std::cout << i << std::endl;
    }
    return 0;
}

