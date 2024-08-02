#include <bits/stdc++.h>
using namespace std;

#define MAX 100

int main(int argc, char const *argv[]){
    
    
    /*
        Notação:
            - Diversos números são ditos em voz alto;
            - Quando o número 0 é dito então o programa terminar;
            - Imprimir o maior número da sequencia;

    */    

    int val,anx;
    vector<int> vetor(MAX);
    cin>>val;

    if(val>0){
        anx=val;
    }   

    while(val!=0){
        
        cin>>val;

        if(val>anx){
            anx=val;
        }
    
    }


    cout<<anx<<endl;

    

    return 0;
}
