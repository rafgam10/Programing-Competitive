#include <bits/stdc++.h>
#define endll printf("\n");
using namespace std;
 
int main() {
    int horaInicio,horaFim,horaProcesso;
    cin>>horaInicio>>horaFim;
    if (horaFim < horaInicio) {
        horaFim += 24;
    }
    horaProcesso = horaFim - horaInicio;
    if (horaProcesso < 1) {
        horaProcesso += 24;
    }
    cout << "O JOGO DUROU " << horaProcesso << " HORA(S)" << endl;

    return 0;
}