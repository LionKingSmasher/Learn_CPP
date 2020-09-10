#include <iostream>
#include <cmath>
#include <cstdlib>
#include <cstring>
#include <string>
#include <vector>

template<typename T>
T sum(T a, T b){
	return a+b;
}
template<typename T>
T t;

int main(){
	t<int> = 3;
	std::cout << t<int> << "Hello World!" << std::endl;
	t<std::string> = "기모띠";
	std::cout << "1:" << t<std::string> << " 2: " << t<int> << std::endl;
}