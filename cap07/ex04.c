#include <stdio.h>
#include <stdlib.h>

int lePositivo()
{
    int valor;
    do
    {
        printf("Entre com um valor positivo: ");
        scanf("%d", &valor);
        if (valor <= 0)
            printf("Valor inválido. Tente novamente.\n");
    } while (valor <= 0);
    return valor;
}

int somatorio(int n)
{
    int soma = 0;
    for (int i = 1; i <= n; i++)
    {
        soma += i;
    }
    return soma;
}

int main(void)
{
    int numeros[5];
    int soma;

    for (int i = 0; i < 5; i++)
    {
        printf("n[%d]: ", i);
        numeros[i] = lePositivo();
    }

    for (int i = 0; i < 5; i++)
    {
        soma = somatorio(numeros[i]);
        printf("Somatorio de 1 a %d: %d\n", numeros[i], soma);
    }

    return 0;
}
