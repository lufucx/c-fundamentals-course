#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int lePositivo() {
    int n;
    do {
        printf("Entre com um valor positivo: ");
        scanf("%d", &n);
        if (n <= 0) {
            printf("O valor deve ser positivo!\n");
        }
    } while (n <= 0);
    return n;
}

int somaDivisores(int n) {
    int soma = 0;
    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            soma += i;
        }
    }
    return soma;
}

bool saoAmigos(int n1, int n2) {

    return (somaDivisores(n1) == n2) && (somaDivisores(n2) == n1);

}
int main () {
    int n1[5];
    int n2[5];

    for (int i = 0; i < 5; i++) {

        printf("n1[%d]: ", i);
        n1[i] = lePositivo();

        printf("n2[%d]: ", i);
        n2[i] = lePositivo();

        if (saoAmigos(n1[i], n2[i])) {
            printf("%d e %d sao amigos\n", n1[i], n2[i]);
        } else {
            printf("%d e %d nao sao amigos\n", n1[i], n2[i]);
        }
    }

    return 0;
}