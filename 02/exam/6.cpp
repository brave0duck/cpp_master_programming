#include <iostream>
#include <string>

using namespace std;

int main(){
    string s1,s2;
    cout << "새 암호를 입력하세요 >> ";
    cin >> s1;
    cout << "새 암호를 다시 한번 입력하세요 >> ";
    cin >> s2;

    if(s1.compare(s2)==0){
        cout << "같습니다" << endl;
    }else{
        cout << "틀립니다" << endl;
    }
    return 0;
}