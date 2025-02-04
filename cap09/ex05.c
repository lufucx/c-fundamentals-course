#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


int main (void) {
    char texto[101];

    printf("Sentenca: ");
    fgets(texto, sizeof(texto), stdin);

    size_t len = strlen(texto);


    for (int i = 0; i < 5; i++) {
        printf("%s\n", texto);
    }

    return 0;
}