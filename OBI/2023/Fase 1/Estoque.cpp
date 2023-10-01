#include <iostream>
#include <vector>

int main() {
    int M, N;
    std::cin >> M >> N;
    std::vector<std::vector<int>> estoque(M, std::vector<int>(N));
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            std::cin >> estoque[i][j];
        }
    }
    int P;
    std::cin >> P;
    int vendas = 0;
    for (int k = 0; k < P; k++) {
        int I, J;
        std::cin >> I >> J;
        if (estoque[I-1][J-1] > 0) {
            estoque[I-1][J-1]--;
            vendas++;
        }
    }
    std::cout << vendas << std::endl;
    return 0;
}