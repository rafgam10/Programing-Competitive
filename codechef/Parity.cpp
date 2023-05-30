#include <iostream>
using namespace std;

int main() {
	int t,i;cin>>t;
    int x[t];
    for(i=0;i<t;i++)
        cin>>x[i];
    for(i=0;i<t;i++)
        if(x[i]%2==0) cout<<"YES\n";
        else cout<<"NO\n";

	return 0;
}