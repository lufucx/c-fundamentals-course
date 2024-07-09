#include <stdio.h>
#include <stdlib.h>

int main (void) {
    int anoNascimento;
    int anoAtual;
    int idadeAproximada;

    printf("Ano de nascimento: ");
    scanf("%d", &anoNascimento);

    printf("Ano atual: ");
    scanf("%d", &anoAtual);

    idadeAproximada = (anoAtual - anoNascimento);

    printf("Idade aproximada: %d\n", idadeAproximada);

    return 0;
    
}