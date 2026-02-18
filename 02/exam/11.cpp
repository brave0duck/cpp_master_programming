#include <iostream>
using namespace std;

int main(){
    int number;
    int sum=0;
    cout << "Input Last Number to sum : ";
    cin >> number;

    for(int i=1; i<=number ; i++){
        sum += i;
    }
    cout << "Sum from 1 till "<< number << " is " << sum << endl;
    return 0;
}