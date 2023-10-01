#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(int argc, char const *argv[]){
    float a,b,c;
    cout<<fixed<<setprecision(1);
    cin>>a>>b>>c;
    double delta=b*b-4*a*c;
    double x1,x2;
    if(delta<0||a==0){
        cout<<"Impossivel calcular\n";  
    }else{
        x1=(-b+sqrt(delta))/(2*a);
        x2=(-b-sqrt(delta))/(2*a);
        cout<<fixed<<setprecision(5);
        cout<<"R1 = "<<x1<<"\n";
        cout<<"R2 = "<<x2<<"\n";
    }

    return 0;
}
