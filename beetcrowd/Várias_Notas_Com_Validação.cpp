#include <bits/stdc++.h>
using namespace std;
#define ll long long;


int main(){
    
    //Meu Código saiu certo, mais passou do limite;
    /*
    bool escolha=true;
    do{
        float x1,x2,sum=0;
        cin>>x1;
        while(x1 < 0 || x1 > 10){
            cout<<"nota invalida\n";
            cin>>x1;
        }
        cin>>x2;
        while(x2 < 0 || x2 > 10){
            cout<<"nota invalida\n";
            cin>>x2;
        }
        sum=(x1+x2)/2;
        cout<<fixed<<setprecision(2);
        cout<<"media = "<<sum<<endl;

        //Etapa de calcula denovo = certo
        cout<<"novo calculo (1-sim 2-nao)\n";
        int anx;cin>>anx;
        while(anx < 1 || anx > 2){
            cout<<"novo calculo (1-sim 2-nao)\n";
            int anx;cin>>anx;
        }
        if(anx==2){
            escolha=false;
        }else if(anx==1){
            escolha=true;
        }



    }while(escolha);
    */

   //Código certo:
   while (true) {
        double notas[2];
        int count = 0;
        
        while (count < 2) {
            double nota;
            cin >> nota;
            
            if (nota < 0 || nota > 10) {
                cout << "nota invalida" << endl;
            } else {
                notas[count] = nota;
                count++;
            }
        }
        
        double media = (notas[0] + notas[1]) / 2;
        cout << "media = " << fixed << setprecision(2) << media << endl;
        
        int opcao;
        do {
            cout << "novo calculo (1-sim 2-nao)" << endl;
            cin >> opcao;
        } while (opcao != 1 && opcao != 2);
        
        if (opcao == 2) {
            break;
        }
    }
    

    return 0;
}