#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float saldoInicial = 0.0;
    float saldoConta;
    float saldoOperacao;
    char operacao;

    printf("Saldo inicial: ");
    scanf("%f", &saldoInicial);
    saldoConta = saldoInicial;

    do
    {
        printf("\nOperacoes: \n 1) Deposito;\n 2) Saque;\n 3) Fim.\n");
        printf("Escolha uma operacao: ");
        scanf(" %c", &operacao);

        if (operacao == '1')
        {
            printf("Valor a depositar: ");
            scanf("%f", &saldoOperacao);

            if (saldoOperacao > 0)
            {
                saldoConta += saldoOperacao;
                printf("Deposito realizado. Saldo atual: %.2f\n", saldoConta);
            }
            else
            {
                printf("Valor invalido para deposito!\n");
            }
        }
        else if (operacao == '2')
        {
            printf("Valor a sacar: ");
            scanf("%f", &saldoOperacao);

            if (saldoOperacao > 0 && saldoOperacao <= saldoConta)
            {
                saldoConta -= saldoOperacao;
                printf("Saque realizado. Saldo atual: %.2f\n", saldoConta);
            }
            else
            {
                printf("Saldo insuficiente ou valor invalido para saque!\n");
            }
        }
        else if (operacao == '3')
        {
            printf("Operacao finalizada. Saldo final: %.2f\n", saldoConta);
        }
        else
        {

            printf("Operacao invalida! Tente novamente.\n");
        }
    } while (operacao != '3');
    return 0;
}
