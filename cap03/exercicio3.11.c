#include <stdio.h>
#include <stdlib.h>

int main (void) {
    int x, y, i;

    printf("N1: ");
    scanf("%d", &x);

    printf("N2: ");
    scanf("%d", &y);

    if (x <= y) {
        for (i = x; i <= y; i++) {
            printf("%d ", i);
        }
    } else {
        for (i = x; i >= y; i--) {
            printf("%d", i);
        }
    }

    return 0;
}