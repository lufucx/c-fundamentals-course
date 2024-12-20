#include <stdio.h>
#include <stdlib.h>

int main (void) {
    int n1;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n1);

    switch(n1){
        case (2):
        printf("O valor fornecido foi %d.\n", n1);
        break;

        case (4):
        printf("O valor fornecido foi %d.\n", n1) ;
        break;

        case (6): 
        printf("O valor fornecido foi %d.\n", n1);
        break;

        case (8):
        printf("O valor fornecido foi %d.\n", n1);
        break;

        default:
        printf("Valor invalido.");
        break;
    }

    return 0;
}