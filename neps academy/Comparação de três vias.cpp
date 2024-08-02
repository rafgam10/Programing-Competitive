#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define max 100100

int main(){
    int A,B,ans;
    cin>>A>>B;
    if(A<B)ans= -1;
    if(A==B)ans= 0;
    if(A>B)ans= 1;
    cout<<ans<<endl;
}