#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define max 100100

int main(){
    int N,ans=0;
    cin>>N;
    for(int i=1;i<=N;i++){
        ans+=i;
    }
    cout<<ans<<endl;
}