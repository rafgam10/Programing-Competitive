#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 1001000

int main() {
    ll N;
    cin >> N;

    vector<int> sequence(N);
    for (int i = 0; i < N; ++i) {
        cin >> sequence[i];
    }

    int maxLength = 0;
    int left = 0;
    unordered_set<int> distinctNumbers;

    for (int right = 0; right < N; ++right) {
        while (distinctNumbers.count(sequence[right])) {
            distinctNumbers.erase(sequence[left]);
            ++left;
        }

        distinctNumbers.insert(sequence[right]);
        maxLength = std::max(maxLength, right - left + 1);
    }

    cout << maxLength << endl;

    return 0;
}
