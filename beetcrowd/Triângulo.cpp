#include <bits/stdc++.h>
#define endll printf("\n");
using namespace std;
 
int main() {
    double A,B,C,Area,Perimento;
    cin>>A>>B>>C;   
    if(A + B > C && A + C > B && B + C > A){
        Perimento=A+B;
        Perimento+=C;
        cout<<fixed<<setprecision(1)<<"Perimetro = "<<Perimento<<endl;
    }else{
        Area=(A+B)*C/2.0;
        cout<<fixed<<setprecision(1)<<"Area = "<<Area<<endl;
    }


    return 0;
}