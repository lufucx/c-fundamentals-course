#include <stdio.h>
#include <stdlib.h>

int main (void) {
    int array[10];
    int tamanho = 10;

    for (int i = 0; i < tamanho; i++) {
        printf("array[%d]: ", i);
        scanf("%d", &array[i]);
    }

    for (int i = 0; i < tamanho; i++) {
        if (array[i] % 2 == 0) {
            for (int j = i; j < tamanho; j++) {
                array[j] = array[j + 1];
            }
            tamanho--;
            i--;
        }
    }

    for (int i = 0; i < tamanho; i++) {
        printf("array[%d] = %d\n", i , array[i]);
    }

    return 0;
}