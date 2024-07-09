#include <stdio.h>
#include <stdlib.h>

int main (void) {
    int numero;
    int sucessor;
    int antecessor;

    printf("Forneca um mundo inteiro: ");
    scanf("%d", &numero);

    sucessor = (numero + 1);
    antecessor = (numero - 1);
    
    printf("Sucessor de %d: %d\n", numero, sucessor);
    printf("Antecessor de %d: %d\n", numero, antecessor);

    return 0;
    

}