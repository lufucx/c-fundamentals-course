#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (void) {
    float n1, expo, resultado;

    printf("Base: ");
    scanf("%f", &n1);

    printf("Expoente: ");
    scanf("%f", &expo);

    resultado = pow(n1, expo);

    printf("%.2f ˆ %.2f = %.2f", n1, expo, resultado);

    return 0;

}