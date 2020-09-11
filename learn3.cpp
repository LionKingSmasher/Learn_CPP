#include <iostream>

template<int NUM>
struct TEST{
	int num=NUM;
};

auto A(int a)->int{
	return a;
}

template<typename T>
T add(T O, T W){
	return O + W;
}

int main(){
	TEST<0> o;
	TEST<1> w;
	std::cout << "출력 결과: " << o.num << std::endl;
	std::cout << "출력 결과: " << A(2) << std::endl;
	std::cout << "출력 결과: " << add<int>(o.num, w.num) << std::endl;
}
