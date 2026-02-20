#include <iostream>
#include <string>
#include <sstream>
using namespace std;

class Date{
    int year;
    int month;
    int day;
public:
    Date() : Date(2025,1,1){}
    Date(string s){
        stringstream ss(s);
        string temp;
        for(int i=0; getline(ss,temp,'/'); i++){
            switch(i){
                case 0: Date::year = stoi(temp);  break;
                case 1: Date::month = stoi(temp); break;
                case 2: Date::day = stoi(temp);   break;
            }
        }
    }
    Date(int year, int month, int day){
        Date::year = year;
        Date::month = month;
        Date::day = day;
    }

    int getYear(){return Date::year;}
    int getMonth(){return Date::month;}
    int getDay(){return Date::day;}
    void show(){cout << Date::getYear() << "년 " << Date::getMonth() << "월 " << Date::getDay() << "일 " << endl;};
};

int main(){
    Date birth(2014, 3, 20);
    Date independenceDay("1945/8/15");
    independenceDay.show();

    cout << birth.getYear() << "," << birth.getMonth() << ',' << birth.getDay() << endl;
}