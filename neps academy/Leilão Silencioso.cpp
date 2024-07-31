#include <bits/stdc++.h>
using namespace std;

#define vec vector
#define ll long long

int main(int argc, char const *argv[]){
    
    int t;
    cin>>t;

    vec<string> nomes(t);
    vec<int> valores(t);

    string ganhador = "nada";
    int index, maior_lance=0;
    

    for(int i=0;i<t;i++){
        cin>>nomes[i];
        cin>>valores[i];

        if(valores[i] > maior_lance){
            index=i;
            maior_lance=valores[i];
            ganhador=nomes[i];
        }
        if(valores[i] == maior_lance && ganhador == "nada"){
            ganhador=nomes[i];
        }

    }

    cout<<ganhador<<endl;
    

    return 0;
}
