// (3)까지 완료. 에러없이 작동은함
#include <iostream>
#include <cstring>
using namespace std;

class Book{
    char * title;
    int price;
public:
    Book();
    Book(const char *title, int price);
    Book(const Book &b);
    ~Book();
    void set(const char* title,int price);
    void show(){cout << title << " , " << price << "원" << endl;}
};

Book::Book(){
    this->title = NULL;
    this->price =0;
}
Book::Book(const char* title, int price){
    this->title = new char[strlen(title)+1];
    strcpy(this->title,title);
    this->price = price;
}
Book::Book(const Book &b){
    this->title = new char[strlen(b.title)+1];
    strcpy(this->title, b.title);
    this->price = b.price;
}
Book::~Book(){
    if(this->title){
        delete [] this->title;
    }
}
void Book::set(const char* title, int price){
    if(this->title){
        delete [] this->title;
    }
    this->title = new char[strlen(title)+1];
    strcpy(this->title, title);
    this->price = price;
}
int main(){
    Book cpp("명품 C++", 10000);
    Book java = cpp;
    java.set("명품자바", 12000);
    cpp.show();
    java.show();
}