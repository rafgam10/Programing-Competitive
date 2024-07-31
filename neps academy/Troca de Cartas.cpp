#include <bits/stdc++.h>
using namespace std;

#define st set

//Não finalizando: https://neps.academy/br/exercise/278

int main(int argc, char const *argv[]){
    
    int A,B, trocas=0;
    cin>>A>>B;

    st<int> Xi, Yi;

    for(int i=0;i<A;i++){
        int x;cin>>x;

        Xi.insert(x);
    }
    for(int i=0;i<B;i++){
        int x;cin>>x;

        Yi.insert(x);
    }

    st<int>::iterator it=Yi.begin();

    for(auto x : Xi){
        if(x != *it){
            trocas++;
        }
        it++;
    }

    cout<<trocas<<endl;


    return 0;
}
