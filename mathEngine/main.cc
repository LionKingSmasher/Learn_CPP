#include "sys.h"
#include <cmath>
#include <cstdlib>
#include <vector>
#include <functional>
#include <stack>

int main(){
//	int re=0; //초기화
	std::string a, b, chg;
	char cal_char;
	std::string num_chk;
	std::stack<std::string> num; //숫자 스택 부분
	std::stack<char> cal; //기호 스택 부분
	std::string input;
	std::cout << "MATH ENGINE v0.1" << std::endl;
	while(true){
		std::cout << "입력:";
		std::cin >> input;
		if(input=="exit")
			break;
		else if(input=="information"){
			std::cout << "*****************정보******************" << std::endl;
			std::cout << "프로그램명: Math Engine" << std::endl;
			std::cout << "버전: 0.1" << std::endl;
			std::cout << "개발자: 신현규(TigerShib)" << std::endl;
			std::cout << "**************************************" << std::endl;
		}
		else {
			for(int i = 0; i <= input.size(); i++){
				if(chk(input[i])){
//  			std::cout << input[i] << std::endl;
					num_chk.append(1, input[i]);
					continue;
				}
				else{
//   			std::cout << num_chk << std::endl;
					if(i != input.size()) cal.push(input[i]);
					num.push(num_chk);
					num_chk = "";
				}
			}
			/*
			while(!num.empty()){
//				std::cout << "사이즈:" << num.size() << std::endl;
				std::cout << num.top() << std::endl;
				num.pop();
			}
			*/
			while(!cal.empty()){
				b = num.top();
				num.pop();
				a = num.top();
				num.pop();
				cal_char = cal.top();
				cal.pop();
				if(cal.size() > 0){
					if(cal.top() == '-'){
						cal.pop();
						chg = a;
						a = "-";
						a.append(chg);
						cal.push('+');
					}
				}
//   		std::cout << a << std::endl;
				std::string ret = calc(a, b, cal_char);
//			std::cout << cal.size() << std::endl;
				num.push(ret);
			}
			std::cout << "계산 결과: " << num.top() << std::endl;
			num.pop();
		}
	}
	std::cout << "***************종료***************" << std::endl;
}
