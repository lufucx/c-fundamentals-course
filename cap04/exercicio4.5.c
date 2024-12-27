#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int array[5];
    int quantidade = 0;
    int buscar;

    for (int i = 0; i < 5; i++)
    {
        printf("array[%d]: ", i);
        scanf("%d", &array[i]);
    }

    printf("Buscar por: ");
    scanf("%d", &buscar);

    for (int i = 0; i < 5; i++)
    {
        if (array[i] == buscar)
        {
            quantidade++;
            printf("O array contem %d ocorrencia do valor %d.", quantidade, buscar);
        }
    }
    printf("O array nao contem o valor %d.", buscar);
}
