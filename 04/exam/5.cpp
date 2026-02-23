// 한줄씩 입력받고 랜덤한 글자하나를 다른 글자로 교체
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
    srand((unsigned)time(NULL));
    

    cout << "아래에 한줄을 입력하세요 (종료:exit) : " << endl;

    string s;
    getline(cin,s,'\n');
    while(s.compare("exit") != 0){
        string rd (1,'a' + (rand()% 27));   // 'a' = 97 , 알파벳 26글자
        int pos = rand() % s.length();

        s.replace(pos,1,(string)rd);
        cout << s << endl;
        cout << ">> ";
        getline(cin,s,'\n');
    }
}