#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n1, n2;
    int multiplosDe2 = 0;

    printf("N1: ");
    scanf("%d", &n1);

    printf("N2: ");
    scanf("%d", &n2);

    if (n1 <= n2) {
        for (int i = n1; i <= n2; i++) {
            if (i % 2 == 0) {
                multiplosDe2++;
            }
        }
    } else {
        for (int i = n1; i >= n2; i--) {
            if (i % 2 == 0) {
                multiplosDe2++;
            }
        }
    }


    printf("%d ", multiplosDe2);

    return 0;
}