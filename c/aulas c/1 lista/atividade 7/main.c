#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, x, y;

    printf("Digite o valor de a: ");
    scanf("%i", &a);

    printf("\nAgora digite o valor de b: ");
    scanf("%i", &b);
    printf("\n");

    x = a;
    y = b;
    b = x;
    a = y;


    printf("O valor de A e de: %i", a);
    printf("\n");
    printf("O valor de B e de: %i", b);
    printf("\n");


    return 0;
}
