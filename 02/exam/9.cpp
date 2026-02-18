#include <iostream>
using namespace std;

int main(){
    char name[30]={};
    char address[100]={};
    int age;

    cout << "Name ?  ";
    cin.getline(name,30);
    cout << "Address ? ";
    cin.getline(address,100);
    cout << "Age ? ";
    cin >> age;

    cout << name << " , " << address << " , " << age << "세" << endl;
}