#include <stdio.h>
#include <stdlib.h>
// uma variavel global e uma variavel que pode ser utilizada por todas as funcoes do codigo

//devem ser criadas fora da variavel main

int gVariavelGlobal = 2; //coloca um g para indicar que a variavel e global

int main()
{
    printf("%i\n", gVariavelGlobal);


    return 0;
}
// se eu usar gVariavelGlobal *= 2; em outra funcao ela vai usar potencia de 2 assim como a recursiva;
