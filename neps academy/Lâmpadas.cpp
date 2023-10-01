/* #include <iostream>
#include <vector>
using namespace std;

void interrupido(vector<int>& a){
    int count=0,countA=0,countB=0,trocaAB;
    int tam=a.size();

    for(int i=0;i<tam;i++){
        if(a[i]==1){
            countA++;
            countB=0;
        }
        if(a[i]==2 && count==0){
            countB++;
            countA=0;
        }
        if(a[i]==2){
            trocaAB=countB;
            countB=countA;
            countA=trocaAB;
            count++;
        }
        if(a[i]==2 && count==1){
            trocaAB=countB;
            countB=countA;
            countA=trocaAB;
            count--;
        }
    }
    cout<<countA<<endl<<countB<<endl;
}

int main(){
    int n;cin>>n;
    vector<int>It(n);
    for(int i=0;i<n;i++){
        cin>>It[i];
    }
    interrupido(It);

    return 0;
} */

#include <iostream>
#include <vector>

// Usando a diretiva "using namespace std" para evitar ter que digitar "std::" antes de cada uso das bibliotecas.
using namespace std;

// Função que altera o estado das lâmpadas com base na sequência de interruptores.
void switchLamps(vector<int>& switches, bool& lampA, bool& lampB) {
    // Percorre a sequência de interruptores.
    for (int i = 0; i < switches.size(); i++) {
        // Se o interruptor for 1, inverte o estado da lâmpada A.
        if (switches[i] == 1) {
            lampA = !lampA;
        }
        // Se o interruptor for 2, inverte o estado de ambas as lâmpadas, A e B.
        else if (switches[i] == 2) {
            lampA = !lampA;
            lampB = !lampB;
        }
    }
}

int main() {
    int N;
    cin >> N;
    
    vector<int> switches(N);
    for (int i = 0; i < N; i++) {
        cin >> switches[i];
    }
    
    // Variáveis para armazenar o estado das lâmpadas A e B.
    bool lampA = false; // Inicialmente apagada.
    bool lampB = false; // Inicialmente apagada.
    
    // Chamada da função para alterar o estado das lâmpadas com base na sequência de interruptores.
    switchLamps(switches, lampA, lampB);
    
    // Impressão do estado final das lâmpadas.
    cout << lampA << endl; // Imprime 1 se a lâmpada A estiver acesa, 0 caso contrário.
    cout << lampB << endl; // Imprime 1 se a lâmpada B estiver acesa, 0 caso contrário.
    
    return 0;
}

//O meu código principal tava bom só tem que ter uma lógica melhor;