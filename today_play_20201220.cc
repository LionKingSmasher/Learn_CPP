#include <iostream>
#include <cinttypes>

typedef uint_least32_t u32;

namespace test{
//    template<u32 A, u32 B>
    int add(int a, int b){
        return a+b;
    }

    void cal(int option){
        static int(* C[2])(int a1, int b1) = {
            &add
        };
        std::cout << C[0](1, 2) << std::endl;
//      std::cout << C[option]() << "\n";
    }
};

int main(int argc, char** argv){
    test::cal(0);
}