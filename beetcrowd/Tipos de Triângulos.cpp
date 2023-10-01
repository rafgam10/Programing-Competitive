#include <bits/stdc++.h>
#define endll printf("\n");
using namespace std;
 
int main() {
    double A,B,C;   
    cin>>A>>B>>C;  
    if (A < B) swap(A, B);
    if (A < C) swap(A, C);
    if (B < C) swap(B, C);

    if (A >= B + C) {
        cout << "NAO FORMA TRIANGULO" << endl;
    } else {
        if (A * A == B * B + C * C) {
            cout << "TRIANGULO RETANGULO" << endl;
        }
        if (A * A > B * B + C * C) {
            cout << "TRIANGULO OBTUSANGULO" << endl;
        }
        if (A * A < B * B + C * C) {
            cout << "TRIANGULO ACUTANGULO" << endl;
        }
        if (A == B && B == C) {
            cout << "TRIANGULO EQUILATERO" << endl;
        } else if (A == B || B == C || A == C) {
            cout << "TRIANGULO ISOSCELES" << endl;
        }
    }

    return 0;
}