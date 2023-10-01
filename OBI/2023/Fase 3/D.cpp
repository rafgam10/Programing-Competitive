#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    vector<int> sizes(N);
    for (int i = 0; i < N; ++i) {
        cin >> sizes[i];
    }

    sort(sizes.begin(), sizes.end());

    long long balance = 0;
    for (int i = 0; i < K; ++i) {
        balance += (sizes[N - 1 - i] - sizes[i]) * (sizes[N - 1 - i] - sizes[i]);
    }

    cout << balance << endl;

    return 0;
}
