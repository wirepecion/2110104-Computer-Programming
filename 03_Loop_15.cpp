#include<bits/stdc++.h>
using namespace std;

int main(){
    
    string s;
    getline(cin, s);
    int n = s.size();

    for(int x = 0; x < n; x++){
        if(s[x] == '('){
            s[x] = '[';
        }else if(s[x] == '['){
            s[x] = '(';
        }else if(s[x] == ')'){
            s[x] = ']';
        }else if(s[x] == ']'){
            s[x] = ')';
        }
    }

    cout << s;

    return 0;
}