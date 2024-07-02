#include <stdio.h>
#include <stdlib.h>


int main (void) {

float pi = 3.1415;
float raio = 20.78;
float circunferencia = 2 * pi * raio;
float area = pi * raio * raio;

printf("O circulo de raio %f tem:\n", raio);
printf("\tCircunferencia = %.2f\n", circunferencia);
printf("\tÁrea = %.2f\n", area);

return 0;
}

