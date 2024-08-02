#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define Cendl cout<<endl;
int N;


int main() {
    string mensagem;
    getline(cin, mensagem);

    string mensagemDecodificada = "";

    for (int i = 0; i < mensagem.length(); ++i) {
        if (mensagem[i] == 'p' && i + 1 < mensagem.length()) {
            mensagemDecodificada += mensagem[i + 1];
            i += 1;  // Avança mais uma posição para pular a próxima letra
        } else {
            mensagemDecodificada += mensagem[i];
        }
    }

    cout << mensagemDecodificada << endl;

    return 0;
}