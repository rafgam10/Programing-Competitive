#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    int v[t];
    for (int i = 0; i < t; i++) {
        int n, x, k;
        cin >> n >> x >> k;

        int total_water = x * n; // Total de água necessário para encher todas as garrafas
        int max_bottles_filled = k / x; // Número máximo de garrafas que podem ser enchidas com a água disponível

        int bottles_filled = min(n, max_bottles_filled); // Número real de garrafas preenchidas

        v[i]=bottles_filled;
    }
    for(int i=0;i<t;i++){
        cout<<v[i]<<endl;
    }
    return 0;
}
