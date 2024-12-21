#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n1, n2;
    int multiplosDe2 = 0;
    int multiplosDe3 = 0;
    int multiplosDe4 = 0;

    printf("N1: ");
    scanf("%d", &n1);

    printf("N2: ");
    scanf("%d", &n2);

    if (n1 <= n2)
    {
        for (int i = n1; i <= n2; i++)
        {
            if (i % 2 == 0)
            {
                multiplosDe2++;
            }
            if (i % 3 == 0)
            {
                multiplosDe3++;
            }
            if (i % 4 == 0)
            {
                multiplosDe4++;
            }
        }
    }
    else
    {
        for (int i = n1; i >= n2; i--)
        {
            if (i % 2 == 0)
            {
                multiplosDe2++;
            }
            if (i % 3 == 0)
            {
                multiplosDe3++;
            }
            if (i % 4 == 0)
            {
                multiplosDe4++;
            }
        }
    }

    printf("Quantidade de múltiplos de 2: %d\n", multiplosDe2);
    printf("Quantidade de múltiplos de 3: %d\n", multiplosDe3);
    printf("Quantidade de múltiplos de 4: %d\n", multiplosDe4);

    return 0;
}
