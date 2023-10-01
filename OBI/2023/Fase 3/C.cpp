#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define Or ||
#define Is &&

// 3/1

int main() {
    int N, M;
    cin >> N >> M;

    vector<int> carros(N);
    vector<int> mecanicos(M);

    for (int i = 0; i < N; ++i) {
        cin >> carros[i];
    }

    for (int i = 0; i < M; ++i) {
        cin >> mecanicos[i];
    }

    sort(carros.begin(), carros.end(), greater<int>());
    sort(mecanicos.begin(), mecanicos.end());

    long long int tempoTotal = 0;
    long long int tempoEspera = 0;

    for (int i = 0; i < N; ++i) {
        tempoTotal += carros[i];
        tempoEspera += tempoTotal * mecanicos[i % M];
    }

    cout << tempoEspera << endl;

    return 0;
}
