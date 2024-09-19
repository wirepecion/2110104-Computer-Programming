#include <bits/stdc++.h>
using namespace std;

int main(){

    string t;
    string result ="";
    int k;
    
    cin >> t >> k;

    t += " ";
    // k = 4;

    for(int i = 0; i < t.length();){
        int flag = 0;
        for(int j = 0 ; j < t.length() ; j++){
            char a = t[i];
            char b = t[i+j];
            if(a == b){
                flag += 1;
            }
            else{
                break;
            }

        }
        if(flag < k){
            for(int x = 0; x < flag ; x++){
            result += t[i+x];
            }
        }
        i += flag;
    }

    cout << result;

    return 0;
}