#include <bits/stdc++.h>
using namespace std;
#define ll long long;

int main(){
    
    //Meu Código:
    int x,y;
    cin>>x>>y;

    int maior=max(x,y);
    int menor=min(x,y);

    for(int i=menor+1;i<maior;i++){
        if(i%5==2 || i%5==3){
            cout<<i<<endl;
        }
    }
    
    //Outro jeito:
    /*
    if(x>y){
        for(int i=y;i<x;i++){
            if(i%5==2 || i%5==3){
                cout<<i<<endl;
            }
        }
    }else{
        for(int i=x;i<y;i++){
            if(i%5==2 || i%5==3){
                cout<<i<<endl;
            }
        }
    }
    
    */

    return 0;
}