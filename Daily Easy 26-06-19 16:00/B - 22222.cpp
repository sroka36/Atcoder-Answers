#include <iostream>
#include <string>

int main(){
    std::string s;
    std::cin >> s;
    std::string count = "";
    for(int i = 0; i < int(s.length()); i++){
        if(s[i] == '2') count += "2";
    }
    std::cout << count;
    return 0;
}