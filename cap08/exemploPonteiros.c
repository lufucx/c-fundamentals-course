#include <stdio.h>
#include <stdlib.h>

int main (void) {
    int x = 4;

    int *pX = &x;

    printf("Valor de x: %d\n", *pX);
    printf("Endereco de x: %p\n", (void*)pX);
    
    return 0;
}