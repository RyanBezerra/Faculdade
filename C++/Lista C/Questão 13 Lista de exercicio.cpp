//Dado um n�mero positivo, crie um programa que escreva todos os n�meros �mparesmenores e/ou iguais a esse n�mero e maiores ou igual a um.
#include <stdio.h>
int main () {
int i, numero;

printf("Digite um numero:");
scanf("%d", &numero);

for(i=0; i<numero; i++) {
    i += 1;
    printf("%d \t", i);
}
    return 0;
}
