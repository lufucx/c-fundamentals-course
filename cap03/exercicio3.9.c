#include <stdio.h>
#include <stdlib.h>


int main (void) {
    int i, x, resultado;

    printf("Tabuada do Numero: ");
    scanf("%d", &i);


    for(x = 0; x <= 10; x++){
        resultado = i * x;
        printf("%d x %d = %d\n", i, x, resultado);
    }

    return 0;
}