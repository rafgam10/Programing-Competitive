#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]){

    int n;cin>>n;

    vector<string> nome(n);
    vector<int> valores(n);
    int index=0; //Para sabe quem foi o ganhador;
    int maior_valor=0; //Para sabe o maior valor;



    for(int i=0;i<n;i++){
        cin>>nome[i];
        cin>>valores[i];

        if(valores[i] > maior_valor){
            maior_valor=valores[i];
            index=i;
        }

    }

    cout<<nome[index]<<endl;
    cout<<valores[index]<<endl;

    return 0;
}