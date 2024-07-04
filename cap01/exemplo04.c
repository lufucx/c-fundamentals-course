#include <stdio.h>
#include <stdlib.h>

int main (void) {

    char primeiraLetra;
    int idade;
    float peso;
    float altura;
    float imc;


    printf("Insira a primeira letra de seu nome: ");
    scanf( " %c", &primeiraLetra);

    printf("Insira a sua idade: " );
    scanf(" %d", &idade);

    printf("Insira o seu peso: ");
    scanf(" %f", &peso);

    printf("Insira a sua altura: ");
    scanf(" %f", &altura);

    imc = peso / (altura * altura);

    printf("%c, seu IMC é: %.2f", primeiraLetra, imc);



}