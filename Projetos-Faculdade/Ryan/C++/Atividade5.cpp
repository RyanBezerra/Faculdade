#include <stdio.h>
#include <locale.h>

int main (){
	// Declaração de variaveis
	float R;
	float A;
	// Declaração da variavel R com request para usuario
	printf("Digite o raio: \n");
	scanf("%f", &R);
	// Calculo da area do raio, atribuindo a tal para a variavel A
	A = 3.14159 * (R * R);
	// Resposta visual
	printf("%f", A);
	
}