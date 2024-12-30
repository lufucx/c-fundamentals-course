#include <stdio.h>
#include <stdlib.h>

int main (void) {
    int array1[5];
    int numerosPares[5];
    int numerosImpares[5];
    int contPares = 0;
    int contImpares = 0;

    for (int i = 0; i < 5; i++) {
        printf("array[%d]: ", i);
        scanf("%d", &array1[i]);
    }

    for (int i = 0; i < 5; i++) {
        if (array1[i] % 2 == 0) {
            numerosPares[contPares] = array1[i];
            contPares++;
        } else {
            numerosImpares[contImpares] = array1[i];
            contImpares++;
        }
    }
    
    printf("\nNumeros pares: ");
    for (int i = 0; i < contPares; i++) {
        printf("%d ", numerosPares[i]);
    }

    printf("\nNumeros impares: ");
    for (int i = 0; i < contImpares; i++) {
        printf("%d ", numerosImpares[i]);
    }

    return 0;
}