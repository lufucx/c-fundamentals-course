#include <stdio.h>
#include <stdlib.h>

int main (void) {
    int array1[5];
    int array2[5];
    int ArraySoma[5];

    for (int i = 0; i < 5; i++) {
        printf("array1[%d]: ", i);
        scanf("%d", &array1[i]);
    }

    for (int i = 0; i < 5; i++) {
        printf("array2[%d]: ", i);
        scanf("%d", &array2[i]);
    }

    for (int i = 0; i < 5; i++) {
        ArraySoma[i] = array1[i] + array2[i];
        printf("ArraySoma[%d]: %d\n", i, ArraySoma[i]);
    }
}