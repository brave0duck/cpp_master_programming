// 참조연습. 함수에 참조가 없으면 값이 변하지않는다. 참조로 해결
#include <iostream>
#include <string>

class Circle{
private:
    int radius;
public:
    Circle(int r){
        this->radius=r;
    }
    int getRadius(){
        return this->radius;
    }
    void setRadius(int r){
        this->radius = r;
    }
    void show(){
        std::cout << "반지름이 " << this->radius << "인 원" << std::endl;
    }
};
void increaseBy(Circle &a,Circle &b){
    int r = a.getRadius() + b.getRadius();
    a.setRadius(r);
}
int main(){
    Circle x(10), y(5);
    increaseBy(x,y);
    x.show();
}