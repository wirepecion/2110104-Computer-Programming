#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <unordered_map>

using namespace std;

// Define the score for each color
unordered_map<char, int> color_scores = {
    {'R', 1},
    {'Y', 2},
    {'G', 3},
    {'N', 4},
    {'B', 5},
    {'P', 6},
    {'K', 7}
};

// Function to calculate the total score
int calculate_score(const vector<char>& sequence) {
    int score = 0;
    for (char color : sequence) {
        if (color_scores.find(color) != color_scores.end()) {
            score += color_scores[color];
        }
    }
    return score;
}

// Function to check if the sequence is valid
bool is_valid_sequence(const vector<char>& sequence) {
    int n = sequence.size();
    
    // Check if the sequence starts with 'R'
    if (n == 0 || sequence[0] != 'R') {
        return false;
    }
    
    // Find the position of the first 'Y'
    int pos_Y = -1;
    for (int i = 0; i < n; ++i) {
        if (sequence[i] == 'Y') {
            pos_Y = i;
            break;
        }
    }
    
    // If 'Y' is not found, the sequence is invalid
    if (pos_Y == -1) {
        return false;
    }
    
    // Check the remaining part after the first 'Y'
    if (pos_Y + 1 < n) {
        vector<char> after_Y(sequence.begin() + pos_Y + 1, sequence.end());
        if (after_Y.size() != 5 || after_Y[0] != 'G' || after_Y[1] != 'N' || after_Y[2] != 'B' || after_Y[3] != 'P' || after_Y[4] != 'K') {
            return false;
        }
    }
    
    // Check for the pattern R ? ... R ? Y G N B P K
    bool in_R_pattern = true;
    for (int i = 1; i < pos_Y; ++i) {
        if (sequence[i] == 'R' && in_R_pattern) {
            continue;
        }
        in_R_pattern = false;
        if (sequence[i] == 'R') {
            return false;
        }
    }
    
    return true;
}

int main() {
    int N;
    cin >> N;
    cin.ignore();
    
    vector<string> results;
    
    for (int i = 0; i < N; ++i) {
        string line;
        getline(cin, line);
        
        // Parse the input line
        vector<char> sequence;
        stringstream ss(line);
        char color;
        while (ss >> color) {
            sequence.push_back(color);
        }
        
        // Check if the sequence is valid
        if (is_valid_sequence(sequence)) {
            // Calculate the score
            int score = calculate_score(sequence);
            results.push_back(to_string(score));
        } else {
            results.push_back("WRONG_INPUT");
        }
    }
    
    // Output results
    for (const string& result : results) {
        cout << result << endl;
    }
    
    return 0;
}
