#include <stdio.h>
#include <stdlib.h>

int main (void) {
    float celsius, fahrenheit;
    char opcao;

    printf("Escolha uma operacao de acordo com o menu:\n C) Celsius -> Fahrenheit;\n F) Fahrenheit -> Celsius;\n Opcao: ");
    scanf(" %c", &opcao);

    switch(opcao) {
        case 'F':
        printf("Entre com a temperatura em graus Fahrenheits: ");
        scanf("%f", &fahrenheit);
        celsius = (fahrenheit - 32) / 1.8;
        printf("%.2f graus Celsius correspondem a %.2f graus Fahrenheit.", celsius, fahrenheit);
        break;

        case 'C':
        printf("Entre com a temperatura em graus Celsius: ");
        scanf("%f", &celsius);
        fahrenheit = (1.8 * celsius) + 32;
        printf("%.2f graus Fahrenheit correspondem a %.2f graus Celsius.", fahrenheit, celsius);
        break;

        default:
        printf("Operaçao invalida.");
        break;

    }
    return 0;
}