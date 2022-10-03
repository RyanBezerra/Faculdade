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
