#include <iostream>
#include <string>
using namespace std;

class Book{
    char * title;
    int price;
public:
    Book(const char *title, int price);
    ~Book();
    void set(char* title,int price);
    void show(){cout << title << " , " << price << "원" << endl;}
}
Book::Book(const char* title, int price){
    this->title = title;
    this->price = price;
}
Book::~Book(){

}
void Book::set(char* title, int price){

}
int main(){
    Book cpp("명품 C++", 10000);
    Book java = cpp;
    java.set("명품자바", 12000);
    cpp.show();
    java.show();
}