#include <stdio.h>
#include <stdlib.h>

int main (void) {
    int array[3][3];
    int det;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("array[%d][%d]: ", i, j);
            scanf("%d", &array[i][j]);
        }
    }

    det = array[0][0] * array[1][1] * array[2][2] + array[0][1] * array[1][2] * array[2][0] + array[0][2] * array[1][0] * array[2][1] - (array[0][2] * array[1][1] * array[2][0] + array[0][0] * array[1][2] * array[2][1] + array[0][1] * array[1][0] * array[2][2]);

    printf("Determinante: %d", det);

    return 0;
}