#include <iostream>
#include <string>
using namespace std;

int main(){
    string a;
    cout << "문자열 입력 >> ";
    getline(cin,a);

    int count=0;
    // ver 1
    // for(size_t i=0; i<a.size(); i++){
    //     if(a.at(i) == 'a')
    //         count++;
    // }
    // cout << "문자 a는 " << count << "있습니다" << endl;
    
    // ver 2
    int pos=0;count=0;
    while(true){
        pos = a.find('a',pos);
        if ( pos == EOF){
            break;
        }else{
            count++;
            pos++;
        }
    }
    cout << "문자 a는 " << count << "개 입니다" << endl;
}