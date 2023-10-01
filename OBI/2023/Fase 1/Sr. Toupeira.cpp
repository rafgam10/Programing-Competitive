#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

bool isPossible(const vector<unordered_set<int>>& graph, const vector<int>& path) {
    for (int i = 0; i < path.size() - 1; i++) {
        int source = path[i];
        int destination = path[i + 1];
        if (graph[source].find(destination) == graph[source].end()) {
            return false;
        }
    }
    return true;
}

int main() {
    //Os valores:
    int S, T;
    cin >> S >> T;
    vector<unordered_set<int>> graph(S + 1);
    for (int i = 0; i < T; i++) {
        int X, Y;
        cin >> X >> Y;
        graph[X].insert(Y);
        graph[Y].insert(X);
    }
    int P;
    cin >> P;
    int count = 0;
    for (int i = 0; i < P; i++) {
        int N;
        cin >> N;
        vector<int> path(N);
        for (int j = 0; j < N; j++) {
            cin >> path[j];
        }if (isPossible(graph, path)) {
            count++;
        }
    }
    cout << count << endl;
    
    return 0;
}