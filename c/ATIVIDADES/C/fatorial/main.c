#include <stdio.h>
#include <stdlib.h>



// fatorial de 5 = 5.4.3.2.1 = 120;
int main()
{

    int x = 0;
    int y = 0;

    printf("Digite um numero para calcular seu fatorial: ");
    scanf("%i", &x);

    for ( ; x>= 0; x--){
        y = x * (x -1);
        x =- 1;


    }
    printf("O fatorial de %i : %i", x, y);

    return 0;
}
