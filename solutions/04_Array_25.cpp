#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> height(n);
    for (int i = 0; i < n; i++) {
        cin >> height[i];
    }

    if (n <= 2) {
        cout << 0 << endl;
        return 0;
    }

    vector<int> left_max(n), right_max(n);

    left_max[0] = height[0];
    for (int i = 1; i < n; i++) {
        left_max[i] = max(left_max[i-1], height[i]);
    }

    right_max[n-1] = height[n-1];
    for (int i = n-2; i >= 0; i--) {
        right_max[i] = max(right_max[i+1], height[i]);
    }

    int water = 0;
    for (int i = 0; i < n; i++) {
        int level = min(left_max[i], right_max[i]);
        if (level > height[i]) {
            water += level - height[i];
        }
    }

    cout << water<< endl;

    return 0;
}
