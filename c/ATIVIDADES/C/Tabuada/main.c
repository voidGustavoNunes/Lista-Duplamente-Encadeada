#include <stdio.h>
#include <stdlib.h>


int main()
{
    int tabuada = 0;
    printf("Digite a tabuada desejada: \n");
    scanf("%i", &tabuada);

    for (int x = 1; x<=10; x++){
        // 1 X 5 = 5;
        printf("%i X %i = %i\n", x, tabuada, tabuada * x);
    }


    return 0;
}
