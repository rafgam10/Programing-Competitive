#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int m,n;
    cin>>m>>n;
    int a=pow(m,2)-pow(n,2);
    int b=2*m*n;
    int c=pow(m,2)+pow(n,2);

    cout<<a<<" "<<b<<" "<<c<<" "<<endl;


    return 0;
}