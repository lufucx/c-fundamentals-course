#include <stdio.h>
#include <stdlib.h>

int main (void) {
    float diagonalMaior;
    float diagonalMenor;

    float area;

    printf("Valor da diagonal maior: ");
    scanf("%f", &diagonalMaior);

    printf("Valor da diagonal menor: ");
    scanf("%f", &diagonalMenor);

    area = ((diagonalMaior * diagonalMenor) / 2);

    printf("Area = %.2f\n", area);

    return 0;
}