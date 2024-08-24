#include<bits/stdc++.h>
using namespace std;


string add_string(string s1, string s2){

    // string s1 = "123";
    // string s2 = "6789";
    string result = "";

    if(s1.length() < s2.length()) swap(s1,s2);

    reverse(s1.begin(),s1.end());
    reverse(s2.begin(),s2.end());

    int tod = 0, n;

    for(int i = 0 ;  i < s1.length(); i++){

        int n;

        if (i < s2.length())
        {
            n = s1[i] - '0';
            n += (s2[i] - '0');
            n += tod;

            // tod digit
            tod = n / 10;
            n = n % 10;

            // cout << n <<" "<< tod <<endl;
        }else{
            n = s1[i] - '0';
            n += tod;

            tod = n / 10;
            n = n % 10;
            // cout << n <<" "<< tod <<endl;
        }
        char digit;
        digit = char('0' + n);
        result += digit;

    }

    if(tod >= 1){
        char digit;
        digit = '1';
        result += digit;
        
    }

    reverse(result.begin(), result.end());
    // cout << result << endl;
    return(result);
}

int main(){

    string result = "";
    string num_line;


    while (cin >> num_line)
    {
        if(num_line == "END"){
            break;
        }else{
            result = add_string(result,num_line);
        }
    }

    cout << result;

    return 0;
}