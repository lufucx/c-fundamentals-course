#include <stdlib.h>
#include <stdio.h>

int main (void) {
    int idades[5];
    int i = 0;

    for(i = 0; i < 5; i++) {
        printf("Digite uma idade: ");
        scanf("%d", &idades[i]);
    }

    for (i = 0; i < 5; i++){
        printf("Idades: %d\n", idades[i]);
    }

    return 0;
}