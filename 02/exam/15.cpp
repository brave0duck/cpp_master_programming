// 간단한 사칙연산(%도 추가) 계산기 인터프리터 구현
// sstream을 이용(공백으로 분리 저장)
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main(){
    int result;

    string str;
    cout << "간단한 5칙연산 (종료:Enter)"<<endl;

    while(true){
        cout << '\n' << ">> ";
        getline(cin,str);
        
        string num1, op, num2;
        stringstream ss(str);
        ss >> num1 >> op >> num2;
        
        if(op.compare("+")==0){
            result = stoi(num1) + stoi(num2);
        }else if(op.compare("-")==0){
            result = stoi(num1) - stoi(num2);
        }else if(op.compare("*")==0){
            result = stoi(num1) * stoi(num2);
        }else if(op.compare("/")==0){
            result = stoi(num1) / stoi(num2);
        }else if(op.compare("%")==0){
            result = stoi(num1) % stoi(num2);
        }else{
            break;
        }
        str.append(" = ");
        str.append(to_string(result));
        
        cout << str;
    }
    cout << "프로그램을 종료합니다" << endl;
}