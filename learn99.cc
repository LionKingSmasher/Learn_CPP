#include <iostream>
#include <cinttypes>

typedef uint_least32_t u32; 

template<typename T=u32>
struct TEST{
    T data;
    TEST(T a) : data(a) { }
    operator unsigned() const { return data; }
};

int main(){
    struct TEST<u32> a(1);
    std::cout << a.data << std::endl;
    return 0;
}