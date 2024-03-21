#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //Bibliotecas
#include<string.h>

#define TAM 5

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
		printf("Digite seu Nome: ");
		scanf("%s",&nome[i]);
		printf("Digite sua Idade: ");
		scanf("%i",&idade[i]);
	}return 0;
}
