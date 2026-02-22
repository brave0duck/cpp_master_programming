#include <iostream>
#include <string>

class Accumulator{
private:
    int value;
public:
    Accumulator() : Accumulator(0){}
    Accumulator(int value); //매개변수 value로 멤버value를 초기화
    Accumulator& add(int n);// value에 n을 더해 값을 누적한다
    int get();      //누적된값 value를 리턴
};
Accumulator::Accumulator(int value){
    this->value = value;
}
Accumulator& Accumulator::add(int n){
    this->value += n;
    return *this;
}
int Accumulator::get(){
    return this->value;
}
int main(){
    Accumulator acc(10);
    acc.add(5).add(6).add(7);
    std::cout << acc.get() << std::endl ;
}