#include <stdio.h>

int main()
{
    int i;
    float nota, soma = 0, maior = 0, menor = 10;
    
    for(i=1; i<=10; i++){
        printf("Digite a nota %d: ", i);
        scanf("%f", &nota);

        soma = soma+nota;
        
        if(nota > maior) {
            maior = nota;
        }
        if (nota < menor) {
            menor = nota;
        }
    }
    printf("\n");
    printf("Soma das notas: %.1f \n", soma);
    printf("Media das notas: %.1f \n", soma/10);
    printf("Maior nota: %.1f \n", maior);
    printf("Menor nota: %.1f \n", menor);
    printf("\n");
    printf("Fim do processamento");
    return 0;
}
