#include <stdio.h>
#include <stdlib.h>

//5 X 4 X 3 X 2 X 1

int main()
{
    int fatorial = 5;
    int resposta = 1;


    for ( ; fatorial >= 1; --fatorial){
        resposta = resposta * fatorial;


    }
    printf("O numero fatorial e: %i", resposta);



    return 0;
}
