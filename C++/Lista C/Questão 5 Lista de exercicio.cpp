//Escreva um programa que imprime a tabela ASCII (c�digo decimal, c�digo hexa, caractere)para os c�digos de 0 a 127
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int numero;
    
    scanf("%d", &numero);

    
    printf("IMPRIMINDO A TABELA ASCII: \n");
    
	for(numero=1; numero<127; numero++)
    
	printf("Decimal: %i   Octal: %o   Hexa: %x   Caractere: %c \n",numero, numero, numero, numero);
	
	
	printf("\n\t\tFIM DA TABELA.\n\n");

}
