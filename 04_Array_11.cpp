#include <bits/stdc++.h>
using namespace std;

int main(){

    int digits[10];
    for(int i = 0; i < 10; i++){
        digits[i] = 0;
    }
    int idx = 0, sum = 0;

    string line;;
    vector<string> answer;
    getline(cin , line);

    for (int x = 0 ; x < line.length() ; x++){
        idx = 0;
        for (char y = '0' ; y <= '9' ; y++){
            if(line[x] == y){
                digits[idx] = 1;
                break;
            }
            idx++;
        
        }
    }

    for(int i = 0 ; i < 10 ; i++){
        sum += digits[i];
    }

    sum = 10 - sum;

  
    bool flag = 0;

    for(int x = 0 ; x < 10 ; x++){
        if(digits[x] == 0){
            sum --;
            cout << x;
            if(sum != 0){
                cout <<",";
            }
            flag = 1;
        }
    }



    if(flag == 0){
        cout<<"None";
    }else{
        
    }



    // for (int x = 0 ; x < 10 ; x++){
    //     if(digits[x] == 0){
    //         cout << x << ",";
    //     }else{
    //         sum += 1;
    //     }
    // }

    // if(sum == 10){
    //     cout << "None";
    // }

    return 0;
}