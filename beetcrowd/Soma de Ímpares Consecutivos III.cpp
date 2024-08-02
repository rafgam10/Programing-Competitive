#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]){
    
    int n;cin>>n;
    vector<int> valor(n);

    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        int sum=0,cont=0;

        while(cont<y){

            if(x%2!=0){
                sum+=x;
                cont++;
            }
            x++;

        }    
        valor[i]=sum;
        sum=0;
        cont=0;
    }

    for(int i=0;i<n;i++){
        cout<<valor[i]<<endl;
    }



    return 0;
}
