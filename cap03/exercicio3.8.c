#include <stdio.h>

int main (void) {

    int i, x;

    printf("Digite um numero menor ou igual a 0: ");
    scanf("%d", &i) ;

    if (i <= 0){
        for(x = 0; x >= i; x--){
            printf("%d ", x);
        }
    } else {
        printf("valor invalido");
    }

    return 0;

}