#include <stdio.h>
#include <stdlib.h>

int buscar(const int *a, int n, int chave);

int main() {
    int n[10], chave, resultado;

    for (int i = 0; i < 10; i++){
        printf("n[%d]: ", i);
        scanf("%d", &n[i]);
    }

    printf("Buscar por: ");
    scanf("%d", &chave);

    resultado = buscar(n, 10, chave);

    if (resultado != -1) {
        printf("O valor %d foi encontrado na posicao %d\n", chave, resultado);
    } else {
        printf("O valor %d nao foi encontrado\n", chave);
    }

    return 0;

}

int buscar(const int *a, int n, int chave) {
    for (int i = 0; i < n; i++) {
        if (a[i] == chave) {
            return i;
        }
    }
    return -1;
}
