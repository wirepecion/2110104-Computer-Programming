#include<bits/stdc++.h>
using namespace std;

int main(){

    multiset<int> m1,m2;
    string s1,s2;

    // s1 = "Eleven 11 plus two 2"; s2 = "Twelve 12 plus one 1";
    cin.ignore();
    getline(cin, s1);
    getline(cin, s2);

    for (auto& x : s1) { 
        x = tolower(x); 
    } 

    for (auto& x : s2) { 
        x = tolower(x); 
    } 

    for(int i = 0 ; i < s1.length(); i++){
        m1.insert(s1[i]);
        m2.insert(s2[i]);
    }

    if( m1 == m2){
        cout << "YES";
    }else{
        cout << "NO";
    }

    // for(char x : m1){
    //     cout << x << " ";
    // }

    // cout << endl;

    // for(char x : m2){
    //     cout << x << " ";
    // }

    return 0;
}