#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<pair<int, int>> data(N);
    for (int i = 0; i < N; i++) {
        cin >> data[i].first >> data[i].second;
    }

    string pattern;
    cin >> pattern;

    vector<int> red, blue;

    if (pattern == "Zig-Zag") {
        for (int i = 0; i < N; i++) {
            if (i % 2 == 0) {
                red.push_back(data[i].first);  
                blue.push_back(data[i].second); 
            } else {
                red.push_back(data[i].second); 
                blue.push_back(data[i].first);  
            }
        }
    } else if (pattern == "Zag-Zig") {
        for (int i = 0; i < N; i++) {
            if (i % 2 == 0) {
                red.push_back(data[i].second);  
                blue.push_back(data[i].first);  
            } else {
                red.push_back(data[i].first);  
                blue.push_back(data[i].second); 
            }
        }
    }

    int min_red = *min_element(red.begin(), red.end());
    int max_blue = *max_element(blue.begin(), blue.end());

    cout << min_red << " " << max_blue << endl;

    return 0;
}
