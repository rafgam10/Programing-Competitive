#include <iostream>
using namespace std;

int main() {
	int t,i;
    cin>>t;
    int x[t],n[t],xt[t];
    for(i=0;i<t;i++){
        cin>>x[i]>>n[i];
        xt[i]=x[i]/10;
    }
    for(i=0;i<t;i++){
        cout<<xt[i]*n[i]<<"\n";
    }

	return 0;
}