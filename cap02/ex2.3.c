#include <stdio.h>

int main() {
    int num1, num2, num3;

    // Solicitar os três números ao usuário
    printf("Digite o primeiro número inteiro: ");
    scanf("%d", &num1);
    printf("Digite o segundo número inteiro: ");
    scanf("%d", &num2);
    printf("Digite o terceiro número inteiro: ");
    scanf("%d", &num3);

    // Comparar e exibir os números em ordem crescente
    if (num1 <= num2 && num1 <= num3) {
        if (num2 <= num3) {
            printf("Ordem crescente: %d, %d, %d\n", num1, num2, num3);
        } else {
            printf("Ordem crescente: %d, %d, %d\n", num1, num3, num2);
        }
    } else if (num2 <= num1 && num2 <= num3) {
        if (num1 <= num3) {
            printf("Ordem crescente: %d, %d, %d\n", num2, num1, num3);
        } else {
            printf("Ordem crescente: %d, %d, %d\n", num2, num3, num1);
        }
    } else {
        if (num1 <= num2) {
            printf("Ordem crescente: %d, %d, %d\n", num3, num1, num2);
        } else {
            printf("Ordem crescente: %d, %d, %d\n", num3, num2, num1);
        }
    }

    return 0;
}
