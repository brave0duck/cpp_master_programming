// myintstack 수정
#include <iostream>
#include <string>
using namespace std;

class MyIntStack{
private:
    int *p;
    int size;
    int tos;
public:
    MyIntStack() : MyIntStack(0){}
    MyIntStack(int size);
    MyIntStack(const MyIntStack &s);
    ~MyIntStack();
    bool push(int n);   //정수n을 스택에 푸쉬한다. 스택이 꽉차면 false, 아니면 true리턴
    bool pop(int &n); //스택의 탑에 있는 값을 n에 팝한다. 만일 스택이 비어있으면 false를 아니면 true를 리턴
};
MyIntStack::MyIntStack(int size){
    if(size <= 0){
        this->size = 0;
        this->tos = 0;
        this->p = NULL;
    }else{
        this->size = size;
        this->tos = 0;
        this->p = new int[size];
        for(int i=0; i<size ; i++){
            this->p[i] = 0;
        }
    }
}
MyIntStack::MyIntStack(const MyIntStack &s){
    this->size = s.size;
    this->tos = s.tos;

    this->p = new int[size];
    for(int i=0; i<size ; i++){
        this->p[i] = s.p[i];
    }
}
MyIntStack::~MyIntStack(){
    if(p){
        delete [] p;
        p = NULL;
    }
}
//정수n을 스택에 푸쉬한다. 스택이 꽉차면 false, 아니면 true리턴
bool MyIntStack::push(int n){
    if( this->tos >= size){
        return false;
    }else{
        this->p[tos++] = n;
        return true;
    }
}
//스택의 탑에 있는 값을 n에 팝한다. 만일 스택이 비어있으면 false를 아니면 true를 리턴
bool MyIntStack::pop(int &n){
    if( this->tos <= 0){
        return false;
    }else{
        n = this->p[--tos];
        return true;
    }
}
int main(){
    MyIntStack a(10);
    a.push(10);
    a.push(20);
    MyIntStack b = a;   //복사생성자
    b.push(30);

    int n;
    a.pop(n);
    cout << "스택 a에서 팝한 값 : " << n << endl;
    b.pop(n);
    cout << "스택 b에서 팝한 값 : " << n << endl;
}