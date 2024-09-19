#include <bits/stdc++.h>
using namespace std;

int main(){

    int x, y, line = 0;
    int minzig = 1e9, maxzig = -1e9;
    int minzag = 1e9, maxzag = -1e9;

    while (cin >> x)
    {
        line++;

        if(x == -999){
            cout << minzig << " " << maxzig;
            break;
        }else if(x == -998){
            cout << minzag << " " << maxzag;
            break;
        }else{
            cin >> y;
            if(line % 2 == 0){
                minzig = min(minzig, x);
                minzag = min(minzag, y);
                maxzig = max(maxzig, y);
                maxzag = max(maxzag, x);
            }else{
                minzig = min(minzig, y);
                minzag = min(minzag, x);
                maxzig = max(maxzig, x);
                maxzag = max(maxzag, y);
            }
        }
    }
    
    return 0;
}