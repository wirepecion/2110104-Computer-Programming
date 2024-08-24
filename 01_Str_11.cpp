#include<bits/stdc++.h>
using namespace std;

int main(){

    string id;
    cin>>id;

    int sum = 0;

    for(int i = 0; i < 12 ; i++){
        sum += (id[i] - '0') * (13 - i);
    }

    for(int x = 0; x < 12; x++){
        cout<<id[x];
        if(x == 0 || x == 4 || x == 9 || x == 11){
            cout << "-";
        }
    }

    cout<< (11 - sum % 11) % 10;
    return 0;
}