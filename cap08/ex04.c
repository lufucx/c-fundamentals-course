#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void decompoeData(int diaDoAno, int ano, int *mes, int *dia);
bool ehBissexto(int ano);

int main() {
    int diaDoAno, ano, mes, dia;

    printf("Dia do ano: ");
    scanf("%d", &diaDoAno);

    printf("Ano: ");
    scanf("%d", &ano);

    decompoeData(diaDoAno, ano, &mes, &dia);
    printf("O dia %d do ano %d cai no dia %d do mes %d", diaDoAno, ano, dia, mes);

    return 0;

}

void decompoeData(int diaDoAno, int ano, int *mes, int *dia) {
    int diasPorMes[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; 

    if(ehBissexto(ano)) {
        diasPorMes[1] = 29;
    }

    *mes = 0;
    
    while (diaDoAno > diasPorMes[*mes]) {
        diaDoAno -= diasPorMes[*mes];
        (*mes)++;
    }

    *mes += 1;
    *dia = diaDoAno;
}

bool ehBissexto(int ano) {
    return (ano % 400 == 0) || (ano % 4 == 0 && ano % 100 != 0);
}