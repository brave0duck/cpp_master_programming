// 16의 배열버전. 여러번 반복비교하는 부분을 개선
// a= dst[0], b= dst[1] ... z = dst[25]에 저장
#include <iostream>
#include <string>
using namespace std;

// 문자열에 특정 문자가 몇번 반복되는지 배열에 저장하는 함수. 문자만 카운팅
// dst[0]=a의개수 , dst[1]=b의개수 ...
int HowMany(string *src,int dst[]){
    int count=0;
    for(int i=0; i< src->length(); i++){
        if('a' <= src->at(i) && src->at(i) <= 'z'){     //소문자라면
            dst[src->at(i) -'a']++;                     // 배열 +1
            count++;
        }else if('A' <= src->at(i) && src->at(i) <= 'Z'){   //대문자라면
            dst[src->at(i) - 'A']++;                        //배열 +1
            count++;
        }
    }
    return count;
}
inline void PrintStar(int n){
    for(int i=0; i<n ; i++){
        cout << "*";
    }
}
int main(){
    cout << "영문 텍스트를 입력하세요. 히스토그램을 그립니다." << endl;
    cout << "텍스트의 끝은 ; 입니다. 10000개 까지 가능합니다." << endl;
    string alphabet = "abcdefghijklmnopqrstuvwxyz";
    int ch[26]={};
    
    // string s;
    // getline(cin,s,';');

    string s =  "Wise men say, only fools rush in"
                "But I can't help, falling In love with you"
                "Shall I stay? Would it be a sin?"
                "If I can't help, falling in love with you"
                "Like a river flows, surely to the sea"
                "Darling so it goes, some things aren't meant to be;";

    cout << "총 알파벳 수 " << s.length() << endl;
    int count = HowMany(&s,ch);
    for(int k=0; k<26; k++){
        cout << alphabet[k] << " (" << ch[k] << ")\t: ";
        PrintStar(ch[k]);
        cout << endl;
    }
    return 0;
}