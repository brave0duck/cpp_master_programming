#include <iostream>
using namespace std;

int main(){
    double area;
    int r;
    cout << "< 원의 면적 구하기 > " << endl;
    cout << "반지름 값 : ";
    cin >> r;

    area = 3.14*r*r;
    cout << "원 면적은 " << area << " 입니다"<< endl;

    return 0;
}