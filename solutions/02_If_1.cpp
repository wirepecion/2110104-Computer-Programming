#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<string> v = {"01", "02", "20", "21", "22", "23", "24", "25", "26", "27", "28", "29", "30", "31", "32", "33", "34", "35", "36", "37", "38", "39", "40", "51", "53", "55", "58"};
    string n; cin>>n;
    if(find(v.begin(), v.end(), n) != v.end()){
        cout<<"OK";
    }
    else{
        cout<<"Error";
    }
    return 0;
}