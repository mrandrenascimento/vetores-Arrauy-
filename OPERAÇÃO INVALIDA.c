#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

#define TAM 6 \\definir o tamanho do vetor

int main(){
	
	int pares=0, impares=0,i, numero[TAN];
		
		for(i=0;i<TAM ;i++){
		printf("Digite o %i� N�mero: ",i+1);
		scanf("%i",numero[i]);
		if(numero[i]%2==0){
			pares++;
		}else {
			impares++;
		}	
		
		printf("Exibindo os resultados \n");
}
		for(i=0;i<TAM ;i++){
			printf("%i� N�mero: %i\n",i+1,numero[i]);
		}
		
		printf("Quantidade de N�meros Pares: %i\n",pares);
		printf("Quantidade de N�mero impares: %i\n",impares);
	
return 0;	
}//opera��o invalida
