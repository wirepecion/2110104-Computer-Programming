#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;int loc_0;
    cin >> n;
    // int arr[n*n];
    vector<int> arr;

    // cin >> n;
    for(size_t i = 0 ; i < n*n ; i++){
        int x;
        cin >> x;
        
        if(x == 0){
            loc_0 = i/(n);
        }else{
           arr.push_back(x);
        }
    }

    int count_inversion = 0;


    for(size_t i = 0 ; i < arr.size() ;i++){
        for(size_t j = i+1 ; j < arr.size() ; j++){
            if(i != j){
                if(arr[i] > arr[j]){
                    count_inversion++;
                    // cout << endl << arr[i] << ":" << arr[j];
                }
            }
        }
    }

    if(n % 2 == 0){
        if(count_inversion % 2 == 0){
            if(loc_0 % 2 == 1 ){
                cout << "YES";
            }else{
                cout << "NO";
            }
        }else{
            if(loc_0 % 2 == 0 ){
                cout << "YES";
            }else{
                cout << "NO";
            }
        }

    }else{
        if(count_inversion % 2 == 0){
            cout << "YES";
        }else{
            cout << "NO";
        }
    }

    cout << endl<< loc_0;
    cout << endl<< count_inversion;



    return 0;
}

/*
4
15  8 0  1
14 10 3 12
 5 11 9 13
 4  6 2  7
*/