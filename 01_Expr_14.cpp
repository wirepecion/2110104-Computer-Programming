#include<bits/stdc++.h>
using namespace std;

int main(){

    int be, y;
    cin>>be;

    y = be - 543;
    y %= 100;
    cout<< int(y + floor(y/4) + 11) % 7;

    return 0;
}