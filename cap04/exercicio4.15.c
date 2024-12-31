#include <stdio.h>
#include <stdlib.h>

int main (void) {
    int array1[5];
    int array2[5];
    int arrayInterseccao[5];
    int tamanhoInterseccao = 0;
    
    printf("Forneca os valores do primeiro array:\n");
    for (int i = 0; i < 5; i++) {
        printf("array1[%d]: ", i);
        scanf("%d", &array1[i]);
    }

    printf("Forneca os valores do segundo array:\n");
    for (int i = 0; i < 5; i++) {
        printf("array2[%d]: ", i);
        scanf("%d", &array2[i]);
    }

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (array1[i] == array2[j]) {
                int jaInserido = 0;

                for (int k = 0; k < tamanhoInterseccao; k++) {
                    if (arrayInterseccao[k] == array1[i]) {
                        jaInserido = 1;
                        break;

                    }
                }

                if (!jaInserido) {
                    arrayInterseccao[tamanhoInterseccao] = array1[i];
                    tamanhoInterseccao++;
                }

            }
        }
    }

    for (int i = 0; i < tamanhoInterseccao; i++) {
        printf("arrayInterseccao[%d] = %d\n", i, arrayInterseccao[i]);
    }
    return 0;
}
