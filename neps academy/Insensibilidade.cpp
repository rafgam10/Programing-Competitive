#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define max 100100

//https://neps.academy/br/exercise/316

int main() {
    
    int N, anx=0;cin>>N;
    
    //x1 && y1 == coon. reais
    //x2 && y2 == coon. da pessoa

    for (int i = 0; i < N; ++i) {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        int distancia_quadrado = (x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1);
        anx += distancia_quadrado;
    }

    cout << anx << endl;
    

}