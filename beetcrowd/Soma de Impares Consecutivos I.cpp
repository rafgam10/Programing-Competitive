#include <bits/stdc++.h>
using namespace std;

int main(){
    int X,Y,sum=0,menor,maior;
    cin>>X>>Y;
    if(X<Y){
        menor=X;
        maior=Y;
    }else{
        menor=Y;
        maior=X;
    }
    for(int i=menor+1;i<maior;i++){
        if(i%2!=0){
            sum+=i;
        }
    }
    cout<<sum<<endl;

    return 0;
}
