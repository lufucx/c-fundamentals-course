#include <stdio.h>
#include <stdlib.h>

int pInterno (const double *a1, const double *a2, double *pi, int n);

int pInterno (const double *a1, const double *a2, double *pi, int n) {
    for (int i = 0; i < n; i++) {
        pi[i] = a1[i] * a2[i];
    }
}

int main () {
    double a1[5], a2[5], pi[5];

    for (int i = 0; i < 5; i++) {
        printf("a1[%d]: ", i);
        scanf("%lf", &a1[i]);
    }

    for (int i = 0; i < 5; i++) {
        printf("a2[%d]: ", i);
        scanf("%lf", &a2[i]);
    }

    pInterno(a1, a2, pi, 5);

    for (int i = 0; i < 5; i++) {
        printf("%.2lf * %.2lf = %.2lf\n", a1[i], a2[i], pi[i]);
    }

    return 0;

}