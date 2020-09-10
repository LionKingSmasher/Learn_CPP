#include <iostream>
#include <vector>

struct test_struct{
	int _1 = 0;
	bool _2 = false;
};

int main(){
	/*
	std::vector<int> v;
	v.push_back(3);
	v.push_back(4);
	std::cout << v.at(0) << std::endl;
	*/
	std::vector<test_struct> v; //구조체 vector 생성
	test_struct t; //다른 구조체 't' 생성
	t._1 = 10; //구조체의 _1에 10 값 추가
	t._2 = true; //_2에 true값 추가
	v.push_back(t); // 't'라는 구조체를 vector 'v'의 끝에 추가
	std::cout << v[0]._1 << std::endl; //v[0], 즉 구조체 't'에 있는 _1, 즉 10 출력
	std::cout << v[0]._2 << std::endl; //'t'에 있는 _2, 즉 true(1) 출력
}