#include <iostream>
#include <vector>
using namespace std;

int vector100(vector<int>& a){
    int cont=0;
    int tam=a.size();

    for(int i=0;i<tam-2;i++){
        if(a[i]==1 && a[i+1]==0 && a[i+2]==0){
            cont++;
        }
    }
    return cont;
}

int main(){
    int n;cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int resultado=vector100(a);
    cout<<resultado<<endl;

    return 0;
}
