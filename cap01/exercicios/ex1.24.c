#include <stdio.h>
#include <stdlib.h>

int main (void){
    float valorHoraAula;
    int quantidadeAula;
    float descontoInss;

    float salarioBruto;
    float salarioLiquido;

    printf("Valor da hora/aula: ");
    scanf("%f", &valorHoraAula);

    printf("Quantidade de aulas: ");
    scanf("%d", &quantidadeAula);

    printf("Porcentagem de desconto do INSS: ");
    scanf("%f", &descontoInss);

    salarioBruto = (valorHoraAula * quantidadeAula);
    descontoInss = ((descontoInss / 100) * salarioBruto);
    salarioLiquido = (salarioBruto - descontoInss);

    printf("Salário Liquido: %.2f\n", salarioLiquido);

    return 0;
    
}