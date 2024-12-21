#include <stdio.h>
#include <stdlib.h>

int main (void) {
    float n1;
    float metade;
    float triplo;

    printf("Digite um numero decimal: ");
    scanf("%f", &n1 );

    if (n1 > 20) {
        metade = n1 / 2;
        printf("A metade de %.2f e %.2f", n1, metade);
    } else {
        triplo = n1 * 3;
        printf("O triplo de %.2f e %.2f", n1, triplo);
    }

    return 0;


}