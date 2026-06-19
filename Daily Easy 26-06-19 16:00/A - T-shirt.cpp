#include <iostream>
#include <format>

int main(){
    int a, b, c, x;
    std::cin >> a >> b >> c >> x;
    double p = double(c) / double(b - a);
    if(x <= a) printf("%.12f", 1.0);
    if(x > a && x <= b) printf("%.12f", p);
    if(x > b) printf("%.12f", 0.0);
    return 0;
}