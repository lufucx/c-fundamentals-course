#include <stdio.h>
#include <stdlib.h>

int main (void) {
    int i, x;

    printf("Forneca um numero maior ou igual a zero: ");
    scanf("%d", &i);


    if(i >= 0) {
        for(x = 0; x <= i; x++) {
            printf("%d ", x);
        }
    } else {
        printf("Valor invalido");
    }

    return 0;
}