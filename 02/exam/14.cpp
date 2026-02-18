#include <iostream>
#include <cstring>

#define MAX 20000
#define esp 2000
#define ame 2300
#define cap 2500

using namespace std;

int main(){
    int sum=0;
    
    char coffee[20];
    int num;

    cout << "에스프레소:2000원 , 아메리카노:2300원, 카푸치노:2500원입니다" << endl;

    while(sum < MAX){
        int pay=0;
        cout << "주문 , 수량 >>" ;
        cin >> coffee >> num;

        if(strcmp(coffee,"에스프레소") == 0){
            pay += esp*num;
        }else if(strcmp(coffee,"아메리카노") == 0){
            pay += ame*num;
        }else if(strcmp(coffee,"카푸치노") == 0){
            pay += cap*num;
        }else{
            cout << "잘못입력되었습니다." << endl;
            continue;
        }
        cout << pay << "원입니다. 맛있게 드세요" << endl;
        sum += pay;
    }
    cout << "오늘 " << sum << "원을 판매하여 카페를 닫습니다. 내일 봐요~~~" << endl;
}