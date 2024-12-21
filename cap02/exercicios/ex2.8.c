#include <stdio.h>
#include <stdlib.h>

int main (void) {
    float n1, n2, n3, soma;

    printf("Digite o primeiro numero: ");
    scanf("%f", &n1);

    printf("Digite o segundo numero: ");
    scanf("%f", &n2);

    printf("Digite o terceiro numero: ");
    scanf("%f", &n3);

    if (n1 >= n2 && n2 >= n3) {
        soma = n1 + n2;

        printf("A soma dos dois maiores numeros e %.2f", soma);

    } else if (n3 >= n1 && n2 >= n1) {
        soma = n3 + n2;
        printf("A soma dos dois maiores numeros e %.2f", soma);

    } else if (n2 >= n3 && n1 >= n2) {
        soma = n2 + n1;
        printf("A soma dos dois maiores numeros e %.2f", soma);

    }
    return 0;
}