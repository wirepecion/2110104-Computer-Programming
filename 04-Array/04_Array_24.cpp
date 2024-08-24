#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void flip(vector<int>& pancakes, int k) {
    reverse(pancakes.begin(), pancakes.begin() + k + 1);
}

void pancake_sort(vector<int>& pancakes) {
    int n = pancakes.size();
    for (int size = n; size > 1; --size) {

        auto max_it = max_element(pancakes.begin(), pancakes.begin() + size);
        int max_index = distance(pancakes.begin(), max_it);

        if (max_index != 0) {
            flip(pancakes, max_index);
            for (int i = 0; i < n; ++i) {
                cout << pancakes[i] << " ";
            }
            cout << endl;
        }

        flip(pancakes, size - 1);
        for (int i = 0; i < n; ++i) {
            cout << pancakes[i] << " ";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> pancakes(n);
    for (int i = 0; i < n; ++i) {
        cin >> pancakes[i];
    }

    pancake_sort(pancakes);

    return 0;
}
