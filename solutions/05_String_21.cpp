#include<bits/stdc++.h>
using namespace std;

int main(){

    string s, result = "";
    cin >> s;

    char c;
    c = s[0];
    for( int i = 0 ; i < s.length() ; i++){
        if( s[i] >= 'a' && s[i] <= 'z'){
            if(s[i + 1] >= 'a' && s[i + 1] <= 'z'){
                result += s[i];
            }else{
                result += s[i];
                result += ", ";
            }
        }else if( s[i] >= 'A' && s[i] <= 'Z'){
            if(s[i + 1] >= 'a' && s[i + 1] <= 'z'){
                result += s[i];
                // result += ", ";
            }else{
                result += s[i];
                result += ", ";
            }
        }else if( s[i] >= '0' && s[i] <= '9'){
            if(s[i + 1] >= '0' && s[i + 1] <= '9'){
                result += s[i];
                // result += ", ";
            }else{
                result += s[i];
                result += ", ";
            }
        }
    }

    // if( s[s.length() - 1] == ", ")
    cout << result.substr(0, result.length() - 2);


    return 0;
}