#include <iostream>
using namespace std;

int main(){
    char address[100];
    cout << "Input address : ";
    cin.getline(address,100);
    cout << "You input address : " << address ;
    return 0;
}