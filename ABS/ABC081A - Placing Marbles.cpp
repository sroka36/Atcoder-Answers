#include <iostream>

int main(){
    char s[4];
    std::cin >> s;
    int result = 0;
    for(int i = 0; i< 4; i++){
        if (s[i] == '1') result += 1;
    }
    std::cout << result;
    return 0;
}