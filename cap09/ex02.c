#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main (void) {
    char texto[41];

    printf("Sentenca: ");
    fgets(texto, 41, stdin);
    size_t len = strlen(texto);

    if (len > 0 && texto[len - 1] == '\n') {
        texto[len - 1] = '\0';
        len--; 
    }

    printf("Primeiro caractere: %c \n", texto[0]);
    printf("Ultimo caractere: %c \n", texto[len - 1]);
    printf("Numero de caracteres: %zu", len);
    
    return 0;


}