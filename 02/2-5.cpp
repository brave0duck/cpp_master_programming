#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char passwd[20];

    while(true){
        cout << "INPUT PASSWORD : ";
        cin >> passwd;
        if(strcmp(passwd,"c++") == 0){
            cout << "correct.";
            break;
        }else{
            cout << "wrong input.. retry \n";
        }
    }
    return 0;
}