#include <iostream>

int main(){
    int a, b;
    std::cin >> a >> b;
    int result = a * b;
    if(result % 2 == 0) std::cout << "Even";
    else std::cout << "Odd";
    return 0;
}