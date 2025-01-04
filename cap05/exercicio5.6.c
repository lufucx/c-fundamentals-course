#include <stdio.h>
#include <stdlib.h>

int main (void) {
    int array[2][3];
    int arrayMt[3][2];

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("array[%d][%d]: ", i, j);
            scanf("%d", &array[i][j]);
        }
    }

    printf("\nM:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%03d ", array[i][j]);
        }
        printf("\n");
    }


    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            arrayMt[j][i] = array[i][j];
        }
    }

    printf("\nMt:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%03d ", arrayMt[i][j]);
        }
        printf("\n");
    }
    return 0;
}