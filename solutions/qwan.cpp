#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;
int main() {
    string s;
    getline(cin, s);
    // s = "akainu";
    s += "$";

    vector<string> rotation_string;
    string tmp;
    // loop to string
    for(int i = 0 ; i < s.length(); i++){ 
        if(i == 0)
        tmp = s.substr(1);
        else tmp = tmp.substr(1);
        tmp += s[i];
        rotation_string.push_back(tmp);
    }

    //sort with dictionary
    sort(rotation_string.begin(),rotation_string.end());


    string result ="";
    for(size_t i = 0 ; i < rotation_string.size(); i++){
        string tmp = rotation_string[i];
        cout << tmp[s.length()-1];
    }

    return 0 ;
}