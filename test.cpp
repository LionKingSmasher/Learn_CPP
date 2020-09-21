#include <iostream>
#include <cstdint>

extern "C" int64_t sum(int64_t, int64_t);

int main(){
	int start, end;
	std::cin >> start;
	std::cin >> end;
	std::cout << sum(start, end) << std::endl;
}
