#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define max 100100

int main(){
    char ans;
    int N;
    cin>>N;
    if(N==0){
        ans='E';
    }
    if(N>=1 && N<=35 ){
        ans='D';
    }
    if(N>=36 && N<=60 ){
        ans='C';
    }
    if(N>=61 && N<=85 ){
        ans='B';
    }
    if(N>=86 && N<=100 ){
        ans='A';
    }
    cout<<ans<<endl;

}