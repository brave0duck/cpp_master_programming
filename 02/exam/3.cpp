#include <iostream>
using namespace std;

int main(){
    int a,b;
    cout << "input 2 numbers for compare" << endl;
    cout << "first : ";
    cin >> a ;
    cout << "second : ";
    cin >> b;

    if(a>b){
        cout << "big : " << a;
    }else{
        cout << "big : " << b;
    }
    return 0;
}