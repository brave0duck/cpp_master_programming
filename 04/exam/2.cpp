#include <iostream>
#include <string>
using namespace std;

int main(){
    int sum=0;
    int *p = new int[5];

    cout << "정수 5개 입력 >> " << endl;
    for(int i=0; i<5 ;i++){
        cin >> p[i];
        sum += p[i];
    }
    
    cout << "평균 : " << (double)sum/5 << endl;

    delete [] p;
}