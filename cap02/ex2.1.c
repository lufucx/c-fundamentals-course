#include <stdio.h>
#include <stdlib.h>

int main (void){
    int numero;

    printf("Digite o numero: ");
    scanf("%d", &numero);

    if ( numero % 2 == 0 ) {
        printf("O numero %d é par", numero);

    } else {
        printf("O numero %d é impar", numero);
    }

    return 0;

}