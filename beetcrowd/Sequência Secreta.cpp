#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]){
    
    /*
    
        notação:

            - Ela começa e terminar com número 1;
            - Apenas 1 e 2 que aparece nela;
            - E o número 2 aparece pelo menos 1 vezes;
            - É possível marcar só 7 números;

            *Teorias 1:

                - Na verdade apenas um valor que estaria relacionado a um 
                  segredo dos imperadores;
                - Esse valor é a quantidade máxima de números da sequencia
                  que poderiam ser marcados com um círculo, de modo que
                  a sequencia de números marcados não contenha dois 
                  números iguais consecutivos;
                - 

    
    */

    int t;cin>>t;
    int anx=0;
    vector<int> Vi(t);
    for(int i=0;i<t;i++){
        cin>>Vi[i];
    }

    for (int i = 0; i < t; i++){
        
        if(Vi[i] != Vi[i+1]){
            anx++;
        }

    }

    cout<<anx<<endl;
    

    

    return 0;
}
