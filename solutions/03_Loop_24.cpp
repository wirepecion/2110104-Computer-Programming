#include<bits/stdc++.h>
using namespace std;

int main(){

    int cnt = 1;
    string s;

    cin >> s;
    // s = "ABBA";

    s += " ";

    for(int i = 0 ; i < s.length(); i++){
        if(s[i+1] == s[i]){
            cnt++;
        }else{
            cout << s[i] <<" " << cnt << " ";
            cnt = 1;
        }
    }

    return 0;
}