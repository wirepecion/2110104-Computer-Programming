#include<bits/stdc++.h>
using namespace std;

int main(){

    float p;
    // cin >> p;
    p = 0.7;
    double k = 1, t = 1;

    t = (t * ( 365 - (k - 1))) / 365;

    if(1-t >= p){
        cout << k;
    }else{

    while( 1-t < p){
        t = (t * ( 365 - (k - 1))) / 365;
        k++;
        // cout << 1-t << endl;
    }

        cout << k-1;
    }

    return 0;
}