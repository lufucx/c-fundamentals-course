#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int array1[5];
    int arrayInvertido[5];

    for (int i = 0; i < 5; i++) {
        printf("array[%d]: ", i);
        scanf("%d", &array1[i]);
    }

    for (int i = 0; i < 5; i++) {
        arrayInvertido[4 - i] = array1[i];
    }

    for (int i = 0; i < 5; i++) {
        printf("arrayInvertido[%d] = %d\n", i, arrayInvertido[i]);
    }

    return 0;
}
