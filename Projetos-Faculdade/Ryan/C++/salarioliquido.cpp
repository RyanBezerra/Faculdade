#include <stdio.h>
#include <locale.h>

int main (){
	
	float horastrabalho;
	float descontopor;
	float valorhora;
	float descontoinss;
	float liquido;
	float bruto;
	
	printf("Digite o valor ganho por hora: \n");
	scanf("%f", &valorhora);
	printf("Digite a quantidade de horas trabalhadas: \n");
	scanf("%f", &horastrabalho);
	printf("Digite o porcentual do desconto: \n");
	scanf("%f", &descontopor);
	
	bruto =  valorhora * horastrabalho;
	descontoinss = (bruto * descontopor) / 100;
	liquido = bruto - descontoinss;
	
	printf("%.2f", liquido);
} 