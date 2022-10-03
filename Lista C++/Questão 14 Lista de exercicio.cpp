#include <stdio.h>

int main () {

float temp;

for(temp=45; temp<=75; temp++) {
    printf(" %.0f %c = %.1f %cF \n", temp , 248 , (((temp*9.0)/5.0)+32),248);
    }
}
