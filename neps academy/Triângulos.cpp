#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define max 100100

//https://neps.academy/br/exercise/312

int main() {
    
    int A,B,C;cin>>A>>B>>C;
    if (A + B > C && A + C > B && B + C > A) {
        // Classificação do triângulo
        if (A*A + B*B == C*C || A*A + C*C == B*B || B*B + C*C == A*A) {
            cout << "r" << endl; // Triângulo retângulo
        } else if (A*A + B*B < C*C || A*A + C*C < B*B || B*B + C*C < A*A) {
            cout << "o" << endl; // Triângulo obtusângulo
        } else {
            cout << "a" << endl; // Triângulo acutângulo
        }
    } else {
        cout << "n" << endl; // Não é possível formar um triângulo
    }

}