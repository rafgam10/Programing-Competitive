#include <bits/stdc++.h>
using namespace std;

int main() {
    int t,i;
    cin>>t;
    int a[t],b[t];
    for(i=0;i<t;i++){
        cin>>a[i]>>b[i];
    }
    for(i=0;i<t;i++){
        cout<<min(a[i],b[i])<<endl;
    }
	return 0;
}
