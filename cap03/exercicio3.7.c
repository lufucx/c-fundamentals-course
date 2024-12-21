#include <stdio.h>

int main (void) {

    int i, x;

    printf("Digite um numero menor ou igual a 0: ");
    scanf("%d", &i) ;

    if (i <= 0){
        for(x =i; x <= 0; x++){
            printf("%d ", x);
        }
    } else {
        printf("valor invalido");
    }

    return 0;

}