#include <stdio.h>
#include <stdlib.h>

int main(){
	// Declaração de variaveis 
	char n;
    int l, c, l1, c1, jog, vit, jogs, esc;
    char jogo[3][3];
	// Criando constancia e loop (se necessario) do jogo
    do{
    // Declaração de variaveis pré-definidas
        jog = 1;
        vit = 0;
        jogs = 0;
    // Configurando atributo caixa vazia do visual jogo da velha
        for(l = 0; l < 3; l++){
            for(c = 0; c < 3; c++){
                jogo[l][c] = ' ';
            }
        }
    // Desenhando o jogo da velha
        do{
            printf("\n\n\t a   b   c\n\n");
            for(l = 0; l < 3; l++){
                for(c = 0; c < 3; c++){
                    if(c == 0)
                        printf("\t");
                    printf(" %c ", jogo[l][c]);
                    if(c < 2)
                        printf("|");
                    if(c == 2)
                        printf("  %d", l);
                }
                if(l < 2)
                    printf("\n\t-----------");
                printf("\n");
            }
    // Interação jogador 
            do{
                printf("\n\        Jogador 1 = O\n        Jogador 2 = X\n");
                printf("\nJogador %d - Digite a horizontal (letras) que deseja jogar: ", jog);
                scanf("         %c", &n);
                if(n == 'a'){
                	c1 = 0;
				}else if (n == 'b'){
					c1 = 1;
				}else if (n == 'c'){
					c1 = 2;
				}
                printf("\nJogador %d - Digite a vertical (numeros) que deseja jogar: ", jog);
                scanf("%d", &l1);
            }while(l1 < 0 || l1 > 2 || c1 < 0 || c1 > 2 || jogo[l1][c1] != ' ');
	// Adicionando jogada ao jogo
            if(jog == 1){
                jogo[l1][c1] = 'O';
                jog++;
            }
            else{
                jogo[l1][c1] = 'X';
                jog = 1;
            }
            jogs++;
    // Configurando vitorias
            if(jogo[0][0] == 'O' && jogo[0][1] == 'O' && jogo[0][2] == 'O' ||
               jogo[1][0] == 'O' && jogo[1][1] == 'O' && jogo[1][2] == 'O' ||
               jogo[2][0] == 'O' && jogo[2][1] == 'O' && jogo[2][2] == 'O'){
                printf("\nO jogador 1 venceu\n");
                vit = 1;
            }

            if(jogo[0][0] == 'X' && jogo[0][1] == 'X' && jogo[0][2] == 'X' ||
               jogo[1][0] == 'X' && jogo[1][1] == 'X' && jogo[1][2] == 'X' ||
               jogo[2][0] == 'X' && jogo[2][1] == 'X' && jogo[2][2] == 'X'){
                printf("\nO jogador 2 venceu\n");
                vit = 1;
            }

            if(jogo[0][0] == 'O' && jogo[1][0] == 'O' && jogo[2][0] == 'O' ||
               jogo[0][1] == 'O' && jogo[1][1] == 'O' && jogo[2][1] == 'O' ||
               jogo[0][2] == 'O' && jogo[1][2] == 'O' && jogo[2][2] == 'O'){
                printf("\nO jogador 1 venceu\n");
                vit = 1;
            }

            if(jogo[0][0] == 'X' && jogo[1][0] == 'X' && jogo[2][0] == 'X' ||
               jogo[0][1] == 'X' && jogo[1][1] == 'X' && jogo[2][1] == 'X' ||
               jogo[0][2] == 'X' && jogo[1][2] == 'X' && jogo[2][2] == 'X'){
                printf("\nO jogador 2 venceu\n");
                vit = 1;
            }

            if(jogo[0][0] == 'O' && jogo[1][1] == 'O' && jogo[2][2] == 'O'){
                printf("\nO jogador 1 venceu\n");
                vit = 1;
            }

            if(jogo[0][0] == 'X' && jogo[1][1] == 'X' && jogo[2][2] == 'X'){
                printf("\nO jogador 2 venceu\n");
                vit = 1;
            }

            if(jogo[0][2] == 'O' && jogo[1][1] == 'O' && jogo[2][0] == 'O'){
                printf("\nO jogador 1 venceu\n");
                vit = 1;
            }

            if(jogo[0][2] == 'X' && jogo[1][1] == 'X' && jogo[2][0] == 'X'){
                printf("\O jogador 2 venceu\n");
                vit = 1;
            }
        }while(vit == 0 && jogs < 9);
    // Jogo final com resultado
        printf("\n\n\t a   b   c\n\n");
        for(l = 0; l < 3; l++){
            for(c = 0; c < 3; c++){
                if(c == 0)
                    printf("\t");
                printf(" %c ", jogo[l][c]);
                if(c < 2)
                    printf("|");
                if(c == 2)
                    printf("  %d", l);
            }
            if(l < 2)
                printf("\n\t-----------");
            printf("\n");
        }

        if(vit == 0)
            printf("\nFinalizando sem vencedores\n");
    // Renovando loop se necessario
        printf("\nDigite 3 para jogar novamente: \n");
        scanf("%d", &esc);
    }while(esc == 3);

    return 0;
}