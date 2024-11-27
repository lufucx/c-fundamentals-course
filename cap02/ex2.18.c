#include <stdio.h>
#include <stdlib.h>

int main (void) {
    int n1, n2;
    char opcao;
    int resultado;


    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);
    
    printf("Digite o segundo numero: ");
    scanf("%d", &n2);

    printf("Escolha sua opcao: \n");
    printf("Adicao: +\nSubtracao: -\nMultiplicacao: *\nDivisao: /\n");
    scanf(" %c", &opcao); 

    switch(opcao) {
        case '+':
            resultado = n1 + n2;
            printf("O resultado é %d + %d = %d\n", n1, n2, resultado);
            break;

        case '-':
            resultado = n1 - n2;
            printf("O resultado é %d - %d = %d\n", n1, n2, resultado);
            break;

        case '*':
            resultado = n1 * n2;
            printf("O resultado é %d * %d = %d\n", n1, n2, resultado);
            break;

        case '/':
            resultado = n1 / n2;
            printf("O resultado é %d / %d = %d\n", n1, n2, resultado);
            break;

        default:
            printf("Opção inválida");
            break;
    }

    return 0;
}