#include<bits/stdc++.h>
using namespace std;

int main(){

    int n; cin >>n;
    double arr[n],tmp[n],sum = 0;
    memset(tmp, 0 , sizeof(tmp));

    for(int i = 0; i < n ;i++){
        double x;
        cin >> x;
    }

    for(int i = n - 1; i >= 0 ;i--){
        // tmp[i-1] = arr[i-1] + pow(arr[i],-1);
        // sum += pow(x,-i);
        cout << setprecision(10) << arr[i] <<endl;
    }


    // for(int i = 0 ; i < n ; i ++){
    //     cout << arr[i] << endl;
    // }



    return 0;
}