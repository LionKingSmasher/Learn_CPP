#include <iostream>


template<int A>
struct test_struct{
	static const int a_ = A;
};


int main(){
	typedef test_struct<0> z;
	typedef test_struct<1> o;
	std::cout << "결과: " << o::a_ << std::endl;
//	std::cout << "Hello World" << std::endl;
}
