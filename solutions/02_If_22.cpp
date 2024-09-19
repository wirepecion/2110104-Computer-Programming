#include <bits/stdc++.h>
using namespace std;

bool isleapyear(int month, int year){
    if(year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)){
        return true;
    }else{
        return false;
    }

}

int dayofmonth(int month, int year){

    if(month == 2){
        if(isleapyear(month, year)){
            return 29;
        }else{
            return 28;
        }
    }else if(month == 4 || month == 6 || month == 9 || month == 11){
        return 30;
    }else{
        return 31;
    }

}

int main(){

    int day, month, year, totalday = 0;

    // day = 5; month = 12; year =  2560;
    cin >> day >> month >> year;

    year -= 543;

    totalday  += day;
    for(int i = month-1; i > 0; i--){
        totalday += dayofmonth(i, year);
    }

    cout << totalday;

    return 0;
}