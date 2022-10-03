#include <stdio.h>

int main () {

    int num[10], i;

    for (i = 0; i < 6; i++) {

        printf("Digite o valor %d: ", i + 1);
        scanf("%d",&num[i]);

    }

     for (i = 5; i >= 0; i--) {
        printf("%d\t", num[i]);
    }

}
