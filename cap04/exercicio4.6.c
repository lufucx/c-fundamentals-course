#include <stdio.h>

int main(void)
{
    int array[5];
    int quantidade = 0;
    int indices[5];
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
            indices[quantidade] = i; // Armazena o índice encontrado
            quantidade++;
        }
    }

    return 0;
}
