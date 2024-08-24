#include<bits/stdc++.h>
using namespace std;

int main(){

    double xe, ye, re, rp, xm, ym, xp, yp;
    cin>>xe>>ye>>re>>rp>>xm>>ym;

    double a,b,c,A,B,C;

    c = re - rp;
    A = abs(xm - xe);
    B = abs(ym - ye);
    C = sqrt(A*A + B*B);

    a = A * c / C;
    b = B * c / C;

    if(xm < xe) a = -a;
    if(ym < ye) b = -b;

    xp = xe + a;
    yp = ye + b;

    cout<< round(xp) << " " << round(yp);

    return 0;
}