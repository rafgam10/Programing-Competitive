#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll p,d1,d2,sumD;
    cin>>p>>d1>>d2;
    sumD=d1+d2;
    if(sumD%2==0 == p){
        cout<<1<<endl;
    }
    if(sumD%2!=0 == p){
        cout<<0<<endl;
    }

    return 0;
}