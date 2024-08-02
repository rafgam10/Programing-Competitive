#include <bits/stdc++.h>
using namespace std;
#define ll long long;

int main(){
    
    int x,y,sum=0;
    cin>>x>>y;
    
    //Código Rápido:
    /*
    int menor=min(x,y);
    int maior=max(x,y);

    for(int i=menor;i<=maior;i++){
        if(i%13!=0)sum+=i;
    }
    */
    

    //Meu Código;
    if(x>y){
        for(int i=y;i<=x;i++){
            if(i%13!=0){
                sum+=i;
            }
        }
    }else{
        for(int i=x;i<=y;i++){
            if(i%13!=0){
                sum+=i;
            }
        }
    }

    
    cout<<sum<<endl;

    return 0;
}