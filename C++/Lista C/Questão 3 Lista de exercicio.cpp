//Escreva um programa que leia um n�mero na base decimal e em seguida imprima essemesmo n�mero nas bases octal e hexadecimal.
#include <stdio.h>

int main(){
	int escolha, valor;
	
	printf("Converter:\n");
	printf("Decimal para Hexadecimal (Digite 1)\n");
	printf("Decimal para Octal (Digite 2)\n");
	printf("Informe sua escolha: ");
	scanf("%d", &escolha);
	
	if(escolha == 1){
		printf("Digite o valor em decimal: \n");
		scanf("%d", &valor);
		printf("O valor %d em hexadecimal e = %x \n", valor, valor);
	}
	else if(escolha == 2){
		printf("Digite o valor em decimal: \n");
		scanf("%d", &valor);
		printf("O valor %d em octal e = %o \n", valor, valor);
	}
	else
	{
		printf("Valor invalido!!\n");
	}
	return 0;
}
