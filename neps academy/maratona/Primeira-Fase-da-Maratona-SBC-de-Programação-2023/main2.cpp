#include <bits/stdc++.h>
using namespace std;

string lexMinString(const string& s, int k) {
    int n = s.size();
    string result = s;

    for (int i = 0; i < n; ++i) {
        int j = i;
        for (int x = i + 1; x < n && x <= i + k; ++x) {
            if (result[x] < result[j]) {
                j = x;
            }
        }

        // Realiza as trocas necessárias
        for (int x = j; x > i; --x) {
            swap(result[x], result[x - 1]);
        }

        // Atualiza k para o restante da string
        k -= (j - i);

        // Se k se tornar zero, podemos parar, pois a string lexicograficamente mínima já foi formada
        if (k == 0) {
            break;
        }
    }

    return result;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    int k;
    cin >> k;

    string result = lexMinString(s, k);

    cout << result << endl;

    return 0;
}
