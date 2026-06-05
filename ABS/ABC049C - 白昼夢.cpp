#include <iostream>

int main(){
    std::string s;
    std::cin >> s;
    int temp[3] = {0, 0, 0};
    int result = 0;
    for(int i = 0; i < int(s.size()); i++){
        if(s.substr(i, 5) == "dream" && s.substr(i, 7) != "dreamer") temp[0] += 1;
        if(s.substr(i, 10) == "dreamerase" && s.substr(i, 11) != "dreameraser") temp[0] += 2;
        if(s.substr(i, 11) == "dreameraser") {temp[0] += 1; temp[1] += 1;}
        if(s.substr(i, 5) == "erase" && s.substr(i, 6) != "eraser" && i < 5) temp[0] += 1;
        if(s.substr(i, 6) == "eraser" && i < 5)  temp[1] += 1;
        if(i >= 5){
            if(s.substr(i, 5) == "erase" && s.substr(i, 6) != "eraser" && s.substr(i-5, 10) != "dreamerase") temp[0] += 1;
            if(s.substr(i, 6) == "eraser" && s.substr(i-5, 11) != "dreameraser")  temp[1] += 1;
        }
        if(s.substr(i, 7) == "dreamer" && s.substr(i, 11) != "dreameraser" && s.substr(i, 10) != "dreamerase") temp[2] += 1;
    }
    result += temp[0] * 5;
    result += temp[1] * 6;
    result += temp[2] * 7;
    //std::cout << result << "+" << int(s.size());
    if(result == int(s.size())) std::cout << "YES";
    else std::cout << "NO";
}