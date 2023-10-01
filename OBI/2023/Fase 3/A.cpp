#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define Or ||
#define Is &&

int main() {
    std::vector<int> weights(6);

    for (int i = 0; i < 6; ++i) {
        std::cin >> weights[i];
    }

    // Ordenar os pesos em ordem crescente
    std::sort(weights.begin(), weights.end());

    // Verificar se é possível formar uma pirâmide balanceada
    if ((weights[0] == weights[1] && weights[4] == weights[5] && weights[2] == weights[3]) ||
        (weights[0] == weights[2] && weights[3] == weights[5] && weights[1] == weights[4])) {
        std::cout << "S" << std::endl;
    } else {
        std::cout << "N" << std::endl;
    }

    return 0;
}
