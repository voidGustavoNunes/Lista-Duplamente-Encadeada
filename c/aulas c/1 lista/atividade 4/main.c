#include <stdio.h>
#include <stdlib.h>

int main()
{
    float produto, x, desconto;

    printf("Digite o valor de um produto: ");
    scanf("%f", &produto);
    printf("\n");
    printf("Digite o valor do desconto(em porcentagem): ");
    scanf("%f", &desconto);
    printf("\n");

    printf("Desconto de %.f por cento aplicado\n", desconto);
    desconto = desconto / 100;
    x = produto * desconto;
    produto = produto - x;


    printf("O valor total ficou de: %.2f reais", produto);



    return 0;
}
