#include <stdio.h>

int main(){

int numero1;
int numero2;
int i; 

printf("Digite o primeiro valor: \n");
scanf("%i", &numero1);

printf("Digite o segundo valor: \n");
scanf("%i", &numero2);

 if (numero1 == numero2){
  	 printf("Os valores informados sao iguais: \n");
   
}
else {
  
  if (numero1 < numero2) {
    
	printf("O primeiro valor e menor que o segundo: \n");
   
    for(i=numero1; i <= numero2; i++){
    	printf("%i \n",i);
}
} 
  else {
    printf("O segundo valor e menor que o primeiro: \n");
    
	for(i=numero1; i>= numero2 ;i--){
    
		printf("%i \n", i);
}
}
}
}
