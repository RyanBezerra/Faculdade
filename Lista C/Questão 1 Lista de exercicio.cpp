//Fa�a um programa que solicite 2 n�meros e informe: a soma dos n�meros, o produto do primeiro n�mero pelo quadrado do segundo, o quadrado do primeiro n�mero, 
//a raiz quadradada soma dos quadrados, o seno da diferen�a do primeiro n�mero pelo segundo e O m�dulodo primeiro n�mero.

#include<stdio.h>
	
int main(){

   float num1; 
   float num2; 
   float soma; 
   float quadrado; 
   float produto;

   printf("digite o primeiro valor:");
   scanf("%f", &num1);
   
   printf("digite o segundo valor:");
   scanf("%f", &num2);

   soma = num1 + num2;
   produto = num1 * (num2 * num2);
   quadrado = num1 * num1;

   printf("Somatorio dos valores: %.2f \n", soma);
   
   printf("Produto do primeiro numero com o quadrado do segundo: %.2f \n", produto);
   
   printf("Quadrado do primeiro numero: %.2f\n\n", quadrado);

}
