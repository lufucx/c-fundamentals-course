#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int tamanho(const char *str) {
    return strlen(str);

}

int main() {
    char frase[101];


    printf("Frase: ");
    fgets(frase, sizeof(frase), stdin);

    size_t len = strlen(frase);
    
    if (len > 0 && frase[len - 1] == '\n') {
        frase[len - 1] = '\0';
    }
    
    int tam = tamanho(frase);

    printf("%d caractere(s)", tam);

    return 0;

}