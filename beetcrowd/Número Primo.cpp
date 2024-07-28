#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char const *argv[]){
    
    int t;
    cin>>t;

    while(t--){

        int n;
        cin>>n;
        int sum=0;

        for(int i=1;i<n/2+1;i++){

            if(n%i==0){
                sum+=i;
            }
        }

        if(sum==1){
            cout<<n<<" eh primo"<<endl;
        }else{
            cout<<n<<" nao eh primo"<<endl;
        }
        


    }


    

    return 0;
}
