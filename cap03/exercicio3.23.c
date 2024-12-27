#include <stdio.h>
#include <stdlib.h>

int main (void) {
    int alunoAtual = 1;
    float nota;
    float somaNota = 0.0;
    float mediaAritmetica = 0.0;

    printf("Forneca a nota de 10 alunos:\n");

    for( int i = 0; i < 10; i++) {
       printf("Nota %02d: ", alunoAtual++);
       scanf("%f", &nota);
       somaNota += nota;
    }   

    mediaAritmetica = somaNota / 10;
    printf("A media aritmetica das notas e: %.2f", mediaAritmetica);

    return 0;
}