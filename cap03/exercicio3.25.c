#include <stdio.h>
#include <stdlib.h>

int main (void) {
    int valor;
    int soma = 0;
    float media = 0.0;
    int quantidade = 0;


    do {

        printf("Entre com um valor: ");
        scanf("%d", &valor);

            if (valor >= 0){
                soma += valor;
                quantidade++;
            }
        } while (valor >= 0);

        if(quantidade > 0){
            media = soma / quantidade;
        }

    printf("Quantidade: %d\n", quantidade);
    printf("Soma: %d\n", soma);
    printf("Media: %.2f\n", media);
}