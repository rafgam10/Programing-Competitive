#include <stdio.h>
#include <stdlib.h>

int n, qtd, dia; // declaro as variáveis "n", "qtd" e "dia"

int main(){
	
	scanf("%d", &n); // leio o número de dias
	
	for(int i=1; i<=n; i++){ // para cada dia
		
		// declaro e leio o número de acessos
		int acessos;
		scanf("%d", &acessos);
		
		// se a página já alcançou 1 milhão, nao faço nada, dou continue
		if(dia!=0) continue;
		
		// caso contrário
		qtd+=acessos; // adiciono os acessos do dia ao número total de acessos
		
		// e se o total ultrapassar 1 milhão, salvo o dia atual em "dia"
		if(qtd>=1000000) dia=i;
	}
	
	// após ler a entrada, imprimo a resposta, salva em "dia"
	printf("%d\n", dia);
	
	return 0;
}
