#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main (void) {
    char texto[101];

    printf("Sentenca: ");
    fgets(texto, sizeof(texto), stdin);

    size_t len = strlen(texto);

    if (len > 0 && texto[len - 1] == '\n') {
        texto[len - 1] = '\0';
        len--; 
    }

    for (size_t i = 0; i < len; i++) {
        printf("%s\n", texto);
    }

    return 0;
}