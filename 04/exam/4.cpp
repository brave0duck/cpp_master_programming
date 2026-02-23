#include <iostream>
#include <string>
using namespace std;

class Sample{
    int *p;
    int size;
public:
    Sample(int n){
        size = n;
        p = new int[n];
    }
    void read();
    void write();
    int big();
    ~Sample();
};
void Sample::read(){
    cout << "정수 " << this->size << "개를 입력하세요"<< endl;
    for(int i=0; i<size ; i++){
        cin >> p[i];
    }
}
void Sample::write(){
    for(int i=0; i<size; i++){
        cout << p[i] << ' ';
    }
    cout << endl;
}
int Sample::big(){
    int max = p[0];
    for(int i=0; i<size; i++){
        if(max < p[i])
            max = p[i];
    }
    return max;
}
Sample::~Sample(){
    if(p){
        delete [] p;
    }
}
int main(){
    Sample s(10);
    s.read();       //키보드에서 정수배열 읽기
    s.write();      // 정수 배열 출력
    cout << "가장 큰 수는 " << s.big() << endl; //가장 큰 수 출력
}