#include <iostream>
#include <string>
using namespace std;

int main(){
    int max=0;
    string str;
    cout << "명의 이름을 ';'로 구분하여 입력하세요 : ";
    cin >> str;

    for(int i=0; i<5 ; i++){
        string s;
        s = getline(cin,str,';');
        if(max < s.size()){
            
        }
        cout << i+1 << " : " << str << '\n';
    }

}