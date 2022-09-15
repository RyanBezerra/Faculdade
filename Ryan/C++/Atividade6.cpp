#include <stdio.h>

int main (){

    float num [5];
    int a;
    
    for (a=0 ; a<5 ; a++){
	    printf("Digite o numero %d: ", a);
  	    scanf("%f", &num[a]);
    }
    for (a=0 ; a<5 ; a++){
        printf("%.f \n" , num[a]);
    }
    for (a=4; a>=0 ; a--){
    	printf("%.f \n" , num[a]);
	}
}