#include <iostream>
using namespace std;

int main(){
    char c[10]={};
    cout << "Input string (under 10): ";
    cin.getline(c,10);

    for(int i=0; i<10 && c[i]!=NULL ; i++){
        for(int j=0; j<=i; j++){
            cout << c[j];
        }
        cout << endl;
    }
    return 0;
}