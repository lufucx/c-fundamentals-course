#include <stdio.h>

int main(void) {
    int valor;
    int maiorNumero = 0;
    int menorNumero = 0;
    int primeiroNumero = 1;

    do {
        printf("Entre com um valor: ");
        scanf("%d", &valor);

        if (valor >= 0) {
            if (primeiroNumero) {
                maiorNumero = valor;
                menorNumero = valor;
                primeiroNumero = 0;
            } else {
                if (valor > maiorNumero) {
                    maiorNumero = valor;
                }
                if (valor < menorNumero) {
                    menorNumero = valor;
                }
            }
        }
    } while (valor >= 0);

    if (primeiroNumero) {
        maiorNumero = 0;
        menorNumero = 0;
    }

    printf("Maior numero: %d\n", maiorNumero);
    printf("Menor numero: %d\n", menorNumero);

    return 0;
}
