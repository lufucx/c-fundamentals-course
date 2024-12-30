#include <stdio.h>
#include <stdlib.h>

int main (void) {
    int array1[5];
    int arrayCopia[5];
    int numeroCopiado;

    for (int i = 0; i < 5; i++) {
        printf("array[%d]: ", i);
        scanf("%d", &array1[i]);
    }

    printf("Copiar maiores que: ");
    scanf("%d", &numeroCopiado);

    for (int i = 0; i < 5; i++){
        if(numeroCopiado < array1[i]) {
            arrayCopia[i] = array1[i];
            printf("ArrayCopia[%d] = %d\n", i ,arrayCopia[i]);
        } 
    }

    return 0;
}