#include<bits/stdc++.h>
using namespace std;

int main(){

    double n; 
    
    cin >> n;
    // n = 845600;

    double front, back;

    // front = n / 1000;
    // back = int(n) % 1000;

    // cout << front << " " << back << " ";

    if( n >= 1000000000 ){
        front = n / 1000000000;
        back = int(n) % 1000000000;
        if( n < 10000000000){
            cout << round(front * 10) / 10.0;
        }else{
            cout << round(front);
        }
        cout << "B";
    }
    else if( n >= 1000000 ){
        front = n / 1000000;
        back = int(n) % 1000000;
        if( n < 10000000){
            cout << round(front * 10) / 10.0;
        }else{
            cout << round(front);
        }
        cout << "M";
    }
    else if( n >= 1000 ){
        front = n / 1000;
        back = int(n) % 1000;
        if( n < 10000){
            cout << round(front * 10) / 10.0;
        }else{
            cout << round(front);
        }
        cout << "K";
    }
    else{
        cout << n;
    }

    return 0;
}