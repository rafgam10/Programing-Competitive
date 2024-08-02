#include <bits/stdc++.h>
using namespace std;
#define ll long long;


int main(){
    int m,n;cin>>m>>n;
    int ans,sum;

    while(m > 0 && n > 0){
        if(n<m){
            ans=m;
            m=n;
            n=ans;
        }

        for(int i=m;i<=n;i++){
            sum+=i;
            cout<<i<<" ";
        }
        cout<<"Sum="<<sum<<endl;
        sum=0;
        cin>>m>>n;
    }

    return 0;
}