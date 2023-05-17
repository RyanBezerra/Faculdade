#include <stdio.h>

int main (){
	// sequencia = 0, 1, 1, 2, 3, 5, 8, 13;
	int escolha;
	printf ("0 1 1 2 3 5 8 13 \n");
	scanf("%d" , &escolha);
	
	if (escolha == 0){
		printf("Ha 7 termos a frente \n");
		printf("A soma dos termos a frente de 0 e igual 33 \n");
		printf("A soma dos termos atras de 0 e igual 0 \n");
		printf("A subtracao dos termos a frente de 0 e igual -31 \n");
		printf("1 1 2 3 5 8 13 --> \n");
		printf(" <-- Nulo \n");
	}if(escolha == 1){
		printf("Ha 5 termos a frente \n");
		printf("A soma dos termos a frente de 1 e igual 31 \n");
		printf("A soma dos termos atras de 1 e igual 1 \n");
		printf("A subtracao dos termos a frente de 1 e igual -27 \n");
		printf("2 3 5 8 13 --> \n");
		printf(" <-- 0 \n");
	}if (escolha == 2){
		printf("Ha 4 termos a frente \n");
		printf("A soma dos termos a frente de 2 e igual 29 \n");
		printf("A soma dos termos atras de 2 e igual 2 \n");
		printf("A subtracao dos termos a frente de 2 e igual -23 \n");
		printf("3 5 8 13 --> \n");
		printf(" <-- 0 1 1 \n");
	}if (escolha == 3){
		printf("Ha 3 termos a frente \n");
		printf("A soma dos termos a frente de 3 e igual 26 \n");
		printf("A soma dos termos atras de 3 e igual 4 \n");
		printf("A subtracao dos termos a frente de 3 e igual -16 \n");
		printf("5 8 13 --> \n");
		printf(" <-- 0 1 1 2 \n");
	}if (escolha == 5){
		printf("Ha 2 termos a frente \n");
		printf("A soma dos termos a frente de 5 e igual 21 \n");
		printf("A soma dos termos atras de 5 e igual 7 \n");
		printf("A subtracao dos termos a frente de 5 e igual -5 \n");
		printf("8 13 --> \n");
		printf(" <-- 0 1 1 2 3 \n");
	}if (escolha == 8){
		printf("Ha 1 termos a frente \n");
		printf("A soma dos termos a frente de 8 e igual 13 \n");
		printf("A soma dos termos atras de 8 e igual 12 \n");
		printf("A subtracao dos termos a frente de 8 e impossivel \n");
		printf("13 --> \n");
		printf(" <-- 0 1 1 2 3 5 \n");
	}if (escolha == 13){
		printf("Ha 0 termos a frente \n");
		printf("A soma dos termos a frente de 13 e igual 0 \n");
		printf("A soma dos termos atras de 13 e igual 20 \n");
		printf("A subtracao dos termos a frente de 13 e impossivel \n");
		printf("Nulo --> \n");
		printf(" <-- 0 1 1 2 3 5 8 \n");
	}


}