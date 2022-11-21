#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

char n;
int l, c, l1, c1, jog, vit, jogs, esc, v;
int vit1 = 0;
int vit2 = 0;
char jogo[3][3];
int escolha;

void menu(){
	printf("1 - Jogar\n");
	printf("2 - Ver Ranking Geral\n");
	printf("3 - Créditos\n");
	printf("4 - Sair\n");
	printf("Digite o número da sua escolha:\n");
	scanf("%d" , &escolha);
	if (escolha == 1){
		system("cls");
		printf("1 - Jogador vs Computador\n");
		printf("2 - Jogador vs Jogador\n");
		printf("Digite o número da sua escolha:\n");
		scanf("%d" , &v);
		system("cls");
	}if (escolha == 2){
	printf("Ranking da partida passada:\n");
	printf("\n");
	printf("O jogador 1 ganhou %d vezes\n", vit1);
    printf("O jogador 2 ganhou %d vezes\n", vit2);
    printf("\n");
    printf("O jogador ganhou %d vezes\n", vit1);
    printf("O computador ganhou %d vezes\n", vit2);
    printf("\n");
    system("pause");
	}if (escolha == 3){
		printf("Ryan do Nascimento Bezerra\n");
		printf("Matheus Farias\n");
		system("pause");
	}if (escolha == 4){
		system("pause");
	}
}
void rank2(){
	
    FILE *p;
    char str[80] = "arquivo";
	char f;

    if (!(p = fopen(str,"r+"))){
        printf("Erro! Impossivel abrir o arquivo ranking\n");
        exit(1);
    }
    if (vit1 > vit2){
    	printf("\nO jogador 1 esta liderando o rank de vitorias\n");
	}if (vit1 < vit2){
		printf("\nO jogador 2 esta liderando o rank de vitorias\n");
	}if (vit1 == vit2){
		printf("Empate no rank\n");
	}
    fprintf(p,"O jogador 1 ganhou %d vezes\n", vit1);
    fprintf(p,"O jogador 2 ganhou %d vezes\n", vit2);
    fclose(p);

    p = fopen(str,"r+");
    while (!feof(p)){
        fscanf(p,"%c",&f);
        printf("%c",f);
    }
    fclose(p);

}
void rank(){
	
    FILE *p;
    char str[80] = "arquivo";
	char f;

    if (!(p = fopen(str,"r+"))){
        printf("Erro! Impossivel abrir o arquivo ranking\n");
        exit(1);
    }
    if (vit1 > vit2){
    	printf("\nO jogador esta liderando o rank de vitorias\n");
	}if (vit1 < vit2){
		printf("\nO computador esta liderando o rank de vitorias :O\n");
	}if (vit1 == vit2){
		printf("\nEmpate no rank\n");
	}
    fprintf(p,"O jogador ganhou %d vezes\n", vit1);
    fprintf(p,"O computador ganhou %d vezes\n", vit2);
    fclose(p);

    p = fopen(str,"r+");
    while (!feof(p)){
        fscanf(p,"%c",&f);
        printf("%c",f);
    }
    fclose(p);

}
void final2(){
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
}
void vitoria2(){
	if(jogo[0][0] == 'O' && jogo[0][1] == 'O' && jogo[0][2] == 'O' ||
               jogo[1][0] == 'O' && jogo[1][1] == 'O' && jogo[1][2] == 'O' ||
               jogo[2][0] == 'O' && jogo[2][1] == 'O' && jogo[2][2] == 'O'){
                printf("\nO jogador 1 venceu\n");
                vit1++;
                vit = 1;
            }

            if(jogo[0][0] == 'X' && jogo[0][1] == 'X' && jogo[0][2] == 'X' ||
               jogo[1][0] == 'X' && jogo[1][1] == 'X' && jogo[1][2] == 'X' ||
               jogo[2][0] == 'X' && jogo[2][1] == 'X' && jogo[2][2] == 'X'){
                printf("\nO jogador 2 venceu\n");
                vit2++;
                vit = 1;
            }

            if(jogo[0][0] == 'O' && jogo[1][0] == 'O' && jogo[2][0] == 'O' ||
               jogo[0][1] == 'O' && jogo[1][1] == 'O' && jogo[2][1] == 'O' ||
               jogo[0][2] == 'O' && jogo[1][2] == 'O' && jogo[2][2] == 'O'){
                printf("\nO jogador 1 venceu\n");
                vit1++;
                vit = 1;
            }

            if(jogo[0][0] == 'X' && jogo[1][0] == 'X' && jogo[2][0] == 'X' ||
               jogo[0][1] == 'X' && jogo[1][1] == 'X' && jogo[2][1] == 'X' ||
               jogo[0][2] == 'X' && jogo[1][2] == 'X' && jogo[2][2] == 'X'){
                printf("\nO jogador 2 venceu\n");
                vit2++;
                vit = 1;
            }

            if(jogo[0][0] == 'O' && jogo[1][1] == 'O' && jogo[2][2] == 'O'){
                printf("\nO jogador 1 venceu\n");
                vit1++;
                vit = 1;
            }

            if(jogo[0][0] == 'X' && jogo[1][1] == 'X' && jogo[2][2] == 'X'){
                printf("\nO jogador 2 venceu\n");
                vit2++;
                vit = 1;
            }

            if(jogo[0][2] == 'O' && jogo[1][1] == 'O' && jogo[2][0] == 'O'){
                printf("\nO jogador 1 venceu\n");
                vit1++;
                vit = 1;
            }

            if(jogo[0][2] == 'X' && jogo[1][1] == 'X' && jogo[2][0] == 'X'){
                printf("O jogador 2 venceu\n");
                vit2++;
                vit = 1;
            }
}
void jogada2(){
	if(jog == 1){
                jogo[l1][c1] = 'O';
                jog++;
            }
            else{
                jogo[l1][c1] = 'X';
                jog = 1;
            }
            jogs++;
}
void interacao2(){
	printf("\n        Jogador 1 = O\n        Jogador 2 = X\n");
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
}
void final (){
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
}
void vitorias (){
	if(jogo[0][0] == 'O' && jogo[0][1] == 'O' && jogo[0][2] == 'O' ||
               jogo[1][0] == 'O' && jogo[1][1] == 'O' && jogo[1][2] == 'O' ||
               jogo[2][0] == 'O' && jogo[2][1] == 'O' && jogo[2][2] == 'O'){
                printf("\nO jogador venceu\n");
                vit1++;
                vit = 1;
            }

            if(jogo[0][0] == 'X' && jogo[0][1] == 'X' && jogo[0][2] == 'X' ||
               jogo[1][0] == 'X' && jogo[1][1] == 'X' && jogo[1][2] == 'X' ||
               jogo[2][0] == 'X' && jogo[2][1] == 'X' && jogo[2][2] == 'X'){
                printf("\nO jogador IA venceu\n");
                vit2++;
                vit = 1;
            }

            if(jogo[0][0] == 'O' && jogo[1][0] == 'O' && jogo[2][0] == 'O' ||
               jogo[0][1] == 'O' && jogo[1][1] == 'O' && jogo[2][1] == 'O' ||
               jogo[0][2] == 'O' && jogo[1][2] == 'O' && jogo[2][2] == 'O'){
                printf("\nO jogador venceu\n");
                vit1++;
                vit = 1;
            }

            if(jogo[0][0] == 'X' && jogo[1][0] == 'X' && jogo[2][0] == 'X' ||
               jogo[0][1] == 'X' && jogo[1][1] == 'X' && jogo[2][1] == 'X' ||
               jogo[0][2] == 'X' && jogo[1][2] == 'X' && jogo[2][2] == 'X'){
                printf("\nO jogador AI venceu\n");
                vit2++;
                vit = 1;
            }

            if(jogo[0][0] == 'O' && jogo[1][1] == 'O' && jogo[2][2] == 'O'){
                printf("\nO jogador venceu\n");
                vit1++;
                vit = 1;
            }

            if(jogo[0][0] == 'X' && jogo[1][1] == 'X' && jogo[2][2] == 'X'){
                printf("\nO jogador AI venceu\n");
                vit2++;
                vit = 1;
            }

            if(jogo[0][2] == 'O' && jogo[1][1] == 'O' && jogo[2][0] == 'O'){
                printf("\nO jogador venceu\n");
                vit1++;
                vit = 1;
            }

            if(jogo[0][2] == 'X' && jogo[1][1] == 'X' && jogo[2][0] == 'X'){
                printf("O jogador AI venceu\n");
                vit2++;
                vit = 1;
            }
}
void jogada (){
	
	if(jog == 1){
                jogo[l1][c1] = 'O';
                jog++;
            }
            else{
                jogo[l1][c1] = 'X';
                jog = 1;
            }
            jogs++;
}
void interacao (){
	if(jog == 1){
                printf("\n        Jogador = O \n        Jogador IA = X \n");
                printf("\nJogador - Digite a horizontal (letras) que deseja jogar: ");
                scanf("                               %c", &n);
                if(n == 'a'){
                	c1 = 0;
				}else if (n == 'b'){
					c1 = 1;
				}else if (n == 'c'){
					c1 = 2;
				}
                printf("\nJogador - Digite a vertical (numeros) que deseja jogar: ");
                scanf("%d", &l1);
            }else{
            	do{
            	l1 = rand() % 3;
            	c1 = rand() % 3;
				}while(jogo[l1][c1] != ' ');
			}
}
void propriedade (){
	
	for(l = 0; l < 3; l++){
            for(c = 0; c < 3; c++){
                jogo[l][c] = ' ';
            }
        }
}
void visual (){
	
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
}

int main(){
	setlocale(LC_ALL, "Portuguese");
	menu();
	if(v == 1){
		
	jog = 1;
	jogs = 0;
	
    do{
    	
    	propriedade();
    	
        do{
        	printf("\n");
        	printf("        Jogo da velha\n");
            visual();
            
            do{
            	
            	interacao();
            	
            }while(l1 < 0 || l1 > 2 || c1 < 0 || c1 > 2 || jogo[l1][c1] != ' ' );
            
            		jogada();
            		
           				vitorias();
           				
        }while(vit == 0 && jogs < 9);
        
        					final();
        					
        jog = 1;
        rank();
        printf("\nDigite 3 para jogar novamente: \n");
        scanf("%d", &esc);
        vit = 0;
        jogs = 0;
    }while(esc == 3);
}
else{

jog = 1;
vit = 0;
jogs = 0;

    do{

        propriedade();

        do{
        	printf("\n");
        	printf("        Jogo da velha\n");
            visual();

            do{
                interacao2();
                
            }while(l1 < 0 || l1 > 2 || c1 < 0 || c1 > 2 || jogo[l1][c1] != ' ');

            jogada2();

            vitoria2();
            
        }while(vit == 0 && jogs < 9);

        final2();
        rank2();
        printf("\nDigite 3 para jogar novamente: \n");
        scanf("%d", &esc);
        vit = 0;
        jogs = 0;
    }while(esc == 3);
    return 0;

}
}
