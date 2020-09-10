#include <iostream>
#include <vector>

template<typename T> //템플릿 설정
T sum(T a, T b){
	return a+b;
}

int main(){
	std::cout << "Test" << std::endl;
	std::cout << "템플릿 함수 int형: " << sum<int>(1, 2) << std::endl;
	std::cout << "템플릿 함수 float형: " << sum<float>(1.21, 2.88) << std::endl;
	std::cout << "템플릿 함수 string형: " << sum<string>("오", "레오") << std::endl;
}