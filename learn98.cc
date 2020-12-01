#include <iostream>
#include <cinttypes>

typedef uint_least32_t u32;

struct TEST{
    u32 data;
    TEST(int a=0) : data(a) { }
    operator unsigned() const { return this->data; }
    TEST& operator++() { *this = *this+1; return *this; } //same as ++a
};

int main(){
    TEST a(1);
    std::cout << a << std::endl;
    ++a;
    std::cout << a << std::endl;
}