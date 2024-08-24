#include <bits/stdc++.h>
using namespace std;

int main(){

    double x, y;
    cin>>x;
    y = pow(x, sqrt(log( (x+1) * (x+1) ))) / (10 - x);
    cout << round(y * 1e6) / 1e6;
    return 0;

}