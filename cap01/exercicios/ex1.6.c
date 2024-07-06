#include <stdlib.h>
#include <stdio.h>

int main (void) {
    int numero1;
    int numero2;

    int adicao;
    int subtracao;
    int multiplicacao;
    int divisao;

    printf("Digite o primeiro numero: ");
    scanf("%d", &numero1);

    printf("Digite o segundo numero: ");
    scanf("%d", &numero2);

    adicao = (numero1 + numero2);
    subtracao = (numero1 - numero2);
    multiplicacao = (numero1 * numero2);
    divisao = (numero1 / numero2);

    printf("%d + %d = %d\n", numero1, numero2, adicao);
    printf("%d - %d = %d\n", numero1, numero2, subtracao);
    printf("%d * %d = %d\n", numero1, numero2, multiplicacao);
    printf("%d / %d = %d\n", numero1, numero2, divisao);



}