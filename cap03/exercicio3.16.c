#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n1 = 1, n2 = 1, n3;
    int n = 20;

    printf("%d %d ", n1, n2);

    for (int i = 3; i <= n; i++) { 
        n3 = n1 + n2;
        printf("%d ", n3);
        n1 = n2; 
        n2 = n3;
    }

    printf("\n");
    return 0;
}
