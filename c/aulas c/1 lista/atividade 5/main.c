#include <stdio.h>
#include <stdlib.h>


// F = (9 x C + 160) / 5
int main()
{
    float celsius, f;

    printf("\t\tPROGRAMA CELSIUS PARA FARHENHEIT\n\n\n");

    printf("Informe a temperatura em graus celsius: ");
    scanf("%f", &celsius);

    f = (9 * celsius + 160) / 5;

    printf("A temperatura em farhenheit e de: %.2f", f);
    return 0;
}
