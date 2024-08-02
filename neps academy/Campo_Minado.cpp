#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define max 100100

//https://neps.academy/br/exercise/241

int main() {
    int n;cin>>n;
    vector<int> tabuleiro(n+2);
    //0 indica a ausência de minas 
    //1 indica a presença de uma mina
    for(int i=0;i<n;i++){
        cin>>tabuleiro[i];
    }

    for(int i=0;i<n;i++){
        cout<<tabuleiro[i] + tabuleiro[i-1] + tabuleiro[i+1]<<endl;
    }


}