//O quadrado de um n�mero natural n � dado pela soma dos n primeiros n�meros �mparesconsecutivos. Por exemplo, 12=1, 22=1+3, 32=1+3+5, 42=1+3+5+7, etc. Dado um n�mero n
#include <stdio.h>

int main()
{
    int num , a, impar, soma, quadrado;
    soma=0;
    
    printf("Digite o valor: ");
    scanf("%d",&num);

    a=0;
    impar=-1;
    quadrado= num * num;
    
    printf("%d que resulta da soma de todos esses numeros: ", quadrado);

    do{
        impar=impar+2;
        soma=+impar;
        printf("%d ", impar);
        a++;
	}
    while (a < num);
    return 0;
}
