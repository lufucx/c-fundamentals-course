#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (void) {
    float x1;

    printf("Numero: ");
    scanf("%f", &x1);

    printf("Valor absoluto: %.2f", fabs(x1));

    return 0;
    
}