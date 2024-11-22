#include <stdio.h>
#include <stdlib.h>

int main (void) {
    int x;
    int y;


    printf("Entre com o primeiro numero: ");
    scanf("%d", &x);

    printf("Entre com o segundo numero: ");
    scanf("%d", &y);

    if (x > y) {
        printf("Ordem crescente: %d <= %d", y, x);
    } else {
        printf("Ordem crescente: %d <= %d", x, y);
    }

    return 0;


}