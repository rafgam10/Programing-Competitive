#include <iostream>
using namespace std;

void MinutosHoras(int m){
    int horas,minutos;
    horas=m/60;
    minutos=m%60;
    cout<<horas<<endl<<minutos<<endl;
}

int main(){
    int m;
    cin>>m;
    MinutosHoras(m);
    return 0;
}
