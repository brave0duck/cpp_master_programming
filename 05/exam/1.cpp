#include <iostream>
using namespace std;

class Circle{
private:
    int r;
public:
    Circle() : Circle(1){}
    Circle(int radius){
        r = radius;
    }
    int getArea(){
        return 3.14*r*r;
    }
};
void swap(Circle &a, Circle &b){
    Circle temp;
    temp = a;
    a = b;
    b = temp;
}
int main(){
    Circle A(20);
    Circle B(100);

    cout << "A is " << A.getArea() << ", B is " << B.getArea() << endl;

    swap(A,B);
    cout << "A is " << A.getArea() << ", B is " << B.getArea() << endl;

}