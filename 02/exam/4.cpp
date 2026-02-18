#include <iostream>
using namespace std;

float find_big(float a[],int size){
    float fmax = a[0];
    for(int i=0; i<size ; i++){
        if(fmax < a[i]){
            fmax = a[i];
        }
    }
    return fmax;
}
int main(){
    float a[5];

    cout << "다섯 부동소수점을 입력하세요 : " << endl;
    for(int i=0; i<5 ; i++){
        cout << i+1 << "번째 수 : ";
        cin >> a[i];
    }
    cout << "가장 큰수는 : " << find_big(a,5) << "입니다";

    return 0;
}