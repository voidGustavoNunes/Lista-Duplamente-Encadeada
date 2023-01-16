#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salario_minimo, salario, x;

    printf("Digite o valor do salario minimo: ");
    scanf("%f", &salario_minimo);
    printf("\n");

    printf("Digite o valor do seu salario: ");
    scanf("%f", &salario);

    x = salario / salario_minimo;

    printf("Você recebe %.2f salarios minimos", x);


    return 0;
}
