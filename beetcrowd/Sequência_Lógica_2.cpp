#include <bits/stdc++.h>
using namespace std;
#define ll long long;


int main(){
    
    int x,y,anx=1;
    cin>>x>>y;

    for(int i=1;i<=y;++i){

        if(anx==x){
            cout<<i<<endl;
            anx=1;;
        }else{
            cout<<i<<" ";
            anx++;
        }
        

    }
    

    return 0;
}