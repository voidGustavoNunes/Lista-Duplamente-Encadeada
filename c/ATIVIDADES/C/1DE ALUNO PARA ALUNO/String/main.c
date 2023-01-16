#include <stdio.h>
#include <stdlib.h>

int main()
{
    char teste [] = {'b', 'r', 'a', 's', 'i', 'l'};

    for(int i; i < 6; ++i){ //dica: calcular quantos tem dentro de um vetor por scanf e imprimir
        printf("%c", teste[i]);

    }

    printf("\n");

    return 0;
}
