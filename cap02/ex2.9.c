#include <stdio.h>
#include <stdlib.h>

int main (void){
    int poligono;
    float lado, perimetro;


    printf("Digite o numero de lados do poligono: ");
    scanf("%d", &poligono);

    printf("Digite a medida do lado: ");
    scanf("%f", &lado);

    if (poligono == 3){
        perimetro = (lado * 3);

        printf("TRIANGULO de perimetro %.2f", perimetro);
    } else if (poligono == 4){
        perimetro = (lado * lado);
        printf("QUADRADO de perimetro %.2f", perimetro);
    } else if (poligono == 5){

        printf("PENTAGONO");
    } else {
        printf("Perimetro nao identificado");
    }

    return 0;
}