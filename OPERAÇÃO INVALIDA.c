#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

#define TAM 6 \\definir o tamanho do vetor

int main(){
	
	int pares=0, impares=0,i, numero[TAN];
		
		for(i=0;i<TAM ;i++){
		printf("Digite o %iº Número: ",i+1);
		scanf("%i",numero[i]);
		if(numero[i]%2==0){
			pares++;
		}else {
			impares++;
		}	
		
		printf("Exibindo os resultados \n");
}
		for(i=0;i<TAM ;i++){
			printf("%iº Número: %i\n",i+1,numero[i]);
		}
		
		printf("Quantidade de Números Pares: %i\n",pares);
		printf("Quantidade de Número impares: %i\n",impares);
	
return 0;	
}//operação invalida
