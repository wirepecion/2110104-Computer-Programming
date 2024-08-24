#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<string> names = {
         "Robert", "William", "James", "John", 
        "Margaret", "Edward", "Sarah", "Andrew", 
        "Anthony", "Deborah"
    };

    // Vector of nicknames
    vector<string> nicknames = {
        "Dick", "Bill", "Jim", "Jack", 
        "Peggy", "Ed", "Sally", "Andy", 
        "Tony", "Debbie"
    };

    int n; cin >> n;
    string text;
    while(n--){
        cin >> text;
        bool flag = 0;
        for(int i = 0; i < names.size() ; i++){
            if(text == names[i]){
                cout << nicknames[i] << endl;
                flag = 1;
            }else if(text == nicknames[i]){
                cout << names[i] << endl;
                flag = 1;
            }
        }
        if(flag == 0){
            cout << "Not  found" << endl;
        }

    }


    return 0;
}