#include <stdio.h>

int main () {

    int n[10], i, soma = 0, sub = 0;

    for(i = 0; i < 10; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &n[i]);

        if(i % 2 != 0) {
            sub -= n[i];
        } else {
            soma += n[i];
        }
    }
    printf("\n");
    printf("Soma dos numeros pares: %d\n", soma);
    printf("\n");
    printf("Subtracao dos numeros impares: %d\n", sub);

}
