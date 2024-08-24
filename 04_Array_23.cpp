#include <bits/stdc++.h>
using namespace std;

int main(){

    unordered_map<string, int> country_code;
    int n; cin >> n;
    int fee; string code;
    for(int i = 0 ; i < n ; i++){
        cin >> code >> fee;
        country_code[code] = fee;
    }

    string line;
    getline(cin.ignore(), line);

    vector<string> path;
    for(int i = 0 ; i < line.length(); i++){
        if(line[i] == '-'){
            string ct = line.substr(i + 1, 2);
            path.push_back(ct);
        }
    }

    int sum = 0;
    for(int i = 0 ; i < path.size() - 1; i ++){
        if(path[i] != path[i+1]){
            sum += country_code[path[i+1]];
            // cout << sum <<endl;
        }
    }

    cout << sum;

    return 0;
}