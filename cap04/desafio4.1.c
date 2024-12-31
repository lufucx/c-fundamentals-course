#include <stdio.h>
#include <stdlib.h>

int main (void) {
    int array1[10];
    int numerosPares[10];
    int numerosImpares[10];
    int contPares = 0;
    int contImpares = 0;

    for (int i = 0; i < 10; i++) {
        printf("array[%d]: ", i);
        scanf("%d", &array1[i]);
    }

    for (int i = 0; i < 10; i++) {
        if (array1[i] % 2 == 0) {
            numerosPares[contPares] = array1[i];
            contPares++;
        } else {
            numerosImpares[contImpares] = array1[i];
            contImpares++;
        }

    }
}