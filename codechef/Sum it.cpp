#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,i;cin>>t;
    int a[t],b[t],c[t];
    for(i=0;i<t;i++)
        cin>>a[i]>>b[i]>>c[i];
    for(i=0;i<t;i++)
        if(c[i]==(a[i]+b[i])) cout<<"YES\n";
        else cout<<"NO\n";
	return 0;
}
