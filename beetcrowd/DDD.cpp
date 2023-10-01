#include <iostream>
using namespace std;

//beecrowd | 1050 :

int main(int argc, char const *argv[]){
    int i=0,escolhar,ddd[8]={61,71,11,21,32,19,27,32};
    string destino[8]={"Brasilia", "Salvador", "Sao Paulo",
                       "Rio de Janeiro", "Juiz de Fora", "Campinas",
                       "Vitoria", "Belo Horizonte"};
    bool acha=false;
    cin>>escolhar;
    for(int i=0;i<8;i++){
        if(escolhar == ddd[i]){
            cout<<destino[i]<<"\n";
            acha=true;
            break;
        }
    }
    if (!acha){
        cout<<"DDD nao cadastrado\n";
    }
    return 0;
}
