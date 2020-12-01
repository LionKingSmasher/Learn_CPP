#include <iostream>
#include <ostream>
#include <cinttypes>

typedef uint_least8_t u8;
typedef uint_least32_t u32;

template<u32 code>
struct Color {
    enum { Code = 0x1E }; //30
    operator<<(std::ostream& os){
        return os << "\033[" << Code + code << "m";
    }
};

int main(){
    Color<0x02> c;
    std::cout << c << std::endl;
}