#include <iostream>
#include <string>
#include <sstream>

using namespace std;

class Dept{
private:
    int size;
    int *scores;
public:
    Dept(int size){
        this->size = size;
        this->scores = new int[size];
        for(int i=0; i<this->size ; i++){
            this->scores[i] =0;
        }
    }
    Dept(const Dept &dept);
    ~Dept();
    int getSize(){return size;}
    void read();    //size만큼 키보드에서 정수를 읽어 score배열에 저장
    bool isOver60(int index);   //index학생의 성적이 60보다 크면 true
};
Dept::Dept(const Dept &dept){
    this->size = dept.size;
    this->scores = new int[dept.size];
    for(int i=0; i<this->size ; i++){
        this->scores[i] =0;
    }
}
Dept::~Dept(){
    if(scores){
        delete [] scores;
    }
}
void Dept::read(){
    string s;
    cout << "학생의 점수를 순서대로 입력해주세요 >> ";
    getline(cin,s);
    stringstream ss(s);

    for(int i=0; i<this->size; i++){
        if(!(ss >> this->scores[i]))
            break;
    }
}
bool Dept::isOver60(int index){
    if( this->scores[index] > 60)
        return true;
    else
        return false;
}
int countPass(Dept &dept){
    int count=0;
    for(int i=0; i<dept.getSize(); i++){
        if(dept.isOver60(i))
            count++;
    }
    return count;
}
int main(){
    Dept com(10);
    com.read();
    int n= countPass(com);
    cout << "\n결과 : 60점 이상은 " << n << "명";
}