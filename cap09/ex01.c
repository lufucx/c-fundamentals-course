#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (void) {

    char texto[41];
    
    printf("String: ");
    fgets(texto, 41, stdin);

    for (int i = 0; i < 5; i++) {
        printf("%c ", texto[i]);
    }

    printf(" %s", texto);
    

    return 0;

}
