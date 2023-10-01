#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]){
    /* int n;
    cin >> n;
    vector<string> nomes(n);
    vector<int> valores(n);
    for (int i = 0; i < n; i++) {
        std::cin >> nomes[i];
        std::cin >> valores[i];
    }
    int maiorValor = valores[0];
    int indiceMaiorValor = 0;
    for (int i = 1; i < n; i++) {
        if (valores[i] > maiorValor) {
            maiorValor = valores[i];
            indiceMaiorValor = i;
        }
    }
    cout << nomes[indiceMaiorValor] << endl;
    cout << maiorValor << endl; */

    int n;cin>>n;
    int v[n];
    string c[n];
    for(int i=0;i<n;++i){
        cin>>c[i];
        cin>>v[i];
    }
    int maiorV=v[0];
    int indiceMaiorV=0;
    for(int i=1;i<n;++i){
        if(v[i]>maiorV){
            maiorV=v[i];
            indiceMaiorV=i;
        }
    }
    cout<<c[indiceMaiorV]<<"\n";
    cout<<maiorV<<"\n";

    return 0;
}
