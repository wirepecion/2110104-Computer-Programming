#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<string> lines;
    string s;

    while(getline(cin, s)){
        lines.push_back(s);
        // crtl + D to end input
    }

    for(auto x : lines){
        bool num12 = false, num8 = false, upper = false, lower = false, number = false, special = false;
        for(auto y : x){
            if( y >= '0' && y <= '9'){
                number = true;
            }
                
            if(x.size() >= 12){
                num12 = true;
                num8 = true;
            }else if(x.size() >= 8){
                num8 = true;
            }

            if( y >= 'A' && y <= 'Z'){
            upper = true;
            }

            if( y >= 'a' && y <= 'z'){
                lower = true;
            }

            if( y>= '!' && y <= '/'){
                special = true;
            }else if( y >= ':' && y <= '@'){
                special = true;
            }else if( y >= '[' && y <= '`'){
                special = true;
            }else if( y >= '{' && y <= '~'){
                special = true;
            }
            
          
    }
        if(num12 && upper && lower && special && number){
            cout << ">> strong" << endl;
        }else if((num12 || num8) && upper && lower && number){
            cout << ">> weak" << endl;
        }else{
            cout << ">> invalid" << endl;
        }
    }
    
    return 0;
}