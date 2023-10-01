#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, W, D;
    cin >> N >> W >> D;

    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    vector<vector<int>> dp(N + 1, vector<int>(D + 1, 0));

    for (int i = 2; i <= N; i++) {
        dp[i][0] = A[i - 1];
    }

    for (int i = 2; i <= N; i++) {
        for (int j = 1; j <= D; j++) {
            int maxVal = 0;
            int dist = 0;

            for (int k = i; k >= 2; k--) {
                dist += 1;

                if (dist > j) {
                    break;
                }

                maxVal = max(maxVal, dp[k][j - dist] + A[k - 1]);
            }

            dp[i][j] = maxVal;
        }
    }

    cout << dp[N][min(D, W)] << endl;

    return 0;
}
