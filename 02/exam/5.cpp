#include <iostream>

using namespace std;

int main(){
    char s[100];    
    cout << "문자열을 입력하라(100개 미만) : ";
    cin.getline(s,100);

    int ncount=0;
    for(int i=0; i<100; i++){
        if(s[i]=='x'){
            ncount++;
        }
    }
    cout << "x의 개수는 : " << ncount << endl;
    return 0;
}