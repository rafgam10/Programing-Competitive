#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]){
    double salario,novoSalario,ganho;
    int percentual;
    cin>>salario;
    if(salario<=400.00){
        ganho=salario*0.15;
        novoSalario=salario+ganho;
        percentual=15;
    }else if(salario<=800.00){
        ganho=salario*0.12;
        novoSalario=salario+ganho;
        percentual=12;
    }else if(salario<=1200.00){
        ganho=salario*0.10;
        novoSalario=salario+ganho;
        percentual=10;
    }else if(salario<=2000.00){
        ganho=salario*0.07;
        novoSalario=salario+ganho;
        percentual=7;
    }else if(salario>2000.00){
        ganho=salario*0.04;
        novoSalario=ganho+salario;
        percentual=4;
    }

    cout<<fixed<<setprecision(2)<<"Novo salario: "<<
    novoSalario<<endl<<"Reajuste ganho: "<<ganho<<endl<<
    "Em percentual: "<<percentual<<" %\n";
    
    return 0;
}
