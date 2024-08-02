#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define max 100100

int main() {
    vector<string> estadosNorte = {
        "roraima",
        "acre",
        "amapa",
        "amazonas",
        "para",
        "rondonia",
        "tocantins"
    };

    string estado;
    cin >> estado;

    bool pertenceAoNorte = false;

    for (const string& estadoNorte : estadosNorte) {
        if (estado == estadoNorte) {
            pertenceAoNorte = true;
            break;
        }
    }

    if (pertenceAoNorte) {
        cout << "Regiao Norte" << endl;
    } else {
        cout << "Outra regiao" << endl;
    }

    return 0;
}