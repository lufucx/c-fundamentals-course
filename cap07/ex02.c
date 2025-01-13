#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define M_PI 3.14159265358979323846
float areaCirculo(float raio) {
    return M_PI * pow(raio, 2);
}

float circunferenciaCirculo(float raio) {
    return 2 * M_PI * raio;
}

int main() {
    float raio, area, circunferencia;

    printf("Raio: ");
    scanf("%f", &raio);

    area = areaCirculo(raio);
    circunferencia = circunferenciaCirculo(raio);

    printf("Area = %.2f\n", area);
    printf("Circunferencia = %.2f\n", circunferencia);

    return 0;
}