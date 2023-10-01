#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> heightsA(N);
    vector<int> heightsB(N);
    vector<int> heightsC(N);
    vector<int> heightsD(N);

    for (int i = 0; i < N; i++) {
        cin >> heightsA[i];
    }
    for (int i = 0; i < N; i++) {
        cin >> heightsB[i];
    }
    for (int i = 0; i < N; i++) {
        cin >> heightsC[i];
    }
    for (int i = 0; i < N; i++) {
        cin >> heightsD[i];
    }

    sort(heightsA.begin(), heightsA.end());
    sort(heightsB.begin(), heightsB.end());
    sort(heightsC.begin(), heightsC.end());
    sort(heightsD.begin(), heightsD.end());

    int minDiff = INT_MAX;

    for (int i = 0; i < N; i++) {
        int diff = max({heightsA[i], heightsB[i], heightsC[i], heightsD[i]}) - min({heightsA[i], heightsB[i], heightsC[i], heightsD[i]});
        minDiff = min(minDiff, diff);
    }

    cout << minDiff << endl;

    return 0;
}
