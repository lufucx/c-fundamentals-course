#include <stdio.h>
#include <stdlib.h>

void trocar (int *n1, int *n2);

void trocar (int *n1, int *n2) {
    int temp;
    
    temp = *n1; 
    *n1 = *n2;  
    *n2 = temp; 
}

int main (void) {
    int n1;
    int n2;
    
    printf("N1: ");
    scanf("%d", &n1);

    printf("N2: ");
    scanf("%d", &n2);

    printf("Antes de trocar: %d e %d\n", n1, n2);
    trocar(&n1, &n2);
    printf("Depois de trocar: %d e %d\n", n1, n2);

    return 0;

}