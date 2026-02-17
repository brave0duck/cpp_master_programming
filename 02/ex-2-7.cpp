#include <iostream>
using namespace std;

int main(){
    char city[21];
    cout << "input city name (seperator: . )  : " ;
    cin.getline(city,20,'.');
    cout << "you input " << city << endl;
    
    return 0;
}