#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(void)
{
    float a, b, c;

    printf("a: ");
    scanf("%f", &a);

    printf("b: ");
    scanf("%f", &b);

    printf("c: ");
    scanf("%f", &c);

    if ((a - b < c && c < a + b && a - b > -c) &&
        (a - c < b && b < a + c && a - c > -b) &&
        (b - c < a && a < b + c && b - c > -a)) {

        if (a == b && b == c) {
            printf("Triangulo EQUILATERO\n");
        } else if (a == b || a == c || b == c) {
            printf("Triangulo ISOSCELES\n");
        } else {
            printf("Triangulo ESCALENO\n");
        }
    } else {
        printf("Os valores fornecidos nao formam um triangulo.\n");
    }

    return 0;
}