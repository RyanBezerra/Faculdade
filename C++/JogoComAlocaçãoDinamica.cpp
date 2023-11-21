#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void preencherMatriz(int *matriz, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        matriz[i] = rand() % 101;
    }
}

int escolherNumero(int *matriz, int tamanho) {
    int indice = rand() % tamanho;
    return matriz[indice];
}

int main() {
    srand(time(NULL));

    int nivel;
    int tamanho;

    printf("Bem-vindo ao jogo!\n");
    printf("\nEscolha o nivel de dificuldade:\n");
    printf("1 - Facil (9 numeros)\n");
    printf("2 - Medio (25 numeros)\n");
    printf("3 - Dificil (100 numeros)\n");
    scanf("%d", &nivel);

    switch (nivel) {
        case 1:
            tamanho = 9;
            break;
        case 2:
            tamanho = 25;
            break;
        case 3:
            tamanho = 100;
            break;
        default:
            printf("Opcao invalida. Saindo do jogo.\n");
            return 1;
    }

    int *matriz = (int *)malloc(tamanho * sizeof(int));
    if (matriz == NULL) {
        printf("Erro ao alocar memoria para a matriz. Saindo do jogo.\n");
        return 1;
    }

    preencherMatriz(matriz, tamanho);

    printf("\nA matriz foi preenchida com numeros aleatorios.\n");
    
    int numeroEscolhido = escolherNumero(matriz, tamanho);
    
    printf("\nAqui estao os numeros da matriz:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", matriz[i]);
    }
    printf("\n");

    printf("Qual numero voce acha que foi escolhido? ");
    int palpite;
    scanf("%d", &palpite);

    if (palpite == numeroEscolhido) {
        printf("\nParabens! Voce acertou o numero %d!\n", numeroEscolhido);
    } else {
        printf("\nVoce errou. O numero escolhido foi %d.\n", numeroEscolhido);
    }

    free(matriz);

    return 0;
}
