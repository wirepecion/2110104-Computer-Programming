#include<bits/stdc++.h>
using namespace std;

vector<char> seq = {'Y', 'G', 'N', 'B', 'P', 'K'};
int n_seq = seq.size();

int main(){

    int n; 
    // cin >> n;

    string tmp,s,afterR;
    string pattern = "YGNBPK";
    int count_R = 0;
    tmp = "R B R K Y G N B P K";

    // preprocess string
    for(int i = 0 ; i < tmp.length(); i++){
        if(tmp[i] != ' '){
            s += tmp[i];
            if(tmp[i] == 'R'){
                count_R += 1;
            }else if(tmp[i] == 'K'){
                afterR += tmp[i];
                // afterR += " ";
            }else if(tmp[i] == 'Y'){
                afterR += " ";
                afterR += tmp[i];
            }else{
                afterR += tmp[i];
            }
        }
    }

    cout << afterR << endl;

    stringstream ss(afterR);
    string token; 
    vector<string> tokens; 
    char delimiter = ' '; 
  
    while (getline(ss, token, delimiter)) { 
        tokens.push_back(token); 
    } 
  
    bool flag = 0;
    for (const auto& part : tokens) {
        cout << part << endl; 
    }

    string test1 = "BK";
    string test2 = "YGNBPK";

    // for(int i = 0; i < test2.length(); i++){
    //     for(int i )
    // }
    string out = pattern.substr(3,5);
    cout << out;

    // // check pattern
    // bool flag = 0;
    // for(int i = 0 ; i < s.length(); i++){

    //     if( s[i] = 'R'){
    //         //base
    //         if( s[i + 1] == 'R'){
    //             flag = 1;
    //         }
    //         // pattern
    //     }

    // }
    // if(flag == 0){
    //     //scoring
    // }else{
    //     //invalid
    // }

    // scoring

    return 0;

}