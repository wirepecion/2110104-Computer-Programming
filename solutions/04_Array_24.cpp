#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void flip(vector<int>& pancakes, int k) {
    reverse(pancakes.begin(), pancakes.begin() + k + 1);
}

void print_vector(const vector<int>& pancakes) {
    for (int i = 0; i < pancakes.size(); ++i) {
        cout << pancakes[i] << " ";
    }
    cout << endl;
}

void pancake_sort(vector<int>& pancakes) {
    int n = pancakes.size();
    for (int size = n; size > 1; --size) {
        auto max_it = max_element(pancakes.begin(), pancakes.begin() + size);
        int max_index = distance(pancakes.begin(), max_it);

        if(max_index + 1 == size){
            continue;
        }

        if (max_index != 0) {
            flip(pancakes, max_index);
            print_vector(pancakes);
        }

        flip(pancakes, size - 1);
        print_vector(pancakes);
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> pancakes(n);
    for (int i = 0; i < n; ++i) {
        cin >> pancakes[i];
    }
    
    print_vector(pancakes);
    pancake_sort(pancakes);

    return 0;
}

/*
3 1 2 5 4 /
5 2 1 3 4 /
4 3 1 2 5 /
2 1 3 4 5 /
3 1 2 4 5 \
2 1 3 4 5 \ 
1 2 3 4 5
*/