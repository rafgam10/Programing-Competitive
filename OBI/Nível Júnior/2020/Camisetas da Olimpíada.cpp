#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]){
    int n,p,m;
    cin>>n;
    char yes='S';
    char no='N';
    int Ti[n];
    for(int i=0;i<n;i++){
        cin>>Ti[i];
    }
    cin>>p>>m;
    int cont=0;
    for(int i=0;i<n;i++){
        if(Ti[i]==p || Ti[i]==m){
            cont++;
        }
    }
    if(cont>0){
        cout<<yes<<endl;
    }else{
        cout<<no<<endl;
    }

    return 0;
}
