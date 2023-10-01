#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define max 1001000

string runLengthEncoding(const string& input) {
    string encoded;

    for (size_t i = 0; i < input.length(); ++i) {
        char currentChar = input[i];
        int count = 1;

        
        while (i < input.length() - 1 && input[i] == input[i + 1]) {
            ++count;
            ++i;
        }

        
        encoded += to_string(count) + " " + currentChar + " ";
    }

    return encoded;
}

int main() {
    int N;
    string input;

    // Read input
    cin >> N;
    cin.ignore(); 
    getline(std::cin, input);

    
    string encoded = runLengthEncoding(input);
    cout << encoded << std::endl;

    return 0;
}