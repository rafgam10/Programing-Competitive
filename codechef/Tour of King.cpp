#include <iostream>
using namespace std;

int main() {
	int t,i;cin>>t;
    int n[t],m[t];
    for(i=0;i<t;i++)
        cin>>n[i]>>m[i];
    for(i=0;i<t;i++)
        cout<<(n[i]*5)+(m[i]*7)<<"\n";

	return 0;
}