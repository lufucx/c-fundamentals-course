#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (void) {
    float x1;

    printf("Numero: ");
    scanf("%f", &x1);

    printf("Maior inteiro mais proximo: = %.2f\n", ceil(+x1));
    printf("Menor inteiro mais proximo: = %.2f", floor(x1));

    return 0;
}