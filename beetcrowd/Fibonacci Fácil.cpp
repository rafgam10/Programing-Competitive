#include <iostream>
using namespace std;

int main() {
    int N;
    
    // Leitura do valor de N
    cin >> N;
    
    // Verifica se N é maior que zero
    if (N <= 0) {
        return 0;
    }
    
    // Inicializa os dois primeiros números da sequência de Fibonacci
    int a = 0, b = 1;
    
    // Imprime os primeiros números da sequência de Fibonacci
    for (int i = 0; i < N; ++i) {
        if (i > 0) {
            cout << " ";
        }
        cout << a;
        
        // Atualiza os valores para os próximos números da sequência
        int next = a + b;
        a = b;
        b = next;
    }
    
    cout << endl;
    return 0;
}
