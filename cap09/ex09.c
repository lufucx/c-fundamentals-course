#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void inverter(char *destino, const char *origem) {
    int len = strlen(origem);

    for (int i = 0; i < len; i++) {
        destino[i] = origem[len - 1 - i];
    }

    destino[len] = "\0";
}


int main (void) {
    char origem[101], destino[101];

    printf("String: ");
    fgets(origem, sizeof(origem), stdin);

}