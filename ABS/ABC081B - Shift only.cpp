#include <iostream>

int main(){
    int n;
    std::cin >> n;
    int list[n];
    int result = 999;
    for(int i = 0; i < n; i++) {
        std::cin >> list[i];
        int temp = 0;
        while(list[i] % 2 == 0){
            list[i] = list[i] / 2;
            temp += 1;
        }
        if(temp <= result) result = temp;
    }
    std::cout << result;

}