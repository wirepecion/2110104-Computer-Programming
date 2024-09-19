#include<bits/stdc++.h>
using namespace std;

vector<char> seq = {'Y', 'G', 'N', 'B', 'P', 'K'};
int n_seq = seq.size();

// Function to preprocess the input string by removing spaces, counting 'R's, and creating 'afterR' sequence
pair<string, int> preprocessString(const string& input, string& afterR) {
    string s;
    int count_R = 0;

    for(int i = 0 ; i < input.length(); i++){
        if(input[i] != ' '){
            s += input[i]; // Construct continuous sequence of colors
            if(input[i] == 'R'){
                count_R += 1; // Count the 'R's
            }else if(input[i] == 'K'){
                afterR += input[i]; // Add 'K' directly to the 'afterR' sequence
            }else if(input[i] == 'Y'){
                afterR += " "; // Add space before 'Y' to separate segments
                afterR += input[i];
            }else{
                afterR += input[i]; // Append other colors
            }
        }
    }

    return {s, count_R};
}

// Function to tokenize the 'afterR' string based on spaces
vector<string> tokenize(const string& afterR) {
    vector<string> tokens;
    stringstream ss(afterR);
    string token;
    char delimiter = ' '; 

    while (getline(ss, token, delimiter)) { 
        tokens.push_back(token); 
    }
  
    return tokens;
}

// Function to check if the token sequence follows the expected pattern
bool checkPattern(const vector<string>& tokens, const string& pattern) {
    int pos = 0; // Start position in the pattern
    for (const auto& part : tokens) {
        if (part == "R") {
            continue; // Skip reds for now
        }

        // Check if part matches the current expected part of the pattern
        if (pattern.find(part) != pos) {
            return false; // Return false if there's a mismatch in pattern
        }
        pos = (pos + 1) % pattern.size(); // Move to the next color in the pattern
    }
    return true; // Return true if the pattern is valid
}

// Function to calculate the score based on the sequence
int calculateScore(const string& s) {
    int score = 0;
    for (char c : s) {
        if (c == 'R') {
            score += 1; // Red ball = 1 point
        } else if (c == 'Y') {
            score += 2; // Yellow = 2 points
        } else if (c == 'G') {
            score += 3; // Green = 3 points
        } else if (c == 'N') {
            score += 4; // Brown = 4 points
        } else if (c == 'B') {
            score += 5; // Blue = 5 points
        } else if (c == 'P') {
            score += 6; // Pink = 6 points
        } else if (c == 'K') {
            score += 7; // Black = 7 points
        }
    }
    return score;
}

int main() {
    int n; // Number of inputs
    cin >> n;
    cin.ignore(); // Ignore the newline after the integer input

    string pattern = "YGNBPK";  // Standard sequence pattern in snooker

    for (int i = 0; i < n; ++i) {
        string tmp, afterR;
        getline(cin, tmp); // Get the input line
        // cout << "Input sequence " << i + 1 << ": " << tmp << endl;

        // Preprocess string: clean up spaces, count R's and form the 'afterR' sequence
        pair<string, int> processedData = preprocessString(tmp, afterR);
        string s = processedData.first;
        int count_R = processedData.second;

        // Tokenize the 'afterR' sequence
        vector<string> tokens = tokenize(afterR);

        // Output each token (debugging purposes)
        cout << "Tokens:" << endl;
        for (const auto& part : tokens) {
            cout << part << endl;
        }

        // Check pattern validity
        if (!checkPattern(tokens, pattern)) {
            cout << "WRONG_INPUT" << endl;
            continue;
        }

        // Calculate and output final score
        int score = calculateScore(s);
        cout << score << endl;
        // cout << "Final Score for sequence " << i + 1 << ": " << score << endl;
    }

    return 0;
}
