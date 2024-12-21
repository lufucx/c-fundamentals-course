#include <stdio.h>
#include <stdlib.h>

int main (void) {

    int i;

    for(i = 0; i < 5; i++) {
        for (int j = 0; j <= i; j++){
            printf("*");

        }
        printf("\n");
    }
}