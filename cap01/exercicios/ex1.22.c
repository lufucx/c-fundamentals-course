#include <stdio.h>
#include <stdlib.h>

int main (void) {
    float valorDoProduto;
    float desconto;
   
    printf("Valor do produto: ");
    scanf("%f", &valorDoProduto);
    
    desconto = (valorDoProduto * 0.91);

    printf("Preco de venda com 9%% de desconto: %.2f\n", desconto);

    return 0;
}