#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]){
    int array[5],numP=0,numI=0,numPos=0,numNeg=0;
    for(int i=0;i<5;i++){
        cin>>array[i];
    }
    for(int i=0;i<5;i++){
        if(array[i]%2==0){
            numP++;
        }
    }
    for(int i=0;i<5;i++){
        if(array[i]%2!=0){
            numI++;
        }
    }
    for(int i=0;i<5;i++){
        if(array[i]>0){
            numPos++;
        }
    }
    for(int i=0;i<5;i++){
        if(array[i]<0){
            numNeg++;
        }
    }

    cout<<numP<<" valor(es) par(es)\n";
    cout<<numI<<" valor(es) impar(es)\n";
    cout<<numPos<<" valor(es) positivo(s)\n";
    cout<<numNeg<<" valor(es) negativo(s)\n";

    return 0;
}
