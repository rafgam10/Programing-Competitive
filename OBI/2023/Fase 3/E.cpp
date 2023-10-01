#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

struct Building {
    int x, y;
};

bool compareX(const Building& a, const Building& b) {
    return a.x < b.x;
}

bool compareY(const Building& a, const Building& b) {
    return a.y < b.y;
}

long long calculateMaxDistance(vector<Building>& buildings) {
    sort(buildings.begin(), buildings.end(), compareX);

    int n = buildings.size();
    long long maxX = buildings[n - 1].x - buildings[0].x;

    sort(buildings.begin(), buildings.end(), compareY);

    long long maxY = buildings[n - 1].y - buildings[0].y;

    return max(maxX, maxY);
}

int main() {
    int N;
    cin >> N;

    vector<Building> buildings(N);

    for (int i = 0; i < N; ++i) {
        cin >> buildings[i].x;
    }

    for (int i = 0; i < N; ++i) {
        cin >> buildings[i].y;
    }

    long long result = calculateMaxDistance(buildings);

    cout << result << endl;

    return 0;
}
