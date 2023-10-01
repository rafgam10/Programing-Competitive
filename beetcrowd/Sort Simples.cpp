#include <iostream>
#include <vector>
#define endll printf("\n");
using namespace std;
 
int main() {
    int aux;
    vector<int> Arr(3),Arr2(3);
    for(int i=0;i<3;i++){
        cin>>Arr[i];
        Arr2[i]=Arr[i];
    }   
    for (int i=0;i<3; i++){
        for (int j=i+1;j<3; j++){
            if(Arr[i]>Arr[j]){
                aux=Arr[j];
                Arr[j]=Arr[i];
                Arr[i]=aux;
            }
        }
    }
    for (int i = 0; i < 3; i++){
        cout<<Arr[i]<<endl;
    }endll;
    for(int i=0;i<3;i++){
        cout<<Arr2[i]<<endl;
    }

    return 0;
}