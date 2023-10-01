#include <iostream>
#include <iomanip> // Para setprecision
using namespace std;

int main() {
    // Leitura das notas
    double N1, N2, N3, N4;
    cin >> N1 >> N2 >> N3 >> N4;
    // Cálculo da média ponderada
    double media = (N1 * 2 + N2 * 3 + N3 * 4 + N4) / 10;
    cout << fixed << setprecision(1); // Configuração da precisão decimal
    cout << "Media: " << media << endl;
    // Verificação do status do aluno
    if (media >= 7.0) {
        cout << "Aluno aprovado." << endl;
    } else if (media < 5.0) {
        cout << "Aluno reprovado." << endl;
    } else {
        cout << "Aluno em exame." << endl;
        // Leitura da nota do exame
        double notaExame;
        cin >> notaExame;
        cout << "Nota do exame: " << notaExame << endl;
        // Recálculo da média final
        double mediaFinal = (media + notaExame) / 2;
        // Verificação do status após o exame
        if (mediaFinal >= 5.0) {
            cout << "Aluno aprovado." << endl;
        } else {
            cout << "Aluno reprovado." << endl;
        }
        cout << "Media final: " << mediaFinal << endl;
    }
    return 0;
}
