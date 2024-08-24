#include<bits/stdc++.h>
using namespace std;

int main(){

    int h; cin >> h;

    for(int i = 0; i < h; i++){
        for(int j = 0 ; j < i + h ; j++){
            if(j == i + h - 1 || i == h - 1 || i + j == h - 1){
                cout << "*";
            }else{
                cout << ".";
            }
            // cout << "-";
        }
        cout << endl;
    }



    return 0;
}