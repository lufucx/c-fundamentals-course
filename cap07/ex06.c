#include <stdio.h>

int lePositivo() {
    int n;
    do {
        printf("");
        scanf("%d", &n);
        if (n <= 0) {
            printf("O valor deve ser positivo!\n");
        }
    } while (n <= 0);
    return n;
}

int somaDivisores(int n) {
    int soma = 0;
    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            soma += i; 
        }
    }
    return soma;
}

int main() {
    int numeros[5];

    for (int i = 0; i < 5; i++) {
        printf("n[%d]: ", i);
        numeros[i] = lePositivo();
    }

    for (int i = 0; i < 5; i++) {
        int soma = somaDivisores(numeros[i]);
        printf("Soma dos divisores de %d: %d\n", numeros[i], soma);
    }

    return 0;
}
