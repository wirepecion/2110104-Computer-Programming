#include <bits/stdc++.h>
using namespace std;

// Happy BirthDay 2 You

int main(){

    int alphabet[26];
    for(int x; x < 26; x++){
        alphabet[x] = 0;
    }

    string line;
    getline(cin,line);

    int idx = 0;
    // cout << 'z' - 'a'<<endl;
    // cout << 'A' - 'a'<<endl;

    for(int  i = 0; i < line.length() ; i++){

        if( line[i] >= 'a' && line[i] <= 'z'){
            idx = line[i] - 'a';
            // cout << idx;
            alphabet[idx] += 1;

        }else if( line[i] >= 'A' && line[i] <= 'Z'){
            // cout << line[i] << " ";
            line[i] = line[i] + 32;
            // cout << line[i] << " ";
            idx = line[i] - 'a';
            // cout << idx << " " << endl;
            alphabet[idx] += 1;

        }else{
            continue;
        }
    }


    for(int i =  0 ; i < 26 ; i++){
        char c = 'a';
        if(alphabet[i] >= 1){
            c += i;
            cout << c << " -> " << alphabet[i]<< endl;

        }else{
            continue;
        }
    }




    return 0;
}