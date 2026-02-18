#include <iostream>
#include <cstring>
using namespace std;

int menu(){
    int input;
    cout << "****** 중화반점에 오신걸 환영합니다 ******" << '\n';
    cout << "짬뽕:1, 짜장:2, 군만두:3, 종료:4 >> ";
    cin >> input;
    return input;
}
int main(){
    int sel;
    while((sel = menu())!=4){
        if( sel < 1 || sel > 4){
            cout << "다시 주문하세요!!" << '\n';
            continue;
        }else{
            char yori[10];
            int many;
            cout << "몇 인분 ? ";
            cin >> many;
            
            switch(sel){
                case 1: // 짬뽕
                    strcpy(yori,"짬뽕");
                    break;
                case 2:
                    strcpy(yori,"짜장");
                    break;
                case 3:
                    strcpy(yori,"군만두");
                    break;
            }
            cout << yori <<" "<< many << "인분 나왔습니다" << endl;
        }
    
    }
PROGRAM_EXIT:
    cout << "오늘 영업은 끝났습니다.";
}