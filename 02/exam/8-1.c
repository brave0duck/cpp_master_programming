#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char name[100];
    cout << "명의 이름을 ';'로 구분하여 입력하세요 : ";
    cin >> name;

    for(int i=0; i<5 ; i++){
        cin.getline(name,100,';');
        cout << i+1 << " : " << name << '\n';
    }
}