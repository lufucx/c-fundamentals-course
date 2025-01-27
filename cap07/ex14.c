#include <stdio.h>
#include <stdbool.h>

void imprimeDuplaClassificada(int n1, int n2, bool ordemCrescente) {
    if (ordemCrescente) {
        if (n1 > n2) {
            printf("%d <= %d\n", n2, n1);
        } else {
            printf("%d <= %d\n", n1, n2);
        }
    } else {
        if(n1 > n2) {
            printf("%d >= %d\n", n1, n2);
        } else {
            printf("%d >= %d\n", n2, n1);
        }
    }
}

int main() {
    int n1[5], n2[5];

    for (int i = 0; i < 5; i++) {
        printf("n1[%d]: ", i);
        scanf("%d", &n1[i]);

        printf("n2[%d]: ", i);
        scanf("%d", &n2[i]);
    }

    for (int i = 0; i < 5; i++) {
        printf("%d e %d: ", n1[i], n2[i]);
        if (i % 2 == 0) {
            imprimeDuplaClassificada(n1[i], n2[i], true);
        } else {
            imprimeDuplaClassificada(n1[i], n2[i], false);
        }
    }

    return 0;
}
