#include <stdlib.h>
#include <stdio.h>

void decompoeTempo(int totalSeg, int *horas, int *minutos, int *seg);

int main (void) {
    int totalSeg, horas, minutos, seg;

    printf("Tempo em segundos: ");
    scanf("%d", &totalSeg);

    decompoeTempo(totalSeg, &horas, &minutos, &seg);

    printf("%d segundo(s) corresponde(m) a: \n", totalSeg);
    printf("%d hora(s)\n", horas);
    printf("%d minuto(s)\n", minutos);
    printf("%d segundo(s)\n", seg);

}

void decompoeTempo(int totalSeg, int *horas, int *minutos, int *seg) {
    *horas = totalSeg / 3600;
    *minutos = (totalSeg % 3600) / 60;
    *seg = totalSeg % 60;
}
