/*
    2020.12.06 일요일

    Author: Shin4/TigerShin

    C++ set 복습
*/
#include <iostream>
#include <set>

template <typename T>
void print_set(std::set<T>& s){
//    std::cout << typeid(T).name() << "\n"; 타입 이름 확인용
    for(const auto& i : s){
        std::cout << i << std::endl;
    }
    std::cout << "\n";
}

int main(){
    std::set<int> test;
    std::set<std::string> test2;
    test.insert(10);
    test.insert(30);
    test2.insert("이이이잉");
    test2.insert("아아아아아");
    print_set(test);
    /*
        [출력결괴]
        10
        30
    */
    print_set(test2);
    /*
        [출력결과]
        아아아아아
        이이이잉
    */
    return 0;
}