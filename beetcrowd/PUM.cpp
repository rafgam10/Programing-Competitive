#include <bits/stdc++.h>
using namespace std;
#define ll long long;

int main(){
    
    int n;
    cin>>n;
    int N=n*4;
    for(int i=1;i<=N;i++){
        if(i%4==0){
            cout<<"PUM\n";
        }else{
            cout<<i<<" ";
        }
    }


    return 0;
}