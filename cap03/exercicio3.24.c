#include <stdio.h>
#include <stdlib.h>

int main (void) {
    int menor21 = 0; 
    int maior50 = 0;
    int pessoaAtual = 1;
    int idade;

    do  {

        printf("Idade da pessoa %02d: ", pessoaAtual++);
        scanf("%d", &idade);

        if (idade >= 0){
            if (idade < 21){
                menor21++;
            } else if ( idade > 50){
                maior50++;
            }
        }
    } while (idade >= 0 );

    printf("Total de pessoas menores de 21: %d\n", menor21);
    printf("Total de pessoas com mais de 50 anos: %d\n ", maior50);







    return 0;

}