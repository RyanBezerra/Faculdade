#include <stdio.h>
#include <stdlib.h>

int main(){


    int l, c, l1, c1, jog, vit, jogs, esc;
    char jogo[3][3];

    do{
        jog = 1;
        vit = 0;
        jogs = 0;

        for(l = 0; l < 3; l++){
            for(c = 0; c < 3; c++){
                jogo[l][c] = ' ';
            }
        }

        do{
            printf("\n\n\t 0   1   2\n\n");
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

            do{
                printf("\n\jog 1 = 0\njog 2 = X\n");
                printf("\njog %d: Digite a l1 e a c1 que deseja jogar: ", jog);
                scanf("%d%d", &l1, &c1);
            }while(l1 < 0 || l1 > 2 || c1 < 0 || c1 > 2 || jogo[l1][c1] != ' ');


            if(jog == 1){
                jogo[l1][c1] = '0';
                jog++;
            }
            else{
                jogo[l1][c1] = 'X';
                jog = 1;
            }
            jogs++;

            if(jogo[0][0] == '0' && jogo[0][1] == '0' && jogo[0][2] == '0' ||
               jogo[1][0] == '0' && jogo[1][1] == '0' && jogo[1][2] == '0' ||
               jogo[2][0] == '0' && jogo[2][1] == '0' && jogo[2][2] == '0'){
                printf("\nParabens! O jog 1 venceu por l1!\n");
                vit = 1;
            }

            if(jogo[0][0] == 'X' && jogo[0][1] == 'X' && jogo[0][2] == 'X' ||
               jogo[1][0] == 'X' && jogo[1][1] == 'X' && jogo[1][2] == 'X' ||
               jogo[2][0] == 'X' && jogo[2][1] == 'X' && jogo[2][2] == 'X'){
                printf("\nParabens! O jog 2 venceu por l1!\n");
                vit = 1;
            }

            if(jogo[0][0] == '0' && jogo[1][0] == '0' && jogo[2][0] == '0' ||
               jogo[0][1] == '0' && jogo[1][1] == '0' && jogo[2][1] == '0' ||
               jogo[0][2] == '0' && jogo[1][2] == '0' && jogo[2][2] == '0'){
                printf("\nParabens! O jog 1 venceu por c1!\n");
                vit = 1;
            }

            if(jogo[0][0] == 'X' && jogo[1][0] == 'X' && jogo[2][0] == 'X' ||
               jogo[0][1] == 'X' && jogo[1][1] == 'X' && jogo[2][1] == 'X' ||
               jogo[0][2] == 'X' && jogo[1][2] == 'X' && jogo[2][2] == 'X'){
                printf("\nParabens! O jog 2 venceu por c1!\n");
                vit = 1;
            }

            if(jogo[0][0] == '0' && jogo[1][1] == '0' && jogo[2][2] == '0'){
                printf("\nParabens! O jog 1 venceu na diag. principal!\n");
                vit = 1;
            }

            if(jogo[0][0] == 'X' && jogo[1][1] == 'X' && jogo[2][2] == 'X'){
                printf("\nParabens! O jog 2 venceu na diag. principal!\n");
                vit = 1;
            }

            if(jogo[0][2] == '0' && jogo[1][1] == '0' && jogo[2][0] == '0'){
                printf("\nParabens! O jog 1 venceu na diag. secindaria!\n");
                vit = 1;
            }

            if(jogo[0][2] == 'X' && jogo[1][1] == 'X' && jogo[2][0] == 'X'){
                printf("\nParabens! O jog 2 venceu na diag. secundaria!\n");
                vit = 1;
            }
        }while(vit == 0 && jogs < 9);

        printf("\n\n\t 0   1   2\n\n");
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
            printf("\nO jogo finalizou sem gamhador!\n");

        printf("\nDigite 1 para jogar novamente: \n");
        scanf("%d", &esc);
    }while(esc == 1);

    return 0;
}