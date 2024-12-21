#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float n1, n2, resultado;
    char opcao;

    printf("Digite o primeiro numero: ");
    scanf("%f", &n1);

    printf("Digite o segundo numero: ");
    scanf("%f", &n2);

    printf("Escolha uma operacao de acordo com o menu:\n +) Adicao;\n -) Subtracao;\n *) Multiplicacao;\n /) Divisao.\n Operacao: ");
    scanf(" %c", &opcao);

    switch(opcao) {
        case ('+'):
        resultado = n1 + n2;
        printf("%.2f + %.2f = %.2f", n1, n2 , resultado);
        break;

        case('-'):
        resultado = n1 - n2;
        printf("%.2f - %.2f = %.2f", n1, n2, resultado);
        break;

        case('*'):
        resultado = n1 * n2;
        printf("%.2f * %.2f = %.2f", n1, n2, resultado);  
        break;

        case('/'):
        resultado = n1 / n2;
        printf("%.2f / %.2f = %.2f", n1, n2, resultado);
        break;

        default:
        printf("Operaçao invalida");
        break;


    }

    return 0;

}