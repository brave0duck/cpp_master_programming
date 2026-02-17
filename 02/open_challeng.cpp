// 간단한 가위,바위,보 게임
#include <iostream>
#include <string>
using namespace std;

int main(){
    
    string rom,jul;

    string r_win = "로미오가 이겼습니다";
    string j_win = "줄리엣이 이겼습니다";

    cout << "로미오와 줄리엣이 가위 바위 보 게임을 합니다" << endl;
    cout << "가위, 바위, 보 중에 선택하세요" << endl;
    cout << "로미오 >> ";
    cin >> rom;
    cout << "줄리엣 >> ";
    cin >> jul;

    if( rom.compare(jul) == 0){
        cout << "둘이 비겼습니다.";
        return 0;
    }

    if(rom == "가위" && jul == "바위"){
        cout << j_win;
    }else if(rom == "가위" && jul == "보"){
        cout << r_win;
    }else if((rom == "바위" && jul == "가위")){
        cout << r_win;
    }else if (rom == "바위" && jul == "보"){
        cout << j_win;
    }else if (rom == "보" && jul == "가위"){
        cout << j_win;
    }else if (rom == "보" && jul == "바위"){
        cout << r_win;
    }else{
        cout << "잘못된 입력" << endl;
    }

    return 0;
}