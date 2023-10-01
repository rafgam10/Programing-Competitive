#include <iostream>
#include <vector>
#include <set>
#include <unordered_map>

using namespace std;

int main() {
    int E, M, D;
    cin >> E >> M >> D;

    unordered_map<int, set<int>> mesmoGrupoPrefs;
    for (int i = 0; i < M; ++i) {
        int X, Y;
        cin >> X >> Y;
        mesmoGrupoPrefs[X].insert(Y);
        mesmoGrupoPrefs[Y].insert(X);
    }

    unordered_map<int, set<int>> gruposDiferentesPrefs;
    for (int i = 0; i < D; ++i) {
        int U, V;
        cin >> U >> V;
        gruposDiferentesPrefs[U].insert(V);
        gruposDiferentesPrefs[V].insert(U);
    }

    vector<set<int>> grupos(E / 3 + 1);
    for (int i = 1; i <= E / 3; ++i) {
        int I, J, K;
        cin >> I >> J >> K;
        grupos[i].insert(I);
        grupos[i].insert(J);
        grupos[i].insert(K);
    }

    int totalViolacoes = 0;
    for (int i = 1; i <= E / 3; ++i) {
        set<int> grupoAtual = grupos[i];
        for (int estudante : grupoAtual) {
            for (int mesmoPref : mesmoGrupoPrefs[estudante]) {
                if (grupoAtual.count(mesmoPref)) {
                    totalViolacoes++;
                }
            }
            for (int difPref : gruposDiferentesPrefs[estudante]) {
                if (grupoAtual.count(difPref)) {
                    totalViolacoes++;
                }
            }
        }
    }

    cout << totalViolacoes / 2 << endl; // Cada violação é contada duas vezes

    return 0;
}
