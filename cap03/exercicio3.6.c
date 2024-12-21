#include <stdio.h>
#include <stdlib.h>

int main (void) {
    int i, x;

    printf("Forneca um numero maior ou igual: ");
    scanf("%d", &i);

    if(i >= 0) {
        for (x = i; x >= 0; x--){
            printf("%d ", x);
        }
    } else {
        printf("Valor invalido");
    }

    return 0;

}