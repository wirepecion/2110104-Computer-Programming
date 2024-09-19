#include<bits/stdc++.h>
using namespace std;

int main(){

    int n; cin >>n;
    double arr[n],tmp[n],sum = 0;
    memset(tmp, 0 , sizeof(tmp));

    for(int i = 0; i < n ;i++){
        // double x;
        cin >> arr[i];
    }

    // tmp[0] = arr[0];

    // for(int i = 1; i < n ; i++){
    //     tmp[i] = tmp[i-1] + pow(arr[i],-1);
    //     // sum += pow(x,-i);
    //     // cout << setprecision(10) << tmp[i-1] <<endl;
    // }

    for(int i = n-1; i >= 1 ; i--){

        arr[i-1] = arr[i-1] + double(double(1) / (arr[i]));
        cout << arr[i-1] << endl;
    }

    // for(int i = 0 ; i < n ; i++){
    //     cout << tmp[i] << endl;
    // }


    // for(int i = 0 ; i < n ; i ++){
    //     cout << arr[i] << endl;
    // }

    return 0;
}