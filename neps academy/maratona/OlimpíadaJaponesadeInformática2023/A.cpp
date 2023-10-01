#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> ages(N);
    for (int i = 0; i < N; i++) {
        cin >> ages[i];
    }

    for (int i = 0; i < N; i++) {
        int max_diff = 0;
        for (int j = 0; j < N; j++) {
            if (i != j) {
                int diff = abs(ages[i] - ages[j]);
                max_diff = max(max_diff, diff);
            }
        }
        cout << max_diff << endl;
    }

    return 0;
}
