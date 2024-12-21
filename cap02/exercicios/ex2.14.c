#include <stdio.h>
#include <stdlib.h>

int main (void) {
    float peso, altura, imc;

    printf("Digite o peso: ");
    scanf("%f", &peso);

    printf("Digite a altura: ");
    scanf("%f", &altura);

    imc = (peso / (altura * altura));

    if (imc < 17.0) {
        printf("IMC: %.2f\n", imc);
        printf("Voce esta muito abaixo do peso ideal!");
    } else if (imc >= 17.0 && imc < 18.5){
        printf("IMC: %.2f\n", imc);
        printf("Voce esta abaixo do peso ideal!");
    } else if (imc >= 18.5 && imc < 25) {
        printf("IMC: %.2f\n", imc);
        printf("Parabens! Voce esta em seu peso normal!");
    } else if (imc >= 25 && imc < 30) {
        printf("IMC: %.2f\n", imc);
        printf("Atencao, voce esta acima de seu peso (sobrepeso)!");
    } else if (imc >= 30 && imc < 35) {
        printf("IMC: %.2f\n", imc);
        printf("Cuidado! Obesidade grau I!");
    } else if (imc >= 35 && imc < 40) {
        printf("IMC: %.2f\n", imc);
        printf("Obesidade grau II");
    } else if (imc > 40) {
        printf("IMC: %.2f\n", imc);
        printf("Obesidade grau III");
    } else {
        printf("Valor invalido");
    }

    return 0;
}