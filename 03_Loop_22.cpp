#include <bits/stdc++.h>
using namespace std;

// vector<int> prime;
// vector<bool> is_prime;

// int get_sieve(int n){

// }

int main(){
    int n, i = 2;
    string factor;
    cin >> n;
    
    while(i <= n){
        if(n % i == 0){
            factor += to_string(i) ;
            factor += '*';
            n /= i;
        }else{
            i++;  
        }
    }

    cout << factor.substr(0, factor.length() - 1);
    
    return 0;
}