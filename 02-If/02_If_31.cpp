#include <bits/stdc++.h>
using namespace std;

bool isleapyear(int year){
    if(year % 400 == 0 || (year % 4 == 0 && year % 100 != 0 )){
        return true;
    }
    else{
        return false;
    }
}

int dayofmonth(int month, int year){
    if(month == 2){
        if(isleapyear(year)){
            return 29;
        }else{
            return 28;
        }
    }else if(month == 4 || month == 6 || month == 9|| month == 11){
        return 30;
    }else{
        return 31;
    }
}

int main(){

    int day1, day2 , month1, month2, year1, year2;
    int redday = 0, blackday = 0, blueday = 0;
    int totalday = 0;

    cin >> day1 >> month1 >> year1;
    cin >> day2 >> month2 >> year2;

    year1 -= 543;
    year2 -= 543;

    // if(isleapyear(2016)) cout << "Y";

    // cout << year1 << " " << year2;

    // day1 = 20; month1 = 11; year1 = 2540;
    // day2 = 10; month2 = 2; year2 = 2544;

    // check days of month

    redday = -day1 + dayofmonth(month1, year1) + 1;
    // calculate redday
    for(int i = month1 + 1; i <= 12 ; i++){
        redday += dayofmonth(i, year1);
    }

    blueday = day2 - 1;
    // calculate blueday
    for(int i = month2 - 1; i >= 1 ; i--){
        blueday += dayofmonth(i, year2);
    }
    

    // calculate blackday
    if(year2 - year1 == 1){
        blackday = 0;
    }else{
        blackday = 365 * (year2 - year1 - 1);
    }

    totalday = redday + blueday + blackday;

    // cout << redday << endl << blueday << endl << blackday << endl;
    cout << totalday << " ";

    // calcuclate biorythm
    double physical, emotional, intellectual;

    physical = sin((2 * M_PI * totalday) / 23);
    emotional = sin((2 * M_PI * totalday) / 28);
    intellectual = sin((2 * M_PI * totalday) / 33);

    cout << round(physical*100.0)/100.0 << " ";
    cout << round(emotional*100.0)/100.0 << " ";
    cout << round(intellectual*100.0)/100.0;

    // check leep years
    // int year = 2000;
    // if(isleapyear(year)) cout << year;

    return 0;
}