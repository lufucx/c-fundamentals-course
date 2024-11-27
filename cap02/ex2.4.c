#include <stdio.h>

int main(void) {
    int n1, n2, n3;

    printf("Digite o valor 1: ");
    scanf("%d", &n1);

    printf("Digite o valor 2: ");
    scanf("%d", &n2);

    printf("Digite o valor 3: ");
    scanf("%d", &n3);

    if (n1 <= n2 && n1 <= n3) {
        if (n2 <= n3) {
            printf("Os números em ordem crescente são: %d -> %d -> %d\n", n1, n2, n3);
        } else {
            printf("Os números em ordem crescente são: %d -> %d -> %d\n", n1, n3, n2);
        }
    } else if (n2 <= n1 && n2 <= n3) {
        if (n1 <= n3) {
            printf("Os números em ordem crescente são: %d -> %d -> %d\n", n2, n1, n3);
        } else {
            printf("Os números em ordem crescente são: %d -> %d -> %d\n", n2, n3, n1);
        }
    } else { 
        if (n1 <= n2) {
            printf("Os números em ordem crescente são: %d -> %d -> %d\n", n3, n1, n2);
        } else {
            printf("Os números em ordem crescente são: %d -> %d -> %d\n", n3, n2, n1);
        }
    }

    return 0;
}
