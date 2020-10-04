//constexpr은 const와 다르지 않지만, 유일하게 다른점은 constexpr은 컴파일 과정에서 상수임을 확인하는 것입니다.
//즉 미리 변수를 설정하지 않은 int a를 constexpr에 넣으면 컴파일 과정에서는 제대로 된 것이 없으므로, 오류가 뜹니다
//보통 constexpr은 템플릿에 넣을 때 사용합니다.

#include <iostream>
#include <cinttypes>

typedef uint_least32_t u32; //습관;;
typedef uint_least8_t u8; 

/* 예제 1
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
*/

template<int ex>
struct T{
    u32 data = ex;
    void add() {
        if constexpr (ex == 1){
            this->data += 1;
            std::cout << data << std::endl;
        }
        if constexpr (ex == 2){
            this->data += 2;
        }
        else{
            this->data += this->data;
        }
    }
    operator unsigned() const {return data;}
};

int main(){
    T<1> u;
    std::cout << u << std::endl;
    u.add(); //버그 윽!
    std::cout << u << std::endl;
    u32 result = u;
    std::cout << result << std::endl;
}