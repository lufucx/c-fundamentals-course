#include <stdio.h>
#include <stdlib.h>

int main (void) {
    int array1[5];
    int arrayNovo[4];

    for (int i = 0; i < 5; i++) {
        printf("array[%d]: ", i);
        scanf("%d", &array1[i]);
    }

    for (int i = 0; i < 4; i++) {
        arrayNovo[i] = array1[i + 1];
    }

    for (int i = 0; i < 4; i++) {
        printf("arrayNovo[%d] = %d\n", i, arrayNovo[i]);
    }
    
    
}