#include <stdio.h>
#include <stdlib.h>     
 
int main (void) {
    int array1[3][4];
    int arrayMulti[3][4];
    int multiply;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            printf("array1[%d][%d]: ", i, j);
            scanf("%d", &array1[i][j]);
        }
    }


    printf("Multiplicar por: ");
    scanf("%d", &multiply);

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            arrayMulti[i][j] = array1[i][j] * multiply;
        }
    }

    printf("\narrayMulti:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%03d ", arrayMulti[i][j]);
        }
        printf("\n");
    }

    return 0;

}