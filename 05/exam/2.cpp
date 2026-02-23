#include <iostream>

void half(double &a);
int main(){
    double n=20;
    half(n);    //n의 반값을 구해 n을 바꾼다
    std::cout << n; //10
}
void half(double &a){
    a = a/ 2;
}