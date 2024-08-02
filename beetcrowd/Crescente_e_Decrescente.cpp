#include <bits/stdc++.h>
using namespace std;
#define ll long long;


int main(){
    int x,y;
    cin>>x>>y;
    while(x!=y){
        if(x>y && y<x){
            cout<<"Decrescente\n";
        }else{
            cout<<"Crescente\n";
        }
        cin>>x>>y;
    }

    return 0;
}