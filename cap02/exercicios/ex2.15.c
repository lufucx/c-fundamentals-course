#include <stdio.h>
#include <stdlib.h>

int main (void) {
    int idade;

    printf("Idade: ");
    scanf("%d", &idade);

    if (idade < 16) {
        printf("Nao eleitor");
    } else if (idade >= 18 && idade <= 65) {
        printf("Eleitor obrigatorio");
    } else if ((idade >= 16 && idade < 18) || idade > 65) {
        printf("Eleitor facultativo");
    }

    return 0;
}