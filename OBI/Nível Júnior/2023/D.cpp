#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

const int MAX_N = 100005;
const int INF = 1e9;

struct Boat {
    int to;
    int capacity;
};

vector<Boat> boats[MAX_N];
int max_capacity[MAX_N];

void bfs(int start) {
    queue<int> q;
    q.push(start);
    max_capacity[start] = INF;

    while (!q.empty()) {
        int current = q.front();
        q.pop();

        for (const Boat& boat : boats[current]) {
            int next = boat.to;
            int capacity = min(max_capacity[current], boat.capacity);

            if (capacity > max_capacity[next]) {
                max_capacity[next] = capacity;
                q.push(next);
            }
        }
    }
}

int main() {
    int N, B;
    cin >> N >> B;

    for (int i = 0; i < B; ++i) {
        int I, J, P;
        cin >> I >> J >> P;
        boats[I].push_back({J, P});
        boats[J].push_back({I, P});
    }

    int C;
    cin >> C;

    while (C--) {
        int X, Y;
        cin >> X >> Y;
        fill(max_capacity, max_capacity + N + 1, 0);
        bfs(X);
        cout << max_capacity[Y] << endl;
    }

    return 0;
}
