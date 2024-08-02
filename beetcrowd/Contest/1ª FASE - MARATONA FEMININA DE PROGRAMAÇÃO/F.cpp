#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int n;
    cin>>n;
    int t,k,p1=0,p2=0;
    for(int i=0;i<n;i++){
        printf("Time %i +%i", &t, &k);
        if(t==1){
            p1+=k;
        }else{
            p2+=k;
        }
    }


    cout<<p1<<" x "<<p2<<endl;


    return 0;
}