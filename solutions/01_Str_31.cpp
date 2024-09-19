#include<bits/stdc++.h>
using namespace std;

long gcd(long a, long b){
    if(b == 0){
        return a;
    }
    return gcd(b, a % b);
}


// long digit(long a) {
//     return a == 0 ? 1 : log10(a) + 1;
// }

long digit(long a) {
    return log10(max(1L, abs(a))) + 1;
}

long stringtoint(string s){
    int num = 0;
    for(int i = 0; i < s.size(); i++){
        num = num * 10 + (s[i] - '0');
    }
    return num;
}


int main(){

    string A,B,C;
    cin>>A>>B>>C;

    // cout<<a<<" "<<b<<" "<<c;

    int a, b, c, up, down, d, r, n;

    a = stringtoint(A);
    b = stringtoint(B);
    c = stringtoint(C);

    cout<<a<<" "<<b<<" "<<c<<endl;

    d = pow(10, B.size());
    cout << d << endl;

    r = (pow(10, C.size())) - 1;
    cout << r << endl;

    up = (a * d * r) + (b * r) + c ;
    down = d * r;

    int gcd_num = gcd(up,down);
    up /= gcd_num;
    down /= gcd_num;

    cout << up << " / " << down << endl;

    return 0;
}