#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll a,b,c,d,i=0;
    cin>>a>>b>>c>>d;
    if(a==b+c+d){
        i+=1;;
    }
    if(d==b+c){
        i+=1;
    }
    if(b==c){
        i+=1;
    }
    if(i==3){
        cout<<"S\n";
    }else{
        cout<<"N\n";
    }

    return 0;
}