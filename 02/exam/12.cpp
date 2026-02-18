#include <iostream>
using namespace std;

int sum(int a,int b){
    int sum=0;
    for(int i=a; i<=b ; i++){
        sum += i;
    }
    return sum;
}
int main(){
    int number;
    
    cout << "Input Last Number to sum : ";
    cin >> number;

    cout << "Sum 1 to "<< number << " is " << sum(1,number) << endl;
}