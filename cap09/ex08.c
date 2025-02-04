#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (void) {
    char string1[101], string2[101], string3[101];

    char *primeira, *segunda, *terceira;

    printf("Palavra 1: ");
    fgets(string1, sizeof(string1), stdin);

    printf("Palavra 2: ");
    fgets(string2, sizeof(string2), stdin);
    
    printf("Palavra 3: ");
    fgets(string3, sizeof(string3), stdin);

    if (string1[strlen(string1) - 1] == '\n') string1[strlen(string1) - 1] = '\0';
    if (string2[strlen(string2) - 1] == '\n') string2[strlen(string2) - 1] = '\0';
    if (string3[strlen(string3) - 1] == '\n') string3[strlen(string3) - 1] = '\0';

    primeira = string1;
    segunda = string2;
    terceira = string3;

    if (strcmp(primeira, segunda) > 0) {
        char *temp = primeira;
        primeira = segunda;
        segunda = temp;
    } 

    if (strcmp(primeira, terceira) > 0) {
        char *temp = primeira;
        primeira = terceira;
        terceira = temp;
    }

    if (strcmp(segunda, terceira) > 0) {
        char *temp = segunda;
        segunda = terceira;
        terceira = temp;
    }

    printf("Ordem Alfabetica:\n1. %s\n2. %s\n3. %s\n", primeira, segunda, terceira);

    return 0;
}