#include <iostream>
using namespace std;

int main(){
    for(int i=0; i<100 ; i+= 10){
        for(int j=i+1; j<= 10+i ; j++){
            cout << j << '\t';
        }
        cout << '\n';
    }
    return 0;
}