#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main (void) {
    bool maiorDeIdade;
    int idade;

    printf("Entre com sua idade: ");
    scanf("%d", &idade);
    
    if(idade < 18) {
        maiorDeIdade = false;
    } else {
        maiorDeIdade = true;
    }

    if (maiorDeIdade) {
        printf("Você e maior de idade");
    } else {
        printf("Você e menor de idade");
    }

}