#include <stdio.h>
#include <stdlib.h>

int main (void) {
    int num1, num2;
    char escolha;
    int totalCalculos = 0;

    do {
        printf("N1: ");
        scanf("%d", &num1);

        do {
        printf("N2: ");
        scanf("%d", &num2);

        if (num2 == 0) {
            printf("Não existe divisao inteira por zero!");
        }
        } while (num2 == 0);

            
        printf("Resutaldo da divisao: %d\n", num1 / num2);
        totalCalculos++;
    
        printf("Deseja realizar outro calculo (S/N): ");
        scanf(" %c", &escolha);


    } while (escolha == 'S' || escolha == 's');

    printf("Total de calculos: %d", totalCalculos);

    return 0;


}