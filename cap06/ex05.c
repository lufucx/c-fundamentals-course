#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (void) {
    float x; 

    printf("Numero: ");
    scanf("%f", &x);

    if (x > 0) {
        printf("Raiz quadrada de %.2f: %.2f", x, sqrt(x));
    } else {
        printf("Nao possui raiz quadrada");
    }

    return 0;
}