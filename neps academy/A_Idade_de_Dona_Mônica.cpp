#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define max 100100

int main() {
    int M,A,B,ans;cin>>M>>A>>B;

    ans=M-A-B;
    if(ans>A && ans>B){
        cout<<ans<<endl;
    }else if(A>B && A>ans){
        cout<<A<<endl;
    }else{
        cout<<B<<endl;
    }
    

}