#include <bits/stdc++.h>
using namespace std;
#define ll long long;


int main(){

    //Meu Código:
    
    /*
    //Variaveis:
    int inter, gremio,empater;
    int grenais=0, i1,i2, Num;

    //Estrutura de Repetição:
    while(true){

        

        cin>>inter>>gremio;
        if(inter > gremio){
            i1++;
            grenais++;
        }else if(inter<gremio){
            i2++;
            grenais++;
        }else{
            empater++;
            grenais++;
        }   
        cout<<"Novo grenal (1-sim 2-nao)\n";
        cin>>Num;
        while(Num==1){
            cin>>inter>>gremio;
            if(inter > gremio){
            i1++;
            grenais++;
            }else if(inter<gremio){
                i2++;
                grenais++;
            }else{
                empater++;
                grenais++;
            }  
            cout<<"Novo grenal (1-sim 2-nao)\n";
            cin>>Num;
        }
        if(Num==2){
            break;
        }

    }
    //Imprimir dados:
    cout<<grenais<<" grenais\n";
    cout<<"Inter:"<<i1<<endl;
    cout<<"Gremio:"<<i2<<endl;
    cout<<"Empates:"<<empater<<endl;
    
    i1>i2 ? (cout<<"Inter venceu mais\n"):(cout<<"Gremio venceu mais\n");
    if(i1==i2) cout<<"Nao houve vencedor\n";
    */

   //Código certo:
   int grenais = 0, interWins = 0, gremioWins = 0, draws = 0;

    while (true) {
        int interGoals, gremioGoals;
        cin >> interGoals >> gremioGoals;

        grenais++;
        if (interGoals > gremioGoals) {
            interWins++;
        } else if (gremioGoals > interGoals) {
            gremioWins++;
        } else {
            draws++;
        }

        int opcao;
        cout << "Novo grenal (1-sim 2-nao)" << endl;
        cin >> opcao;

        if (opcao == 2) {
            break;
        }
    }

    cout << grenais << " grenais" << endl;
    cout << "Inter:" << interWins << endl;
    cout << "Gremio:" << gremioWins << endl;
    cout << "Empates:" << draws << endl;

    if (interWins > gremioWins) {
        cout << "Inter venceu mais" << endl;
    } else if (gremioWins > interWins) {
        cout << "Gremio venceu mais" << endl;
    } else {
        cout << "Nao houve vencedor" << endl;
    }


    return 0;
}