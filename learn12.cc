#include <iostream>
#include <compare>

int main(){
    int a, b;
    std::cin >> a >> b;
    if ( (a <=> b) > 0) std::cout << "1" << "\n";
    return 0;
}


