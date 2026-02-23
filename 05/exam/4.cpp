#include <iostream>

bool bigger(int a,int b,int &big){
    if(a==b){
        return true;
    }else{
        big = (a>b)?a:b;
        return false;
    }
}
int main(){
    int a=10;
    int b=20;
    int big;

    if(bigger(a,b,big)){
        std::cout << "Two number is same " << std::endl;
    }else{
        std::cout << "big number is " << big << std::endl;
    }
}