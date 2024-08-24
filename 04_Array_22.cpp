#include <bits/stdc++.h>
using namespace std;

vector<string> Point = {"A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K"};

void point_sort(vector<string> & card, vector<string> & Point){
    
    unordered_map<string, int> card_order;
    for(int i = 0 ; i < Point.size() ; i++){
        card_order[Point[i]] = i;
    }

    sort(card.begin(), card.end(), [&](const string &a, const string &b) {
        return card_order[a] < card_order[b];
    });

}

vector<string> cut(vector<string> & card, int n){
    vector<string> seq1(card.begin(),card.begin()+ n /2);
    vector<string> seq2(card.begin() + n /2, card.end());

    vector<string> mix;
    mix.insert(mix.end(), seq2.begin(), seq2.end());
    mix.insert(mix.end(), seq1.begin(), seq1.end());

    return mix;
}

vector<string> shuffle(vector<string> & card, int n){
    vector<string> seq1(card.begin(),card.begin()+ n /2);
    vector<string> seq2(card.begin() + n /2, card.end());

    vector<string> shuff;
    for(int i = 0 ; i < n/2 ; i++){
        shuff.push_back(seq1[i]);
        shuff.push_back(seq2[i]);
    }

    return shuff;
}

int main(){

    int n; cin >> n;
    vector<string> card;
    string fn;

    for(int i = 0 ; i < n; i ++){
        string c;
        cin >> c;
        card.push_back(c);
    }

    cin >> fn;
    int n_fn = fn.length();

    for(int x = 0 ; x < n_fn ; x++){
        // point_sort(card, Point);
        if(fn[x] == 'C'){
            card = cut(card, n);
        }else if (fn[x] == 'S'){
            card = shuffle(card, n);
        }else{
            continue;
        }
    }
    // point_sort(card, Point);
    // card = cut(card, n);
    // card = shuffle(card, n);
    for(int i = 0 ; i < n ; i++){
        cout << card[i] << " ";
    }


    return 0;
}