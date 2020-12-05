#include <iostream>

class T {
private:
    int n1;
public:
    T(int a) : n1(a) { }
    int& access() { return n1; }
    T add(const int a) { n1 += a; return *this; }
    operator int() const { return n1; }
};

int main(int argc, char** argv){
    T t(9), t2(10);
//    int& a = t.access(); //a는 사실상 T 클래스에 있는 n1과 동일함
//    std::cout << t << "\n";
//    a -= 1;
//    std::cout << t << "\n";
    std::cout << t2 << "\n";
    t2.add(1).add(1);
    std::cout << t2 << "\n";
}