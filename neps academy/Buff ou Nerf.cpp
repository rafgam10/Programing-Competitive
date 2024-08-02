#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define max 100100

int main(){
    int N,D,M,P;
    cin>>N>>D>>M>>P;

    if(N*D > M*P){
        cout<<"NERF\n";
    }else{
        cout<<"BUFF\n";
    }
    
    return 0;
}