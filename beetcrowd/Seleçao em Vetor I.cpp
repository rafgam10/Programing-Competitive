#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]){
    
    vector<double> vetor(100);
    float n;
    for (int i = 0; i < 100; i++){
        
        cin>>n;
        if(n<=10){
            cout<<fixed<<setprecision(1);
            cout<<"A["<<i<<"] = "<<n<<endl;
        }

    }
    


    return 0;
}
