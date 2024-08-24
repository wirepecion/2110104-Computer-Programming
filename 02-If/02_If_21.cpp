#include<bits/stdc++.h>
using namespace std;

int main(){

    long long int n; cin >> n;

    int a, pow_10 = 0;
    double b;

    if(n >= pow(10, 9)){
        a = n / 1000000000;
        b = (n / 1000000000.0)- a;
        b = round(b * 10);
        if(b == 0){
            cout << a << "B";
        }else{
            cout << a << "." << b << "B";
        }
    }else if(n >= pow(10, 6)){
        a = n / 1000000;
        b = (n / 1000000.0)- a;
        b = round(b * 10);
        if(b == 0){
            cout << a << "M";
        }else{
            cout << a << "." << b << "M";
        }
    }else if(n >= pow(10, 3)){
        a = n / 1000;
        b = (n / 100000.0) ;
        b = round(b)/1.0;
        if(b == 0){
            cout << a << "K";
        }else{
            cout << a << "." << b << "K";
        }
    }else{
        cout << n;
    }

    return 0;
}