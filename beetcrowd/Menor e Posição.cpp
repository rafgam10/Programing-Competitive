#include <bits/stdc++.h>
using namespace std;

#define vec vector

int main(int argc, char const *argv[]){
    
    int n, menor=1000, index;
    cin>>n;
    
    vec<int> vetor(n);
    for(int i=0; i<n;i++){
        cin>>vetor[i];

        if(vetor[i] < menor){
            menor=vetor[i];
            index=i;
        }

    }

    cout<<"Menor valor: "<<menor<<endl;
    cout<<"Posicao: "<<index<<endl;



    return 0;
}
