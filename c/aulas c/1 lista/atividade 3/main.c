#include <stdio.h>
#include <stdlib.h>

int main()
{
    float produto, x;

    printf("Digite o valor de um produto: ");
    scanf("%f", &produto);
    printf("\n");

    x = produto * 0.09;
    produto = produto - x;

    printf("Desconto de 9 por cento aplicado\n");
    printf("O valor total ficou de: %.2f", produto);


    return 0;
}
