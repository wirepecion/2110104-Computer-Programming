#include<bits/stdc++.h>
using namespace std;

int main(){

    string a, b;
    getline(cin, a);
    getline(cin, b);

    int n = a.size();
    int m = b.size();

    if( n != m){
        cout <<"Incomplete answer";
    }else {
        int score = 0;
        for(int x = 0; x < n; x++){
            if(a[x] == b[x]){
                score++;
            }
        }
        cout << score;
    }

    return 0;
}