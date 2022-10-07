//Faça um programa que lê um conjunto de 10 valores inteiros e verifica se algum dosvalores é igual a média dos mesmos.
#include <stdio.h>

int main(){
	int num[10], soma, media, i;
	
	for(i = 1; i <= 10; i++){
		printf("Digite um numero: ");
		scanf("%d", &num[i]);
	}
	for(i = 1; i <= 10; i++){
		soma = soma + num[i];
	}
	
	media = soma / 4;
	
	printf("\n"); 
	printf("Media = %d\n", media); 
	printf("\n"); 
	
	for(i = 1; i <= 10; i++){
		if(num[i] == media){
			printf("A media e igual ao numero %d digitado anteriormente\n", num[i]);
		} 
	}
	return 0;
}
