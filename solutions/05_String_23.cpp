#include <bits/stdc++.h>
using namespace std;

string add_plate(string plate, string step){

    string result;
    
    reverse(plate.begin(), plate.end());
    reverse(step.begin(), step.end());

    //
    for(int i = 0 ; i < plate.length(); i++){
        result += plate[i] - '0';
    }

    //

    reverse(result.begin(), result.end());
    return result;

}

int main(){

    string plate, step;
    string result;
    
    plate = "8XY-900";
    step = "222";

    plate = plate.substr(0,3) + plate.substr(4,6);
    // cout << plate << endl;
    // cout << step << endl;

    // reverse(plate.begin(), plate.end());
    // reverse(step.begin(), step.end());

    // int digits = 0, tod = 0;
    // for(int i = 0 ; i < step.length(); i++){
    //     digits = (plate[i] - '0') + (step[i] - '0') + tod;
    //     tod = digits / 10;
    //     digits %= 10;
    //     cout << digits << " ";
    // }
    // if(tod >= 1){
    //     digits = (plate[step.length()] - '0');
    //     cout << char(digits);
    // }

    cin >> plate >> step;

    // cout << add_plate(plate, step);
    reverse(plate.begin(), plate.end());
    reverse(step.begin(), step.end());

    //
    int tod = 0;
    for(int i = 0 ; i < plate.length(); i++){
        int asci;
        if( i < step.length()){
            asci = (plate[i] - '0') + (step[i] - '0');
            asci += tod;
        }else if(plate[i] == '-'){
            asci = plate[i] - '0';
        }else{
            asci = plate[i] - '0';
            asci += tod;
        }

        // asci += tod;
        
        // mod alphabet
        if( plate[i] >= 'A' && plate[i] <= char(91)){
            asci = asci - 'A';
            asci = asci + '0';
            tod = asci / 26;
            asci %= 26;
            result += char(asci + 'A');
        }

        // mod num
        if( plate[i] >= '0' && plate[i] <= '9'){
            tod = asci / 10;
            asci %= 10;
            result += char(asci + '0');
        }
        
        // if( plate[i] == '-'){
        //     asci = plate[i] - '0';
        // } 
        // cout << tod << " " ;
        // plate[i+1] += tod;


        // result += char(asci + '0');
    }

    //
    reverse(result.begin(), result.end());

    cout << result;

    return 0;
}