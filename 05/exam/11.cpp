// (4)까지 완료. 결론 : char* 보다 string이 편하다
#include <iostream>
#include <string>
using namespace std;

class Book{
    string title;
    int price;
public:
    Book();
    Book(string s, int price);
    ~Book();
    void set(string s,int price);
    void show(){cout << title << " , " << price << "원" << endl;}
};

Book::Book(){
    this->title = "";
    this->price =0;
}
Book::Book(string s, int price){
    this->title = s;
    this->price = price;
}
Book::~Book(){ 
}
void Book::set(string s, int price){
    this->title = s;
    this->price = price;
}
int main(){
    Book cpp("명품 C++", 10000);
    Book java = cpp;
    java.set("명품자바", 12000);
    cpp.show();
    java.show();
}