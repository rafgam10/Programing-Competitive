#include <bits/stdc++.h>
using namespace std;

#define vec vector
#define cendl cout<<endl

//Link do Exercicio: https://neps.academy/br/exercise/244

int main(int argc, char const *argv[]){
    
    vec<int> S = {100,50,25,10,5,1};

    int v;cin>>v;

    int moedas=0;

    //Utilizando o forArch para rodar a lista de moedas;
    for(auto moeda : S){
        if(v==0){
            break;
        }

        //Conta quantas moedas deste valor são necessarias;
        moedas+=v/moeda;

        //Atualiza o valor restante;
        v%=moeda;
    }

    cout<<moedas<<endl;

    return 0;
}
