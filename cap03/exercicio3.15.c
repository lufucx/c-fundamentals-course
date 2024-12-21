#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int numero;
    int fatorial = 1;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &numero);

    if (numero < 0) {
        printf("Nao ha fatorial de numero negativo.\n");
    } else {
        for (int i = 1; i <= numero; i++) {
            fatorial *= i;
        }

        printf("%d! = %d\n", numero, fatorial);
    }

    return 0;
}
