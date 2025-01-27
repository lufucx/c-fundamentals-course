#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int lePositivo() {
    int n;
    do {
        printf("Entre com um valor positivo: ");
        scanf("%d", &n);
        if (n <= 0) {
            printf("O valor deve ser positivo!\n");
        }
    } while (n <= 0);
    return n;
}

bool ehTriangulo(int ladoA, int ladoB, int ladoC) {
    return (ladoA + ladoB > ladoC) && (ladoA + ladoC > ladoB) && (ladoB + ladoC > ladoA);
}

int tipoTriangulo(int ladoA, int ladoB, int ladoC) {
    if (ladoA == ladoB && ladoB == ladoC) {
        return 1;
    } else if (ladoA == ladoB || ladoA == ladoC || ladoB == ladoC) {
        return 2;
    } else {
        return 3;
    }
}

int main() {
    int ladoA[5], ladoB[5], ladoC[5];

    for (int i = 0; i < 5; i++) {
        printf("ladoA[%d]: ", i);
        ladoA[i] = lePositivo();

        printf("ladoB[%d]: ", i);
        ladoB[i] = lePositivo();

        printf("ladoC[%d]: ", i);
        ladoC[i] = lePositivo();

        if (ehTriangulo(ladoA[i], ladoB[i], ladoC[i])) {
            int tipo = tipoTriangulo(ladoA[i], ladoB[i], ladoC[i]);
            switch (tipo) {
                case 1:
                    printf("Valores %d, %d e %d: triangulo equilatero\n", ladoA[i], ladoB[i], ladoC[i]);
                    break;
                case 2:
                    printf("Valores %d, %d e %d: triangulo isosceles\n", ladoA[i], ladoB[i], ladoC[i]);
                    break;
                case 3:
                    printf("Valores %d, %d e %d: triangulo escaleno\n", ladoA[i], ladoB[i], ladoC[i]);
                    break;
            }
        } else {
            printf("Valores %d, %d e %d: nao formam um triangulo\n", ladoA[i], ladoB[i], ladoC[i]);
        }
    }

    return 0;
}
