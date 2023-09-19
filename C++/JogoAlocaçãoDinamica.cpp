#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL)); // Inicializa o gerador de números aleatórios

    int nivel, tamanho, i;
    
    printf("Bem-vindo ao jogo dos numeros!\n");
    printf("Escolha o nivel de dificuldade:\n");
    printf("1 - Facil (3 numeros)\n");
    printf("2 - Medio (5 numeros)\n");
    printf("3 - Dificil (10 numeros)\n");
    scanf("%d", &nivel);

    switch (nivel) {
        case 1:
            tamanho = 3;
            break;
        case 2:
            tamanho = 5;
            break;
        case 3:
            tamanho = 10;
            break;
        default:
            printf("Nivel invalido! Saindo do jogo.\n");
            return 1;
    }

    int *vetor = (int *)malloc(tamanho * sizeof(int));
    if (vetor == NULL) {
        printf("Erro na alocacao de memoria.\n");
        return 1;
    }

    printf("Numeros gerados aleatoriamente:\n");
    for (i = 0; i < tamanho; i++) {
        vetor[i] = rand() % 100 + 1; // Gera numeros entre 1 e 100
        printf("%d ", vetor[i]);
    }
    printf("\n");

    int palpite;
    printf("Adivinhe qual numero sera escolhido: \n");
    scanf("%d", &palpite);

    int indice = rand() % tamanho; // Escolhe um indice aleatorio do vetor
    printf("O numero escolhido foi: %d\n", vetor[indice]);

    if (palpite == vetor[indice]) {
        printf("Parabens! Voce ganhou!\n");
    } else {
        printf("Voce perdeu. Tente novamente!\n");
    }

    free(vetor); // Libera a memoria alocada para o vetor
    return 0;
}
