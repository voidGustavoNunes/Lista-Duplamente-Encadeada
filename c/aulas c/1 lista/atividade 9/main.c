#include <stdio.h>
#include <stdlib.h>

int main()
{
    float km, valor_dias, valor_km, valor_total;
    int dias;

    printf("\t\tCALCULAR KM DE UM CARRO ALUGADO\n\n");

    printf("Digite a quantidade  de km: ");
    scanf("%f", &km);

    printf("\nAgora digite a quantidade de dias alugados: ");
    scanf("%i", &dias);

    valor_dias = 60 * dias;
    valor_km = 0.15 * km;
    valor_total = valor_dias * valor_km;

    printf("O valor total a se pagar e de: %.2f", valor_total);


    return 0;
}
