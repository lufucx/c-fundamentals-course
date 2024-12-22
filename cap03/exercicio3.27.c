#include <stdio.h>
#include <stdlib.h>

int main (void) {
    int pessoaAtual = 1;
    float peso = 0.0;
    float pessoaMaisPesada = 0;
    float somaPesos = 0.0;
    float media = 0.0;
    int quantidade = 0;

    do {

        printf("Entre com o peso da pessoa %02d: ", pessoaAtual++);
        scanf("%f", &peso);

        if (peso > pessoaMaisPesada) {
            pessoaMaisPesada = peso;
        }

        if (peso > 60.0){
            somaPesos += peso;
            quantidade++;
        }

    } while (peso >= 0);

    if (quantidade > 0) {
        media = somaPesos / quantidade;
    }


    printf("Media dos pesos acima de 60kg: %.2f\n", media);
    printf("A pessoa mais pesada possui %.2f\n", pessoaMaisPesada);
    
}