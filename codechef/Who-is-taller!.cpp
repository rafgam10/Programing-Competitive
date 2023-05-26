#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;cin>>t;
    int x[t],y[t];
    for(int i=0;i<t;i++)
        cin>>x[i]>>y[i];
    for(int i=0;i<t;i++)
        if(x[i]<y[i]) cout<<"B\n";
        else cout<<"A\n";
	return 0;
}
