#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define Or ||
#define Is &&

const int MAXN = 100005;
const int MAXK = 100005;

vector<pair<int, int>> adj[MAXN];
vector<int> price(MAXK);
vector<int> dist(MAXN, INT_MAX);

int main() {
    int N, M, K;
    cin >> N >> M >> K;

    for (int i = 1; i <= K; ++i) {
        cin >> price[i];
    }

    for (int i = 0; i < M; ++i) {
        int u, v, t;
        cin >> u >> v >> t;
        adj[u].emplace_back(v, t);
        adj[v].emplace_back(u, t);
    }

    int A, B;
    cin >> A >> B;

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

    pq.push({0, A});
    dist[A] = 0;

    while (!pq.empty()) {
        int d = pq.top().first;
        int u = pq.top().second;
        pq.pop();

        if (d > dist[u]) continue;

        for (auto edge : adj[u]) {
            int v = edge.first;
            int t = edge.second;
            int new_dist = dist[u] + (t == u ? 0 : price[t]);

            if (new_dist < dist[v]) {
                dist[v] = new_dist;
                pq.push({new_dist, v});
            }
        }
    }

    if (dist[B] == INT_MAX) {
        cout << "-1" << endl;
    } else {
        cout << dist[B] << endl;
    }

    return 0;
}
