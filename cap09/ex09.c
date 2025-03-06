#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void inverter(char *destino, const char *origem) {
    int len = strlen(origem);

    for (int i = 0; i < len; i++) {
        destino[i] = origem[len - 1 - i];
    }

    destino[len] = '\0'; 
}


int main (void) {
    char origem[101], destino[101];

    printf("String: ");
    fgets(origem, sizeof(origem), stdin);

    size_t len = strlen(origem);

    if(len > 0 && origem[len - 1] == '\n') {
        origem[len - 1] = '\0';
    }

    inverter(destino, origem);

    printf("Invertida: %s\n", destino);

    return 0;

}