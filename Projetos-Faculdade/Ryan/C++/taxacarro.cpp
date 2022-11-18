#include <stdio.h>
#include <locale.h>

int main (){
	
	int ano;
	float valor;
	float total;
	
	printf("Digite o ano: \n");
	scanf("%d" , &ano);
	printf("Digite o valor do carro: \n");
	scanf("%f" , &valor);
	
	if (ano <= 1990){
	
	total = (valor * 0.01);

 }
 else {
 	total = (valor * 0.015);
 }
 
 printf("%.f" , total);
} 