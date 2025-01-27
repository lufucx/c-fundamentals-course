#include <stdio.h>
#include <stdbool.h>

bool ehPrimo(int n) {
    if (n < 2) {
        return false; 
    }
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    for (int i = 1; i <= 20; i++) {
        if (ehPrimo(i)) {
            printf("%d: eh primo\n", i);
        } else {
            printf("%d: nao eh primo\n", i);
        }
    }

    return 0;
}
