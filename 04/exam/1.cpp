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
    Color screenColor(255,0,0); 
    Color *p;
    //(1) p가 screenColor주소를 가지도록 코드생성
    p = &screenColor;
    //(2) p와 show()를 이용하여 screenColor색 출력
    p->show();
    //(3) color의 1차원 배열 colors선언. 원소는 3개
    Color colors[3];
    // (4) p가 colors배열을 가리키도록 코드작성
    p = colors;
    // (5) p와 setcolor()를 이용하여 
    p[0].setColor(255,0,0);
    p[1].setColor(0,255,0);
    p[2].setColor(0,0,255);

    for(int i=0; i<3; i++){
        p[i].show();
    }
}