#include <stdio.h>

float maiorNumero(float n1, float n2)
{
    if (n1 > n2)
        return n1;
    else if (n2 > n1)
        return n2;
    else
        return -1; 
}

int main(void)
{
    float valor1, valor2;
    int pares = 5;

    for (int i = 0; i < pares; i++)
    {
        printf("Par %d:\n", i + 1);
        
        do
        {
            printf("Digite o primeiro valor (positivo): ");
            scanf("%f", &valor1);
            if (valor1 <= 0)
                printf("Valor inválido. Deve ser maior que zero.\n");
        } while (valor1 <= 0);

        do
        {
            printf("Digite o segundo valor (positivo): ");
            scanf("%f", &valor2);
            if (valor2 <= 0)
                printf("Valor inválido. Deve ser maior que zero.\n");
        } while (valor2 <= 0);

        float maior = maiorNumero(valor1, valor2);
        if (maior == -1)
            printf("Eles sao iguais.\n");
        else
            printf("O maior valor do par é: %.2f\n", maior);
    }

    return 0;
}
