#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //Bibliotecas
#include<string.h>

#define TAM 2

void cabecalho(){
	
	setlocale(LC_ALL, "");
	system("cls\\clear");
	printf("\n=== SENAI DENDEZEIRO ===\n");
	fflush(stdin);
}
 int main(){
	
	int idade[TAM],i;
	char nome[TAM][200];
	cabecalho();
	for(i=0;i<TAM ;i++){
		printf("Digite %i� Nome: ",i+1);
		scanf("%s",&nome[i]);
		printf("Digite %i� Idade: ",i+1);
		scanf("%i",&idade[i]);
	}
	for(i=0;i<TAM ;i++){
		printf("%i� Nome: %s \n ",i+1,nome[i]);
		printf("%i� idade: %i \n ",i+1,nome[i]);
		
	}	
	return 0;
}
