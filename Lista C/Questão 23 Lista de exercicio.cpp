//Escreva um programa que solicite seis n�meros do tipo inteiro ao usu�rio e os armazeneem um vetor, depois o programa dever� apresentar na tela os n�meros na ordem inversa doqual foram digitados.
#include <stdio.h>

int main () {

    int num[10], i;

    for (i = 0; i < 6; i++) {

        printf("Digite o valor %d: ", i + 1);
        scanf("%d",&num[i]);

    }

     for (i = 5; i >= 0; i--) {
        printf("%d\t", num[i]);
    }

}
