#include <iostream>
#include <string>

void squre(int n[], int size){
    for(int i=0; i<size ; i++)
        n[i] *= n[i];
}
int main(){
    int m[3] = {1,2,3};
    squre(m,3);
    for(int i=0; i<3 ; i++)
        std::cout << m[i] << ' ';
}