#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	int i, nota[3],soma;
	float media;
	
	
	for(i=0;i<3;i++){
		printf("Digite a %i� Nota: ",i+1);
		scanf("%d",&nota[i]);
		
		soma+=nota[i];
		
	}	media=soma/i;
		printf("M�dia: %.1f\n",media);
	
	if(media>=7){
		printf("Aprovado!");
		
	}else if(media>=5){
		printf("Recupera��o!");
	}else{
		printf("Reprovado!");
	}
return 0;	
	}

