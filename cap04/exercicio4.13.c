#include <stdio.h>
#include <stdlib.h>

int main (void) {
    int array1[10];
    int posicaoRemovida;

    for (int i = 0; i < 10; i++) {
        printf("array[%d]: ", i);
        scanf("%d", &array1[i]);

    }

    do {
        printf("Posicao a ser removida (0 a 9): ");
        scanf("%d", &posicaoRemovida);
        if (posicaoRemovida < 0 || posicaoRemovida >= 10) {
            printf("Posicao invalida! Forneca novamente.\n");
        }
    } while (posicaoRemovida < 0 || posicaoRemovida >= 10);

    for (int i = posicaoRemovida; i < 9; i++) {
        array1[i] = array1[i + 1];
    }

    for (int i = 0; i < 9; i++) {
        printf("array[%d] = %d\n", i, array1[i]);
    }

    return 0;
}