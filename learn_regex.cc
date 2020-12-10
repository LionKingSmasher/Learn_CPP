#include <iostream>
#include <regex>
#include <vector>

static inline std::regex operator ""_r(const char* a, const std::size_t s){ //변수에 들어가는 것에 _r이 들어가는 경우에는 해당 인라인 함수를 호출에 넣도록 함
    return std::regex(a, s); //변수 설정이 아닌 경우에는 std::regex는 std::basic_regex로 들어가짐
}

int main(int argc, char** argv){
    std::vector<std::string> file_names = {
        "abcdefgh",
        "accdefgh",
        "aBcdefgh"
    };
    /*
    std::regex reg("a([a-z])cdefgh"); //패턴 설정

    /*
        regex의 단점...

        패턴을 설정하려면 따로 변수를 설정해야함....

        [해결 방안]
        
        user defined literal을 만들어 사용하면 편할 것이라고 생각
    //

    for(const std::string& file_name : file_names){
        std::cout << std::regex_match(file_name, reg) << "\n";
    }
    */

   for(const std::string& file_name : file_names)
       if(std::regex_match(file_name, "a([a-z]|[A-Z])cdefgh"_r)) //_r은 우리가 위에서 설정한 리터럴로, std::regex를 반환하도록 한다. 패턴은 a와 c사이에 아무 알파벳을 넣었다는 패턴이다
           std::cout << "통과!" << "\n";
    
    /*
        [결과]
        통과!
        통과!
        통과!
    */
}