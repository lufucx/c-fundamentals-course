#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int contarOcorrencias(const char *str, char c) {
    int contador = 0;
    while (*str != '\0') {
        if (*str == c) {
            contador++;
        }
        str++;
    }
    return contador;
}

int main() {
    char caractere;
    char frase[101];

    printf("Caractere: ");
    scanf("%c", &caractere);
    getchar();

    while(1) {
        printf("Frase: ");
        fgets(frase, sizeof(frase), stdin);

        size_t len = strlen(frase);
        if (len > 0 && frase[len - 1] == '\n') {
            frase[len - 1] = '\0';
        }

        if (strcmp(frase, "fim") == 0) {
            break;
        }

        int ocorrencias = contarOcorrencias(frase, caractere);
        printf("'%s' tem %d ocorrencia(s) do caractere '%c'.\n", frase, ocorrencias, caractere);
    }

    return 0;
}