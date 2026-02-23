#include <iostream>
#include <string>
using namespace std;

class Color{
private:
    int red,green,blue;
public:
    Color(){red = green = blue = 0;}
    Color(int r, int g, int b){ red = r; green = g; blue=b;}
    void setColor(int r,int g,int b){ red =r; green=g ; blue=b;}
    void show(){ cout << red << ' ' << green << ' ' << blue << endl;}
};
int main(){
    Color screenColor(255,0,0); //빨간색의 screenColor객체 생성
    Color *p;   //Color타입의 포인터p선언
    //(1) p가 screenColor주소를 가지도록 코드생성
    //(2) p와 show()를 이용하여 screenColor
}