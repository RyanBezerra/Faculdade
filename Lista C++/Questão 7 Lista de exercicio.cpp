#include <stdio.h>
#include <stdlib.h>

int main(){

float nota1,nota2,media;
printf("Digite 50 na primeira nota, para terminar a execucao do script \n");
printf("\n");
    do{

        do{
            printf("Primeira nota: ");
            scanf("%f",&nota1);

            if(nota1 == 50){
            system("pause");
            }

            printf("Segunda nota: ");
            scanf("%f",&nota2);

            if((nota1 < 0) || (nota1 > 10) || (nota2 < 0) || (nota2 >10)){
                printf("Invalido\n");
            }

        }while((nota1 < 0) || (nota1 > 10) || (nota2 < 0) || (nota2 >10));

        if(nota1 == 50){
        system("pause");
        }

        media = (nota1 + nota2) / 2;
        printf("Media = %.2f\n", media);

    }while(nota1 != 50);
 
return(0);
}
