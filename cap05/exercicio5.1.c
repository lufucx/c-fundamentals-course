#include <stdio.h>
#include <stdlib.h>

int main (void) {
    int arrayMulti[3][2];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            printf("array[%d][%d]: ", i, j);
            scanf("%d", &arrayMulti[i][j]);
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%03d ", arrayMulti[i][j]);
        }
        printf("\n");
    }

    return 0;
}