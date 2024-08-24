#include<bits/stdc++.h>
using namespace std;

int main(){

    int n; cin >> n;

    if(n > 1){
        cout << "positive";
    }else if(n < 0){
        cout << "negative";
    }else{
        cout << "zero";
    }

    cout << endl;

    if(n % 2 == 0){
        cout << "even";
    }else{
        cout << "odd";
    }

    return 0;

}