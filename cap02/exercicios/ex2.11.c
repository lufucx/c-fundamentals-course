#include <stdio.h>
#include <stdlib.h>

int main (void) {
    int alfa, beta, gama;

    printf("alfa: ");
    scanf("%d", &alfa);

    printf("beta: ");
    scanf("%d", &beta);

    printf("gama: ");
    scanf("%d", &gama);

    if (alfa + beta + gama != 180 || alfa <= 0 || beta <= 0 || gama <= 0) {
        printf("As medidas fornecidas dos angulos nao representam um triangulo valido!");
    } else if (alfa == 90 || beta == 90 || gama == 90) {
        printf("Triangulo retangulo");
    } else if (alfa > 90 || beta > 90 || gama > 90) {
        printf("Triangulo obtusangulo");
    } else {
        printf("Triangulo acutangulo");
    }

    return 0;
}