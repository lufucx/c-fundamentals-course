#include <stdio.h>
#include <stdlib.h>

int main (void){
    float lado;

    float perimetro;
    float area;

    printf("Valor do lado: ");
    scanf("%f", &lado);

    perimetro = (4 * lado);
    area = (lado * lado);

    printf("Perimetro = %.2f\n", perimetro);
    printf("Area = %.2f\n", area);

    return 0;
}