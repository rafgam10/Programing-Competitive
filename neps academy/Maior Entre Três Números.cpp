#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(int argc, char const *argv[]){
    ll a,b,c;
    cin>>a>>b>>c;
    if(a>b && a>c)
        cout<<a<<endl;

    if(a<b && b>c)
        cout<<b<<endl;
    
    if(c>a && c>b){
        cout<<c<<endl;
    }
    if(a==b && a==c){
        cout<<a<<endl;
    }
    
    return 0;
}
