#include <bits/stdc++.h>
using namespace std;

int main() {

    int count = 0;
    string sub, tmp, s = " ";

    cin >> sub;
    getline(cin.ignore(), tmp);

    // sub = "Sadet";
    // s = "\"Phra Sadet\" tham \"Phra Sadet\" wa ja sadet rue mai sadet.";
    s += tmp;
    s += " ";

    for(int i = 0 ; i < s.length() ; i++)
    {
        if(s.substr(i, sub.length()) == sub){
            // front check
            if( (s[i-1] >= 'A' && s[i-1] <= 'Z') || (s[i-1] >= 'a' && s[i-1] <= 'z')
            // back check
            ||  (s[i+sub.length()] >= 'A' && s[i+sub.length()] <= 'Z') || (s[i+sub.length()] >= 'a' && s[i+1+sub.length()] <= 'z')){
                continue;
            }else{
                count++;
            }
        }
    }

    cout << count;


    return 0;
}
