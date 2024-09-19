#include<bits/stdc++.h>
using namespace std;

int main(){

    double n;
    double ct = 0, sum = 0;

    while (cin >> n)
    {
        if(n == -1 && ct == 0)
        {
            cout <<"No Data";
            break;
        }else if(n == -1)
        {
            cout << round(sum / ct * 100) / 100;
            break;
        }
        else{
            ct++;
            sum += n;
        }
    }

    // cout << round(sum / ct * 100) / 100;

    return 0;
}