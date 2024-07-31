#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main(int argc, char const *argv[]){
    
    int t,j=0;cin>>t;

    array<int, 1000> vetor;

    for(int i=0;i<vetor.size();i++){
        
        if(j<t){
            vetor[i]=j;
            j++;
        }
        if(j==t){
            j=0;
        }

    }

    for(int i=0;i<vetor.size();i++){
        cout<<"N["<<i<<"] = "<<vetor[i]<<endl;
    }

    return 0;
}
