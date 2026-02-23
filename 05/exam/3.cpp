#include <iostream>
#include <string>
//using namespace std;

void combine(std::string &a,std::string &b, std::string &c){
    c = a + " " + b;
}
int main(){
    std::string text1("I love you"),text2("very much"),text3;
    combine(text1,text2,text3); // 중간에 공백을 만들어 text3에 삽입
    std::cout << text3;
}