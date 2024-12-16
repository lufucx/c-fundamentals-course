#include <stdio.h>
#include <stdlib.h>

int main (void) {
    float n1, n2, soma, subtracao;

    printf("Digite o primeiro numero decimal: ");
    scanf("%f", &n1);


    printf("Digite o segundo numero decimal: ");
    scanf("%f", &n2);

    soma = n1 + n2;

    subtracao = n1 - n2;

    if (soma > 10){
        printf("Os numeros fornecidos foram %.2f e %.2f", n1, n2);
    } else {
        printf("A subtracao entre os numeros e %.2f - %.2f = %.2f", n1, n2, subtracao);
    }
    
    return 0;
}