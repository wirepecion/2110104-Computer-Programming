#include<bits/stdc++.h>
using namespace std;

int main(){

    double A[4],max = -1, min = 1e9, sum;
    for(int i=0; i<4; i++){
        cin >> A[i];
        if(A[i] > max){
            max = A[i];
        }
        if(A[i] < min){
            min = A[i];
        }
        sum += A[i];
    }

    cout << round((sum - max - min) / 2 * 100.0) / 100.0;
    return 0;
}