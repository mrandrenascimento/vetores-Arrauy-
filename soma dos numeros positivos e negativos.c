#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

#define TAM 10

int main(){
	int numero[TAM],i, numerosNegativos=0, quantidadeNegetivo, soma=0, numerosPositivos;
	setlocale(LC_ALL,"");
	for(i=0;i<TAM;i++){
		
		printf("Digite o %iº Número: ",i+1);
		scanf("%i",&numero[TAM]);
		
		if(numero[TAM]<0){
			numerosNegativos++;
		}else{ 
			soma+=numero[TAM];	
		}
	}
		//for(i=0;i<TAM;i++){
		//printf("%iº Números: %i\n",i+1,numero[TAM]);
//		}
			printf("Soma dos Números Positivos: %i\n",soma);
			printf("Quantidade de Números Negativos: %i \n",numerosNegativos);
		
return 0;	
}
