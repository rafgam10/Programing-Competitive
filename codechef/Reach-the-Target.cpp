#include <iostream>
using namespace std;

int main() {
    int t,i;cin>>t;
    int a[t],b[t];
    for(i=0;i<t;i++) 
        cin>>a[i]>>b[i];
    for(i=0;i<t;i++)
        cout<<a[i]-b[i]<<"\n";
	return 0;
}
