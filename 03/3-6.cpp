#include <iostream>
using namespace std;

class Rectangle{
    int width;
    int height;
public:
    bool isSqure();
    Rectangle();
    Rectangle(int w,int h);
    Rectangle(int length);
    
};

Rectangle::Rectangle() : Rectangle(1,1){}

Rectangle::Rectangle(int w,int h)
    : width(w), height(h){}

Rectangle::Rectangle(int length) : Rectangle(length,length){}

bool Rectangle::isSqure(){
    if(width == height){
        return true;
    }else{
        return false;
    }
}
int main(){
    Rectangle rect1;
    Rectangle rect2(3,5);
    Rectangle rect3;

    if(rect1.isSqure()) cout << "rect1은 정사각형이다." << endl;
    if(rect2.isSqure()) cout << "rect2은 정사각형이다." << endl;
    if(rect3.isSqure()) cout << "rect3은 정사각형이다." << endl;
}