#include <stdio.h>
#include <stdlib.h>

int main (void) {
    float array[5];
    int arrayAtual = 0;
    float somatorio = 0.0;
    float produtorio = 1;

    for (int i = 0; i < 5; i++){
        printf("array[%d]: ", arrayAtual++);
        scanf("%f", &array[i]);
        somatorio += array[i];
        produtorio *= array[i];
    }

    printf("Somatorio: %.2f\n", somatorio);
    printf("Produtorio: %.2f\n", produtorio);

    return 0;
}
