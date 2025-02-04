#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (void) {
    char string1[101], string2[101];

    for (int i = 0; i < 5; i++) {
        printf("Par %d\n", i + 1);

        printf("Palavra 1: ");
        fgets(string1, sizeof(string1), stdin);

        printf("Palavra 2: ");
        fgets(string2, sizeof(string2), stdin);

        
        size_t len1 = strlen(string1);
        size_t len2 = strlen(string2);

        if (len1 > 0 && string1[len1 - 1] == '\n') string1[len1 - 1] = '\0';
        if (len2 > 0 && string2[len2 - 1] == '\n') string2[len2 - 1] = '\0';

        int cmp = strcmp(string1, string2);

        if (cmp == 0) {
            printf("%s - %s: Iguais\n", string1, string2);
        } else if (cmp < 0) {
            printf("%s - %s: Ordem Crescente\n", string1, string2);
        } else {
            printf("%s - %s: Ordem Decrescente\n", string1, string2);
        }
    }

    return 0;
}