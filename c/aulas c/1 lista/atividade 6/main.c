#include <stdio.h>
#include <stdlib.h>

int main()
{
    float f, c;

    printf("\t\tPROGRAMA DE FARENHEIT PARA CELSIUS\n\n");

    printf("Digite a temperatura em farenheit: ");
    scanf("%f", &f);

    c = (f - 32) / 1.8;

    printf("A temperatura em celsius e de: %.2f\n", c);


    return 0;
}
