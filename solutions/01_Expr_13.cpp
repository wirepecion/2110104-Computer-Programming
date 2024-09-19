#include <bits/stdc++.h>
using namespace std;

int main(){

    double a, b, c;
    cin>> a >> b >> c;

    double part1 = -b;
    double part2 = sqrt(b*b - 4*a*c);
    double part3 = 2*a;

    double x1 = (part1 - part2) / part3;
    double x2 = (part1 + part2) / part3;

    cout<< round(x1*1e3)/1e3 <<" ";
    cout<< round(x2*1e3)/1e3 <<endl;

    return 0;
}