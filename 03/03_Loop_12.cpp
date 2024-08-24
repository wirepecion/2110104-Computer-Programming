#include<bits/stdc++.h>
using namespace std;

int main(){

    double a; cin >> a;
    double L = 0, U = a;
    double X = (L + U) / 2;

    while(abs(a - pow(10,X)) > 1e-10 * max(a, pow(10,X))){
        if(pow(10,X) > a){
            U = X;
        }else if(pow(10,X)< a){
            L = X;
        }
        X = (L + U) / 2;
    }
    
    cout << X;
    return 0;
}