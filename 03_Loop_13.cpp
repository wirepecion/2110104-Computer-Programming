#include<bits/stdc++.h>
using namespace std;

int main(){

    int ct = 0;
    string sub, s;
    vector<string> words;
    cin >> sub;
    getline(cin.ignore(), s);

    for(size_t i = 0 ; i < s.length() ; i++){
        if(s[i] != '"' || s )
    }

    for(auto x: words){
        size_t pos = x.find(sub);
        while (pos != string::npos)
        {
            ct++;
            pos = x.find(sub, pos +1);
        }
        
    }

    cout << ct;


    return 0;
}