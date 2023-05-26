#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,i;
    cin>>t;
    int x[t];
    for(i=0;i<t;i++)
        cin>>x[i];

    for(i=0;i<t;i++)
        if(x[i]<=100) cout<<x[i]<<"\n";
        else cout<<x[i]-10<<"\n";
	return 0;
}
