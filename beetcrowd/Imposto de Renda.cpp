#include <bits/stdc++.h>
using namespace std;

int main() {
    double salario;
    cin >> salario;

    double imposto = 0.0; // Inicialize o imposto como zero

    if (salario > 2000.00) {
        if (salario <= 3000.00) {
            // Calcula o imposto sobre a parte que excede R$ 2000.00 a 8%
            imposto = (salario - 2000.00) * 0.08;
        } else if (salario <= 4500.00) {
            // Calcula o imposto sobre os primeiros R$ 1000.00 a 8%
            imposto = 1000.00 * 0.08;
            // Calcula o imposto sobre a parte que excede R$ 3000.00 a 18%
            imposto += (salario - 3000.00) * 0.18;
        } else {
            // Calcula o imposto sobre os primeiros R$ 1000.00 a 8%
            imposto = 1000.00 * 0.08;
            // Calcula o imposto sobre a parte entre R$ 3000.00 e R$ 4500.00 a 18%
            imposto += 1500.00 * 0.18;
            // Calcula o imposto sobre a parte que excede R$ 4500.00 a 28%
            imposto += (salario - 4500.00) * 0.28;
        }
    }

    if (imposto > 0.00) {
        // Formata a saída com duas casas decimais
        cout << fixed << setprecision(2);
        cout << "R$ " << imposto << endl;
    } else {
        cout << "Isento" << endl;
    }

    return 0;
}
