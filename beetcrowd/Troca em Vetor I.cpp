#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]){
   
   //O código não finalizando por completo, falta de lógica na hora de 
   //inserir elementos trocandos no C++ 27/07/24;

   vector<int> NvetorOriginal(20), NvetorInverso(20);
   int n=NvetorOriginal.size(),j=0;

    for(int i=0;i<n;i++){
        cin>>NvetorOriginal[i];
    }

    int anx;
    for(int i=0;i<n;i++){
        j=n-i-1;
        anx=NvetorOriginal[i];
        NvetorInverso[i] = NvetorOriginal[i];
        NvetorOriginal[j] = anx;
    }

    for (int i = 0; i < n; i++){
        
        cout<<"N["<<i<<"] = "<<NvetorInverso[i]<<endl;

    }
    
    


    return 0;
}
