#include <bits/stdc++.h>
using namespace std;

int factorial(long long int n){
    if(n == 0){
        return 1;
    }
    return n * factorial(n-1);
    }

int main(){

    float x;
    x = (M_PI - (factorial(10) / pow(8, 8)) + pow(log(9.7), ((7/sqrt(71)) - sin(40 * M_PI / 180))))
        / (pow(1.2 , pow(2.3 , 1.0/3.0)));
    cout <<x;

    return 0;
}