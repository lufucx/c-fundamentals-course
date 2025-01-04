#include <stdio.h>
#include <stdlib.h>

int main (void) {
    int array[5] = {4, 5, 3, 1, 2};

    int menor;
    int temp;

    for (int i = 0; i < 5; i++) {
        menor = i;
        for(int j = i+1; j < 5; j++) {
            if (array[j] < array[menor]) {
                menor = j;
            }
        }

        temp = array[i];
        array[i] = array[menor];
        array[menor] = temp;
    }

    for (int i = 0; i < 5; i++) {
        printf("%d ", array[i]);
    }

    return 0;
}