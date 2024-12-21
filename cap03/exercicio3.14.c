#include <stdio.h>
#include <stdlib.h>

int main (void) {
    int n1, n2, soma = 0;

    printf("N1: ");
    scanf("%d", &n1);

    printf("N2: ");
    scanf("%d", &n2);

    if (n1 <= n2) {
        for (int i = n1; i <= n2; i++) {
            soma += i; 
        }
    } else {
        for (int i = n1; i >= n2; i--) {
            soma += i;
        }
    }

    printf("Somatório entre %d e %d: %d\n", n1, n2, soma);

    return 0;

}