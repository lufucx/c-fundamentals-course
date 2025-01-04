#include <stdio.h>
#include <stdlib.h>

int main (void) {
    int array1[3][2];
    int array2[2][3];
    int arrayMulti[3][3] = {0};

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            printf("array1[%d][%d]: ", i, j);
            scanf("%d", &array1[i][j]);
        } 
    }

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("array2[%d][%d]: ", i, j);
            scanf("%d", &array2[i][j]);
        }
    }

    for (int i = 0; i < 3; i++) {         
        for (int j = 0; j < 3; j++) {     
            for (int k = 0; k < 2; k++) { 
                arrayMulti[i][j] += array1[i][k] * array2[k][j];
            }
        }
    }

    printf("\nA x B = \n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%03d ", arrayMulti[i][j]);
        }
        printf("\n");
    }



    return 0;
}