#include<bits/stdc++.h>
using namespace std;

int main(){

    int m, n; cin >> m >> n ;
    double arr[m][n], ans[m-2][n-2];

    for(int i = 0 ; i < m ;i++){
        for(int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }

    for(int i = 0 ; i < m - 2 ;i++){
        for(int j = 0; j < n - 2; j++){
            double sum = 0;
            sum = (arr[i][j] + arr[i + 1][j] + arr[i + 2][j]
                    + arr[i][j + 1] + arr[i][j + 2] + arr[i + 1][j + 1]
                    + arr[i + 1][j + 2] +arr[i + 2][j + 1] + arr[i +2][j + 2]);

            ans[i][j] = round(sum * 100)/ 900.0;
        }
    }

    for(int i = 0; i < m - 2 ; i++){
        for(int j = 0; j < n - 2 ; j++){
            cout << round(ans[i][j] * 100)/100.0<< " ";
        }
        cout << endl;
    }


    return 0;
}