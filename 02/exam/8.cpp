// 1.문자열을 입력받아 저장
// 2.문자열을 ';'로 끊어서 출력하고 길이를 비교
// 3. 가장 긴 문자열을 출력
#include <iostream>
#include <cstring>
using namespace std;

int main(){

    //string s="Mozart;Elvis Presley;Jim Carry;Schubert;Domingo;";
    string s;
    string temp;
    string result;

    //1
    cout << "5명의 이름을 ';'으로 구분하여 입력하세요 : ";
    getline(cin,s);

    
    int ncount=0;   // 단순출력용
    size_t max=0;   // 최대길이 저장용
    size_t start=0; // pos시작
    size_t end = s.find(';');   //pos 끝

    // 2
    while(end != string::npos){
        temp = s.substr(start,end-start);
        cout << ++ncount << " : " << temp;
        if(max < temp.size()){
            max = temp.size();
            result = temp;
        }
        start = end +1;
        end = s.find(';',start);
        cout << '\n';
    }
    // 3
    cout << "가장 긴 이름은 : " << result << endl;
}
