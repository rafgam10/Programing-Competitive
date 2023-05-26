#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;cin>>t;
    int x[t];
    for(int i=0;i<t;i++)
        cin>>x[i];
    for(int i=0;i<t;i++)
        if(x[i]<=60 && x[i]>=30) cout<<"YES\n";
        else cout<<"NO\n";
	return 0;
}