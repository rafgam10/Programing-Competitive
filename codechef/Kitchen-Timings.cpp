#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,i;
    cin>>t;
    int x[t],y[t],sum[t];
    for(i=0;i<t;i++){
        cin>>x[i]>>y[i];    
        if(x[i]<y[i]) sum[i]=y[i]-x[i];
        else sum[i]=x[i]-y[i];
    }
    for(i=0;i<t;i++){
        cout<<sum[i]<<'\n';   
    }
	return 0;
}
