#include <iostream>
#include <string>
using namespace std;

int HowMany(string *s,char ch){
    int count=0;
    for(int i=0; i< s->length(); i++){
        if(s->at(i) == ch || s->at(i) == toupper(ch))
            count++;
    }
    return count;
}

int main(){
    cout << "영문 텍스트를 입력하세요. 히스토그램을 그립니다." << endl;
    cout << "텍스트의 끝은 ; 입니다. 10000개 까지 가능합니다." << endl;
    string alphabet = "abcdefghijklmnopqrstuvwxyz";
    
    string s;
    getline(cin,s,';');

    // string s =  "Wise men say, only fools rush in"
    //             "But I can't help, falling In love with you"
    //             "Shall I stay? Would it be a sin?"
    //             "If I can't help, falling in love with you"
    //             "Like a river flows, surely to the sea"
    //             "Darling so it goes, some things aren't meant to be ;";

    cout << "총 알파벳 수 " << s.length() << endl;
    for(int i=0; i< alphabet.length(); i++){
        int count = HowMany(&s,alphabet[i]);
        cout << alphabet[i] << " (" << count << ")\t: ";
        for(int k=0; k < count ; k++){
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}