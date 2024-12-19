#include <stdio.h>
#include <stdlib.h>

int main (void) {
    int homemA, homemB, mulherA, mulherB;
    int homemMaisVelho, homemMaisNovo, mulherMaisVelha, mulherMaisNova, soma, produto;

    printf("Idade de Homem A: ");
    scanf("%d", &homemA);

    printf("Idade de Homem B: ");
    scanf("%d", &homemB);

    printf("Idade de Mulher A: ");
    scanf("%d", &mulherA);

    printf("Idade de Mulher B: ");
    scanf("%d", &mulherB);

    if (homemA > homemB) {
        homemMaisVelho = homemA;
        homemMaisNovo = homemB;
    } else {
        homemMaisVelho = homemB;
        homemMaisNovo = homemA;
    }

    if (mulherA > mulherB) {
        mulherMaisVelha = mulherA;
        mulherMaisNova = mulherB;
    } else {
        mulherMaisVelha = mulherB;
        mulherMaisNova = mulherA;
    }

    soma = homemMaisVelho + mulherMaisNova;
    produto = homemMaisNovo * mulherMaisVelha;

    printf("Idade homem mais velho + idade mulher mais nova = %d", soma);
    printf("Idade homem mais novo * idade mulher mais velha = %d", produto);

    return 0;
}
