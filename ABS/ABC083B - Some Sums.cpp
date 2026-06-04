#include <iostream>
#include <math.h>


int getDigits(int count);

int main(){
    int n, a, b;
    int temp = 0;
    std::cin >> n >> a >> b;
    for(int i = 1; i < n + 1;i++){
        if(getDigits(i) >= a && getDigits(i) <= b) temp += i;
    }
    std::cout << temp;
    return 0;
}

int getDigits(int count){
    int result = 0;
    if(count == 10000) return 1;
    if(count > 1000){
        int temp = count % 1000;
        result += (count - temp) / 1000;
        result += (temp - (temp % 100)) / 100;
        temp = temp % 100;
        result += (temp - (temp % 10)) / 10;
        result += temp % 10;
        return result;       
    }
    if(count == 1000) return 1;
    if(count == 100) return 1;
    if(count > 100){
        int temp = count % 100;
        result += (count - temp) / 100;
        result += (temp - (temp % 10)) / 10;
        result += temp % 10;
        return result;
    }
    if(count > 10){
        result += (count - (count % 10)) / 10;
        result += count % 10;
        return result;
    }
    if(count == 10) return 1;
    if(count < 10) return count;
}