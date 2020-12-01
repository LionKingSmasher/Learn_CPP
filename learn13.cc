#include <iostream>
#include <map>

int main()
{
    std::map<long, long> m;
    auto a = m.insert({1, 2});
    std::cout << a.first->second << std::endl;
}


