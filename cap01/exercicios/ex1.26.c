#include <stdio.h>
#include <stdlib.h>

int main (void) {
    float celsius;
    float fahrenheit;

    printf("Temperatura em graus Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = ((1.8 * celsius) + 32);

    printf("%.2f graus Celsius correspondem a %.2f graus Fahrenheit\n", celsius, fahrenheit);


}